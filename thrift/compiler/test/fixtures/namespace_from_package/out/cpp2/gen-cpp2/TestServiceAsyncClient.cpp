/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/namespace_from_package/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/namespace_from_package/gen-cpp2/TestServiceAsyncClient.h"

#include <thrift/lib/cpp2/gen/client_cpp.h>

namespace test::namespace_from_package::module {
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, ::apache::thrift::type_class::integral, ::std::int64_t*>> TestService_init_pargs;
typedef apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, ::apache::thrift::type_class::integral, ::std::int64_t*>> TestService_init_presult;
} // namespace test::namespace_from_package::module
template <typename Protocol_>
apache::thrift::SerializedRequest apache::thrift::Client<::test::namespace_from_package::module::TestService>::fbthrift_serialize_init(Protocol_* prot, const RpcOptions& rpcOptions, apache::thrift::transport::THeader& header, apache::thrift::ContextStack* contextStack, ::std::int64_t p_int1) {
  ::test::namespace_from_package::module::TestService_init_pargs args;
  args.get<0>().value = &p_int1;
  const auto sizer = [&](Protocol_* p) { return args.serializedSizeZC(p); };
  const auto writer = [&](Protocol_* p) { args.write(p); };
  return apache::thrift::preprocessSendT<Protocol_>(
      prot,
      rpcOptions,
      contextStack,
      header,
      "init",
      writer,
      sizer,
      channel_->getChecksumSamplingRate());
}

template <typename RpcOptions>
void apache::thrift::Client<::test::namespace_from_package::module::TestService>::fbthrift_send_init(apache::thrift::SerializedRequest&& request, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::RequestClientCallback::Ptr callback) {

  static ::apache::thrift::MethodMetadata::Data* methodMetadata =
        new ::apache::thrift::MethodMetadata::Data(
                "init",
                ::apache::thrift::FunctionQualifier::Unspecified,
                "test.dev/namespace_from_package/module/TestService");
  apache::thrift::clientSendT<apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE>(std::move(request), std::forward<RpcOptions>(rpcOptions), std::move(callback), std::move(header), channel_.get(), ::apache::thrift::MethodMetadata::from_static(methodMetadata));
}



void apache::thrift::Client<::test::namespace_from_package::module::TestService>::init(std::unique_ptr<apache::thrift::RequestCallback> callback, ::std::int64_t p_int1) {
  ::apache::thrift::RpcOptions rpcOptions;
  init(rpcOptions, std::move(callback), p_int1);
}

void apache::thrift::Client<::test::namespace_from_package::module::TestService>::init(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, ::std::int64_t p_int1) {
  auto [ctx, header] = initCtx(&rpcOptions);
  auto [wrappedCallback, contextStack] = apache::thrift::GeneratedAsyncClient::template prepareRequestClientCallback<false /* kIsOneWay */>(std::move(callback), std::move(ctx));
  fbthrift_serialize_and_send_init(rpcOptions, std::move(header), contextStack, std::move(wrappedCallback), p_int1);
}

void apache::thrift::Client<::test::namespace_from_package::module::TestService>::fbthrift_serialize_and_send_init(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, ::std::int64_t p_int1, bool stealRpcOptions) {
  apache::thrift::detail::ac::withProtocolWriter(apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId(), [&](auto&& writer) {
    apache::thrift::SerializedRequest request = fbthrift_serialize_init(&writer, rpcOptions, *header, contextStack, p_int1);
    if (stealRpcOptions) {
      fbthrift_send_init(std::move(request), std::move(rpcOptions), std::move(header), std::move(callback));
    } else {
      fbthrift_send_init(std::move(request), rpcOptions, std::move(header), std::move(callback));
    }
  });
}

std::pair<::apache::thrift::ContextStack::UniquePtr, std::shared_ptr<::apache::thrift::transport::THeader>> apache::thrift::Client<::test::namespace_from_package::module::TestService>::initCtx(apache::thrift::RpcOptions* rpcOptions) {
  auto header = std::make_shared<apache::thrift::transport::THeader>(
      apache::thrift::transport::THeader::ALLOW_BIG_FRAMES);
  header->setProtocolId(channel_->getProtocolId());
  if (rpcOptions) {
    header->setHeaders(rpcOptions->releaseWriteHeaders());
  }

  auto ctx = apache::thrift::ContextStack::createWithClientContext(
      handlers_,
      interceptors_,
      getServiceName(),
      "TestService.init",
      *header);

  return {std::move(ctx), std::move(header)};
}

::std::int64_t apache::thrift::Client<::test::namespace_from_package::module::TestService>::sync_init(::std::int64_t p_int1) {
  ::apache::thrift::RpcOptions rpcOptions;
  return sync_init(rpcOptions, p_int1);
}

::std::int64_t apache::thrift::Client<::test::namespace_from_package::module::TestService>::sync_init(apache::thrift::RpcOptions& rpcOptions, ::std::int64_t p_int1) {
  apache::thrift::ClientReceiveState returnState;
  apache::thrift::ClientSyncCallback<false> callback(&returnState);
  auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  auto evb = apache::thrift::GeneratedAsyncClient::getChannel()->getEventBase();
  auto ctxAndHeader = initCtx(&rpcOptions);
  auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(&callback);
#if FOLLY_HAS_COROUTINES
  const bool shouldProcessClientInterceptors = ctxAndHeader.first && ctxAndHeader.first->shouldProcessClientInterceptors();
  if (shouldProcessClientInterceptors) {
    folly::coro::blockingWait(ctxAndHeader.first->processClientInterceptorsOnRequest());
  }
#endif
  callback.waitUntilDone(
    evb,
    [&] {
      fbthrift_serialize_and_send_init(rpcOptions, std::move(ctxAndHeader.second), ctxAndHeader.first.get(), std::move(wrappedCallback), p_int1);
    });
#if FOLLY_HAS_COROUTINES
  if (shouldProcessClientInterceptors) {
    folly::coro::blockingWait(ctxAndHeader.first->processClientInterceptorsOnResponse());
  }
#endif
  if (returnState.isException()) {
    returnState.exception().throw_exception();
  }
  returnState.resetProtocolId(protocolId);
  returnState.resetCtx(std::move(ctxAndHeader.first));
  SCOPE_EXIT {
    if (returnState.header() && !returnState.header()->getHeaders().empty()) {
      rpcOptions.setReadHeaders(returnState.header()->releaseHeaders());
    }
  };
  return folly::fibers::runInMainContext([&] {
      return recv_init(returnState);
  });
}


folly::Future<::std::int64_t> apache::thrift::Client<::test::namespace_from_package::module::TestService>::future_init(::std::int64_t p_int1) {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_init(rpcOptions, p_int1);
}

folly::SemiFuture<::std::int64_t> apache::thrift::Client<::test::namespace_from_package::module::TestService>::semifuture_init(::std::int64_t p_int1) {
  ::apache::thrift::RpcOptions rpcOptions;
  return semifuture_init(rpcOptions, p_int1);
}

folly::Future<::std::int64_t> apache::thrift::Client<::test::namespace_from_package::module::TestService>::future_init(apache::thrift::RpcOptions& rpcOptions, ::std::int64_t p_int1) {
  using CallbackHelper = apache::thrift::detail::FutureCallbackHelper<::std::int64_t>;
  folly::Promise<CallbackHelper::PromiseResult> promise;
  auto future = promise.getFuture();
  auto callback = std::make_unique<apache::thrift::FutureCallback<::std::int64_t>>(std::move(promise), recv_wrapped_init, channel_);
  init(rpcOptions, std::move(callback), p_int1);
  return std::move(future).thenValue(CallbackHelper::extractResult);
}

folly::SemiFuture<::std::int64_t> apache::thrift::Client<::test::namespace_from_package::module::TestService>::semifuture_init(apache::thrift::RpcOptions& rpcOptions, ::std::int64_t p_int1) {
  auto callbackAndFuture = makeSemiFutureCallback(recv_wrapped_init, channel_);
  auto callback = std::move(callbackAndFuture.first);
  init(rpcOptions, std::move(callback), p_int1);
  return std::move(callbackAndFuture.second);
}


void apache::thrift::Client<::test::namespace_from_package::module::TestService>::init(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, ::std::int64_t p_int1) {
  init(std::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)), p_int1);
}

#if FOLLY_HAS_COROUTINES
#endif // FOLLY_HAS_COROUTINES
folly::exception_wrapper apache::thrift::Client<::test::namespace_from_package::module::TestService>::recv_wrapped_init(::std::int64_t& _return, ::apache::thrift::ClientReceiveState& state) {
  if (state.isException()) {
    return std::move(state.exception());
  }
  if (!state.hasResponseBuffer()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }

  using result = ::test::namespace_from_package::module::TestService_init_presult;
  switch (state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          &reader, state, _return);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          &reader, state, _return);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

::std::int64_t apache::thrift::Client<::test::namespace_from_package::module::TestService>::recv_init(::apache::thrift::ClientReceiveState& state) {
  ::std::int64_t _return;
  auto ew = recv_wrapped_init(_return, state);
  if (ew) {
    ew.throw_exception();
  }
  return _return;
}

::std::int64_t apache::thrift::Client<::test::namespace_from_package::module::TestService>::recv_instance_init(::apache::thrift::ClientReceiveState& state) {
  return recv_init(state);
}

folly::exception_wrapper apache::thrift::Client<::test::namespace_from_package::module::TestService>::recv_instance_wrapped_init(::std::int64_t& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_init(_return, state);
}


