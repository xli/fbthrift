/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

use std::net::SocketAddr;
use std::sync::Arc;
use std::time::Duration;

use anyhow::anyhow;
use anyhow::Result;
use clap::Parser;
use futures::stream::StreamExt;
use rpc::rpc::StreamBasicClientInstruction;
use rpc::rpc::StreamBasicClientTestResult;
use rpc::rpc::StreamChunkTimeoutClientInstruction;
use rpc::rpc::StreamChunkTimeoutClientTestResult;
use rpc::rpc::StreamCreditTimeoutClientInstruction;
use rpc::rpc::StreamCreditTimeoutClientTestResult;
use rpc::rpc::StreamDeclaredExceptionClientInstruction;
use rpc::rpc::StreamDeclaredExceptionClientTestResult;
use rpc::rpc::StreamInitialDeclaredExceptionClientInstruction;
use rpc::rpc::StreamInitialDeclaredExceptionClientTestResult;
use rpc::rpc::StreamInitialResponseClientInstruction;
use rpc::rpc::StreamInitialResponseClientTestResult;
use rpc::rpc::StreamInitialTimeoutClientInstruction;
use rpc::rpc::StreamInitialTimeoutClientTestResult;
use rpc::rpc::StreamInitialUndeclaredExceptionClientInstruction;
use rpc::rpc::StreamInitialUndeclaredExceptionClientTestResult;
use rpc::rpc::StreamUndeclaredExceptionClientInstruction;
use rpc::rpc::StreamUndeclaredExceptionClientTestResult;
use rpc_clients::rpc::errors::r_p_c_conformance_service::StreamDeclaredExceptionStreamError;
use rpc_clients::rpc::errors::r_p_c_conformance_service::StreamInitialDeclaredExceptionError;
use rpc_clients::rpc::make_RPCConformanceService;
use rpc_clients::rpc::RPCConformanceService;
use tracing_glog::Glog;
use tracing_glog::GlogFields;
use tracing_subscriber::filter::Directive;
use tracing_subscriber::layer::SubscriberExt;
use tracing_subscriber::EnvFilter;
use tracing_subscriber::Registry;

#[derive(Parser, Debug)]
struct Arguments {
    #[clap(short, long, default_value = "7777")]
    port: u16,
    #[clap(short, long, default_value = "info")]
    log: Vec<Directive>,
}

#[cli::main("rpc-client")]
async fn main(fb: fbinit::FacebookInit, args: Arguments) -> Result<()> {
    init_logging(args.log.clone());
    let client = get_client(fb, args.port).await? as Arc<_>;
    test(&*client).await?;

    Ok(())
}

async fn get_client(
    fb: fbinit::FacebookInit,
    port: u16,
) -> Result<Arc<dyn RPCConformanceService + Send + Sync + 'static>> {
    // TODO: Why aren't we using the SRclient builder here? It has more functionality it seems
    // over the bareclient (specifically the ability to configure the RPC options without specying
    // a serialization protocol)

    thriftclient::ThriftChannelBuilder::from_sock_addr(
        fb,
        SocketAddr::new(std::net::Ipv6Addr::LOCALHOST.into(), port),
    )?
    .with_secure(false)
    .build_client(make_RPCConformanceService) // patternlint-disable-line rust-sr-client-creation-method
}

fn init_logging(directives: Vec<Directive>) {
    let fmt = tracing_subscriber::fmt::Layer::default()
        .with_writer(std::io::stderr)
        .event_format(Glog::default().with_timer(tracing_glog::LocalTime::default()))
        .fmt_fields(GlogFields::default());

    let filter = directives
        .into_iter()
        .fold(EnvFilter::from_default_env(), |filter, directive| {
            filter.add_directive(directive)
        });

    let subscriber = Registry::default().with(filter).with(fmt);
    tracing::subscriber::set_global_default(subscriber).expect("to set global subscriber");
}

// --

use rpc::rpc::ClientInstruction;
use rpc::rpc::ClientTestResult;
use rpc::rpc::InteractionConstructorClientInstruction;
use rpc::rpc::InteractionConstructorClientTestResult;
use rpc::rpc::InteractionFactoryFunctionClientInstruction;
use rpc::rpc::InteractionFactoryFunctionClientTestResult;
use rpc::rpc::InteractionPersistsStateClientInstruction;
use rpc::rpc::InteractionPersistsStateClientTestResult;
use rpc::rpc::InteractionTerminationClientInstruction;
use rpc::rpc::InteractionTerminationClientTestResult;
use rpc::rpc::RequestResponseBasicClientInstruction;
use rpc::rpc::RequestResponseBasicClientTestResult;
use rpc::rpc::RequestResponseDeclaredExceptionClientInstruction;
use rpc::rpc::RequestResponseDeclaredExceptionClientTestResult;
use rpc::rpc::RequestResponseNoArgVoidResponseClientTestResult;
use rpc::rpc::RequestResponseTimeoutClientInstruction;
use rpc::rpc::RequestResponseTimeoutClientTestResult;
use rpc::rpc::RequestResponseUndeclaredExceptionClientInstruction;
use rpc::rpc::RequestResponseUndeclaredExceptionClientTestResult;
use rpc_clients::rpc::errors::r_p_c_conformance_service::RequestResponseDeclaredExceptionError;
use rpc_clients::rpc::errors::r_p_c_conformance_service::RequestResponseTimeoutError;
use rpc_clients::rpc::errors::r_p_c_conformance_service::RequestResponseUndeclaredExceptionError;
use rpc_clients::rpc::BasicInteraction;

async fn test(client: &dyn RPCConformanceService) -> Result<()> {
    use ClientInstruction::*;
    #[allow(unused)]
    match &client.getTestCase().await?.clientInstruction {
        requestResponseBasic(i) => request_response_basic(client, i).await,
        requestResponseDeclaredException(i) => request_response_declared_exn(client, i).await,
        requestResponseUndeclaredException(i) => request_response_undeclared_exn(client, i).await,
        requestResponseNoArgVoidResponse(_) => request_response_no_arg_void_response(client).await,
        requestResponseTimeout(i) => request_response_timeout(client, i).await,
        interactionConstructor(i) => interaction_constructor(client, i).await,
        interactionFactoryFunction(i) => interaction_factory_function(client, i).await,
        interactionPersistsState(i) => interaction_persists_state(client, i).await,
        interactionTermination(i) => interaction_termination(client, i).await,
        streamBasic(i) => stream_basic(client, i).await,
        streamChunkTimeout(i) => stream_chunk_timeout(client, i).await,
        streamInitialResponse(i) => stream_initial_response(client, i).await,
        streamCreditTimeout(i) => stream_credit_timeout(client, i).await,
        streamDeclaredException(i) => stream_declared_exception(client, i).await,
        streamUndeclaredException(i) => stream_undeclared_exception(client, i).await,
        streamInitialDeclaredException(i) => stream_initial_declared_exception(client, i).await,
        streamInitialUndeclaredException(i) => stream_initial_undeclared_exception(client, i).await,
        streamInitialTimeout(i) => stream_initial_timeout(client, i).await,
        sinkBasic(i) => not_implemented(),
        sinkChunkTimeout(i) => not_implemented(),
        sinkInitialResponse(i) => not_implemented(),
        sinkDeclaredException(i) => not_implemented(),
        sinkUndeclaredException(i) => not_implemented(),
        UnknownField(i) => Err(anyhow!(format!("not supported: {:?}", i))),
    }
}

// ---

fn not_implemented() -> Result<()> {
    Err(anyhow!("not implemented"))
}

async fn create_interaction(
    client: &dyn RPCConformanceService,
    initial_sum: &Option<i32>,
) -> Result<Arc<dyn BasicInteraction>> {
    Ok(match initial_sum {
        Some(value) => client.basicInteractionFactoryFunction(*value).await?,
        None => client.createBasicInteraction()? as Arc<_>,
    })
}

// ---

async fn request_response_basic(
    client: &dyn RPCConformanceService,
    instr: &RequestResponseBasicClientInstruction,
) -> Result<()> {
    let test_result =
        ClientTestResult::requestResponseBasic(RequestResponseBasicClientTestResult {
            response: client.requestResponseBasic(&instr.request).await?,
            ..Default::default()
        });
    client.sendTestResult(&test_result).await?;
    Ok(())
}

async fn request_response_declared_exn(
    client: &dyn RPCConformanceService,
    instr: &RequestResponseDeclaredExceptionClientInstruction,
) -> Result<()> {
    match &client
        .requestResponseDeclaredException(&instr.request)
        .await
    {
        Err(RequestResponseDeclaredExceptionError::e(exn)) => {
            let test_result = ClientTestResult::requestResponseDeclaredException(
                RequestResponseDeclaredExceptionClientTestResult {
                    userException: Some(Box::new(exn.clone())),
                    ..Default::default()
                },
            );
            client.sendTestResult(&test_result).await?;
            Ok(())
        }
        r => Err(anyhow!(
            "request_response_declared_exception: unexpected server response:  {:?}",
            r
        )),
    }
}

async fn request_response_undeclared_exn(
    client: &dyn RPCConformanceService,
    instr: &RequestResponseUndeclaredExceptionClientInstruction,
) -> Result<()> {
    match &client
        .requestResponseUndeclaredException(&instr.request)
        .await
    {
        Err(RequestResponseUndeclaredExceptionError::ApplicationException(exn)) => {
            let test_result = ClientTestResult::requestResponseUndeclaredException(
                RequestResponseUndeclaredExceptionClientTestResult {
                    exceptionMessage: exn.message.clone(),
                    ..Default::default()
                },
            );
            client.sendTestResult(&test_result).await?;
            Ok(())
        }
        r => Err(anyhow!(
            "request_response_undeclared_exception: unexpected server response: {:?}",
            r
        )),
    }
}

async fn request_response_no_arg_void_response(client: &dyn RPCConformanceService) -> Result<()> {
    let () = client.requestResponseNoArgVoidResponse().await?;
    let test_result = ClientTestResult::requestResponseNoArgVoidResponse(
        RequestResponseNoArgVoidResponseClientTestResult {
            ..Default::default()
        },
    );
    client.sendTestResult(&test_result).await?;
    Ok(())
}

async fn request_response_timeout(
    client: &dyn RPCConformanceService,
    instr: &RequestResponseTimeoutClientInstruction,
) -> Result<()> {
    match &client.requestResponseTimeout(&instr.request).await {
        // TODO: This is wrong! On timeout we are receiving a default
        // constructed response. The conformant behavior is as per the next
        // case, a `ThriftError` containing a `TTransportException`.
        // Ok(r) if r.data.as_str() == "" && r.num == None => {
        //     let test_result =
        //         ClientTestResult::requestResponseTimeout(RequestResponseTimeoutClientTestResult {
        //             timeoutException: true,
        //             ..Default::default()
        //         });
        //     client.sendTestResult(&test_result).await?;
        //     Ok(())
        // }
        Err(RequestResponseTimeoutError::ThriftError(exn)) => {
            tracing::info!("thrift error: {:?}", exn);
            let test_result =
                ClientTestResult::requestResponseTimeout(RequestResponseTimeoutClientTestResult {
                    timeoutException: exn.to_string().contains("TTransportException"),
                    ..Default::default()
                });
            client.sendTestResult(&test_result).await?;
            Ok(())
        }
        r => Err(anyhow!(
            "request_response_timeout: unexpected server response {:?}",
            r
        )),
    }
}

async fn interaction_constructor(
    client: &dyn RPCConformanceService,
    _instr: &InteractionConstructorClientInstruction,
) -> Result<()> {
    let i = client.createBasicInteraction()?;
    let () = i.init().await?;
    let test_result =
        ClientTestResult::interactionConstructor(InteractionConstructorClientTestResult {
            ..Default::default()
        });
    client.sendTestResult(&test_result).await?;
    Ok(())
}

async fn interaction_factory_function(
    client: &dyn RPCConformanceService,
    instr: &InteractionFactoryFunctionClientInstruction,
) -> Result<()> {
    let _i = client
        .basicInteractionFactoryFunction(instr.initialSum)
        .await?;
    let test_result =
        ClientTestResult::interactionFactoryFunction(InteractionFactoryFunctionClientTestResult {
            ..Default::default()
        });
    client.sendTestResult(&test_result).await?;
    Ok(())
}

async fn interaction_persists_state(
    client: &dyn RPCConformanceService,
    instr: &InteractionPersistsStateClientInstruction,
) -> Result<()> {
    let i = create_interaction(client, &instr.initialSum).await?;
    let mut test_result: InteractionPersistsStateClientTestResult = Default::default();
    for value in &instr.valuesToAdd {
        test_result.responses.push(i.add(*value).await?);
    }
    client
        .sendTestResult(&ClientTestResult::interactionPersistsState(test_result))
        .await?;
    Ok(())
}

async fn interaction_termination(
    client: &dyn RPCConformanceService,
    instr: &InteractionTerminationClientInstruction,
) -> Result<()> {
    let i = create_interaction(client, &instr.initialSum).await?;
    let () = i.init().await?;
    drop(i);
    let test_result =
        ClientTestResult::interactionTermination(InteractionTerminationClientTestResult {
            ..Default::default()
        });
    client.sendTestResult(&test_result).await?;
    Ok(())
}

async fn stream_basic(
    client: &dyn RPCConformanceService,
    instr: &StreamBasicClientInstruction,
) -> Result<()> {
    // TODO: configure rpc_options buffer?
    let mut stream = client.streamBasic(&instr.request).await?;
    let mut test_result = StreamBasicClientTestResult {
        streamPayloads: vec![],
        ..Default::default()
    };
    while let Some(response) = stream.next().await {
        test_result.streamPayloads.push(response?);
    }
    client
        .sendTestResult(&ClientTestResult::streamBasic(test_result))
        .await?;
    Ok(())
}

async fn stream_chunk_timeout(
    client: &dyn RPCConformanceService,
    instr: &StreamChunkTimeoutClientInstruction,
) -> Result<()> {
    let mut stream = client.streamChunkTimeout(&instr.request).await?;
    let mut test_result = StreamChunkTimeoutClientTestResult {
        chunkTimeoutException: false,
        streamPayloads: vec![],
        ..Default::default()
    };

    while let Some(response) = stream.next().await {
        match response {
            Ok(r) => {
                test_result.streamPayloads.push(r);
            }
            Err(exn) => {
                test_result.chunkTimeoutException |=
                    exn.to_string().contains("TTransportException");
            }
        }
    }

    client
        .sendTestResult(&ClientTestResult::streamChunkTimeout(test_result))
        .await?;
    Ok(())
}

async fn stream_initial_response(
    client: &dyn RPCConformanceService,
    instr: &StreamInitialResponseClientInstruction,
) -> Result<()> {
    let (initial_response, mut stream) = client.streamInitialResponse(&instr.request).await?;
    let mut test_result = StreamInitialResponseClientTestResult {
        initialResponse: initial_response,
        streamPayloads: vec![],
        ..Default::default()
    };

    while let Some(response) = stream.next().await {
        test_result.streamPayloads.push(response?);
    }

    client
        .sendTestResult(&ClientTestResult::streamInitialResponse(test_result))
        .await?;

    Ok(())
}

async fn stream_credit_timeout(
    client: &dyn RPCConformanceService,
    instr: &StreamCreditTimeoutClientInstruction,
) -> Result<()> {
    let mut stream = client.streamCreditTimeout(&instr.request).await?;
    let mut test_result = StreamCreditTimeoutClientTestResult {
        creditTimeoutException: false,
        ..Default::default()
    };

    while let Some(response) = stream.next().await {
        match response {
            Err(exn) if exn.to_string().contains("TTransportException") => {
                test_result.creditTimeoutException = true;
            }
            _ => {
                // Sleep longer than the stream expiration time so that the server
                // will run out of credit and throw a credit timeout exception
                tokio::time::sleep(Duration::from_millis(instr.creditTimeoutMs as u64)).await;
            }
        }
    }

    client
        .sendTestResult(&ClientTestResult::streamCreditTimeout(test_result))
        .await?;

    Ok(())
}

async fn stream_declared_exception(
    client: &dyn RPCConformanceService,
    instr: &StreamDeclaredExceptionClientInstruction,
) -> Result<()> {
    let mut stream = client.streamDeclaredException(&instr.request).await?;
    let mut test_result = StreamDeclaredExceptionClientTestResult {
        userException: None,
        ..Default::default()
    };
    while let Some(result) = stream.next().await {
        if let Err(StreamDeclaredExceptionStreamError::e(user_error)) = result {
            test_result.userException = Some(Box::new(user_error));
        };
    }
    client
        .sendTestResult(&ClientTestResult::streamDeclaredException(test_result))
        .await?;
    Ok(())
}

async fn stream_undeclared_exception(
    client: &dyn RPCConformanceService,
    instr: &StreamUndeclaredExceptionClientInstruction,
) -> Result<()> {
    let mut stream = client.streamUndeclaredException(&instr.request).await?;
    let mut test_result = StreamUndeclaredExceptionClientTestResult {
        exceptionMessage: "".to_string(),
        ..Default::default()
    };
    while let Some(result) = stream.next().await {
        if let Err(err) = result {
            test_result.exceptionMessage = err.to_string();
        };
    }
    client
        .sendTestResult(&ClientTestResult::streamUndeclaredException(test_result))
        .await?;
    Ok(())
}

async fn stream_initial_declared_exception(
    client: &dyn RPCConformanceService,
    instr: &StreamInitialDeclaredExceptionClientInstruction,
) -> Result<()> {
    let result = client.streamInitialDeclaredException(&instr.request).await;
    let mut test_result = StreamInitialDeclaredExceptionClientTestResult {
        userException: None,
        ..Default::default()
    };
    if let Err(StreamInitialDeclaredExceptionError::e(user_error)) = result {
        test_result.userException = Some(Box::new(user_error));
    };
    client
        .sendTestResult(&ClientTestResult::streamInitialDeclaredException(
            test_result,
        ))
        .await?;
    Ok(())
}

async fn stream_initial_undeclared_exception(
    client: &dyn RPCConformanceService,
    instr: &StreamInitialUndeclaredExceptionClientInstruction,
) -> Result<()> {
    let result = client
        .streamInitialUndeclaredException(&instr.request)
        .await;
    let mut test_result = StreamInitialUndeclaredExceptionClientTestResult {
        exceptionMessage: "".to_string(),
        ..Default::default()
    };
    if let Err(err) = result {
        test_result.exceptionMessage = err.to_string();
    };
    client
        .sendTestResult(&ClientTestResult::streamInitialUndeclaredException(
            test_result,
        ))
        .await?;
    Ok(())
}

async fn stream_initial_timeout(
    client: &dyn RPCConformanceService,
    instr: &StreamInitialTimeoutClientInstruction,
) -> Result<()> {
    let result = client.streamInitialTimeout(&instr.request).await;
    let mut test_result = StreamInitialTimeoutClientTestResult {
        timeoutException: false,
        ..Default::default()
    };
    if let Err(_err) = result {
        test_result.timeoutException = true;
    }
    client
        .sendTestResult(&ClientTestResult::streamInitialTimeout(test_result))
        .await?;
    Ok(())
}
