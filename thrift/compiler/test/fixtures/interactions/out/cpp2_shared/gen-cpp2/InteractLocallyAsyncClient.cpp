/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/interactions/src/shared.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/interactions/gen-cpp2/InteractLocallyAsyncClient.h"

#include <thrift/lib/cpp2/gen/client_cpp.h>

namespace thrift::shared_interactions {
} // namespace thrift::shared_interactions


apache::thrift::Client<::thrift::shared_interactions::InteractLocally>::SharedInteraction apache::thrift::Client<::thrift::shared_interactions::InteractLocally>::createSharedInteraction() {
  return SharedInteraction(channel_, "SharedInteraction");
}


namespace thrift::shared_interactions {
typedef apache::thrift::ThriftPresult<false> InteractLocally_SharedInteraction_init_pargs;
typedef apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, ::apache::thrift::type_class::integral, ::std::int32_t*>> InteractLocally_SharedInteraction_init_presult;
typedef apache::thrift::ThriftPresult<false> InteractLocally_SharedInteraction_do_something_pargs;
typedef apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, ::apache::thrift::type_class::structure, ::thrift::shared_interactions::DoSomethingResult*>> InteractLocally_SharedInteraction_do_something_presult;
typedef apache::thrift::ThriftPresult<false> InteractLocally_SharedInteraction_tear_down_pargs;
typedef apache::thrift::ThriftPresult<true> InteractLocally_SharedInteraction_tear_down_presult;
} // namespace thrift::shared_interactions
template <typename Protocol_>
apache::thrift::SerializedRequest apache::thrift::Client<::thrift::shared_interactions::InteractLocally>::SharedInteraction::fbthrift_serialize_init(Protocol_* prot, const RpcOptions& rpcOptions, apache::thrift::transport::THeader& header, apache::thrift::ContextStack* contextStack) {
  ::thrift::shared_interactions::InteractLocally_SharedInteraction_init_pargs args;
  const auto sizer = [&](Protocol_* p) { return args.serializedSizeZC(p); };
  const auto writer = [&](Protocol_* p) { args.write(p); };
  return apache::thrift::preprocessSendT<Protocol_>(
      prot,
      rpcOptions,
      contextStack,
      header,
      "SharedInteraction.init",
      writer,
      sizer,
      channel_->getChecksumSamplingRate());
}

template <typename RpcOptions>
void apache::thrift::Client<::thrift::shared_interactions::InteractLocally>::SharedInteraction::fbthrift_send_init(apache::thrift::SerializedRequest&& request, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::RequestClientCallback::Ptr callback) {
  apache::thrift::RpcOptions rpcOpts(std::forward<RpcOptions>(rpcOptions));
  setInteraction(rpcOpts);

  static ::apache::thrift::MethodMetadata::Data* methodMetadata =
        new ::apache::thrift::MethodMetadata::Data(
                "SharedInteraction.init",
                ::apache::thrift::FunctionQualifier::Unspecified,
                "InteractLocally",
                ::apache::thrift::InteractionMethodPosition::Member,
                "SharedInteraction");
  apache::thrift::clientSendT<apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE>(std::move(request), std::move(rpcOpts), std::move(callback), std::move(header), channel_.get(), ::apache::thrift::MethodMetadata::from_static(methodMetadata));
}

template <typename Protocol_>
apache::thrift::SerializedRequest apache::thrift::Client<::thrift::shared_interactions::InteractLocally>::SharedInteraction::fbthrift_serialize_do_something(Protocol_* prot, const RpcOptions& rpcOptions, apache::thrift::transport::THeader& header, apache::thrift::ContextStack* contextStack) {
  ::thrift::shared_interactions::InteractLocally_SharedInteraction_do_something_pargs args;
  const auto sizer = [&](Protocol_* p) { return args.serializedSizeZC(p); };
  const auto writer = [&](Protocol_* p) { args.write(p); };
  return apache::thrift::preprocessSendT<Protocol_>(
      prot,
      rpcOptions,
      contextStack,
      header,
      "SharedInteraction.do_something",
      writer,
      sizer,
      channel_->getChecksumSamplingRate());
}

template <typename RpcOptions>
void apache::thrift::Client<::thrift::shared_interactions::InteractLocally>::SharedInteraction::fbthrift_send_do_something(apache::thrift::SerializedRequest&& request, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::RequestClientCallback::Ptr callback) {
  apache::thrift::RpcOptions rpcOpts(std::forward<RpcOptions>(rpcOptions));
  setInteraction(rpcOpts);

  static ::apache::thrift::MethodMetadata::Data* methodMetadata =
        new ::apache::thrift::MethodMetadata::Data(
                "SharedInteraction.do_something",
                ::apache::thrift::FunctionQualifier::Unspecified,
                "InteractLocally",
                ::apache::thrift::InteractionMethodPosition::Member,
                "SharedInteraction");
  apache::thrift::clientSendT<apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE>(std::move(request), std::move(rpcOpts), std::move(callback), std::move(header), channel_.get(), ::apache::thrift::MethodMetadata::from_static(methodMetadata));
}

template <typename Protocol_>
apache::thrift::SerializedRequest apache::thrift::Client<::thrift::shared_interactions::InteractLocally>::SharedInteraction::fbthrift_serialize_tear_down(Protocol_* prot, const RpcOptions& rpcOptions, apache::thrift::transport::THeader& header, apache::thrift::ContextStack* contextStack) {
  ::thrift::shared_interactions::InteractLocally_SharedInteraction_tear_down_pargs args;
  const auto sizer = [&](Protocol_* p) { return args.serializedSizeZC(p); };
  const auto writer = [&](Protocol_* p) { args.write(p); };
  return apache::thrift::preprocessSendT<Protocol_>(
      prot,
      rpcOptions,
      contextStack,
      header,
      "SharedInteraction.tear_down",
      writer,
      sizer,
      channel_->getChecksumSamplingRate());
}

template <typename RpcOptions>
void apache::thrift::Client<::thrift::shared_interactions::InteractLocally>::SharedInteraction::fbthrift_send_tear_down(apache::thrift::SerializedRequest&& request, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::RequestClientCallback::Ptr callback) {
  apache::thrift::RpcOptions rpcOpts(std::forward<RpcOptions>(rpcOptions));
  setInteraction(rpcOpts);

  static ::apache::thrift::MethodMetadata::Data* methodMetadata =
        new ::apache::thrift::MethodMetadata::Data(
                "SharedInteraction.tear_down",
                ::apache::thrift::FunctionQualifier::Unspecified,
                "InteractLocally",
                ::apache::thrift::InteractionMethodPosition::Member,
                "SharedInteraction");
  apache::thrift::clientSendT<apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE>(std::move(request), std::move(rpcOpts), std::move(callback), std::move(header), channel_.get(), ::apache::thrift::MethodMetadata::from_static(methodMetadata));
}



void apache::thrift::Client<::thrift::shared_interactions::InteractLocally>::SharedInteraction::init(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback) {
  auto [ctx, header] = initCtx(&rpcOptions);
  auto [wrappedCallback, contextStack] = apache::thrift::GeneratedAsyncClient::template prepareRequestClientCallback<false /* kIsOneWay */>(std::move(callback), std::move(ctx));
  fbthrift_serialize_and_send_init(rpcOptions, std::move(header), contextStack, std::move(wrappedCallback));
}

void apache::thrift::Client<::thrift::shared_interactions::InteractLocally>::SharedInteraction::fbthrift_serialize_and_send_init(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, bool stealRpcOptions) {
  apache::thrift::detail::ac::withProtocolWriter(apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId(), [&](auto&& writer) {
    apache::thrift::SerializedRequest request = fbthrift_serialize_init(&writer, rpcOptions, *header, contextStack);
    if (stealRpcOptions) {
      fbthrift_send_init(std::move(request), std::move(rpcOptions), std::move(header), std::move(callback));
    } else {
      fbthrift_send_init(std::move(request), rpcOptions, std::move(header), std::move(callback));
    }
  });
}

std::pair<::apache::thrift::ContextStack::UniquePtr, std::shared_ptr<::apache::thrift::transport::THeader>> apache::thrift::Client<::thrift::shared_interactions::InteractLocally>::SharedInteraction::initCtx(apache::thrift::RpcOptions* rpcOptions) {
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
      "InteractLocally.SharedInteraction.init",
      *header);

  return {std::move(ctx), std::move(header)};
}
::std::int32_t apache::thrift::Client<::thrift::shared_interactions::InteractLocally>::SharedInteraction::sync_init() {
  ::apache::thrift::RpcOptions rpcOptions;
  return sync_init(rpcOptions);
}

::std::int32_t apache::thrift::Client<::thrift::shared_interactions::InteractLocally>::SharedInteraction::sync_init(apache::thrift::RpcOptions& rpcOptions) {
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
      fbthrift_serialize_and_send_init(rpcOptions, std::move(ctxAndHeader.second), ctxAndHeader.first.get(), std::move(wrappedCallback));
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


folly::SemiFuture<::std::int32_t> apache::thrift::Client<::thrift::shared_interactions::InteractLocally>::SharedInteraction::semifuture_init() {
  ::apache::thrift::RpcOptions rpcOptions;
  return semifuture_init(rpcOptions);
}

folly::SemiFuture<::std::int32_t> apache::thrift::Client<::thrift::shared_interactions::InteractLocally>::SharedInteraction::semifuture_init(apache::thrift::RpcOptions& rpcOptions) {
  auto callbackAndFuture = makeSemiFutureCallback(recv_wrapped_init, channel_);
  auto callback = std::move(callbackAndFuture.first);
  init(rpcOptions, std::move(callback));
  return std::move(callbackAndFuture.second);
}


#if FOLLY_HAS_COROUTINES
#endif // FOLLY_HAS_COROUTINES
folly::exception_wrapper apache::thrift::Client<::thrift::shared_interactions::InteractLocally>::SharedInteraction::recv_wrapped_init(::std::int32_t& _return, ::apache::thrift::ClientReceiveState& state) {
  if (state.isException()) {
    return std::move(state.exception());
  }
  if (!state.hasResponseBuffer()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }

  using result = ::thrift::shared_interactions::InteractLocally_SharedInteraction_init_presult;
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
::std::int32_t apache::thrift::Client<::thrift::shared_interactions::InteractLocally>::SharedInteraction::recv_init(::apache::thrift::ClientReceiveState& state) {
  ::std::int32_t _return;
  auto ew = recv_wrapped_init(_return, state);
  if (ew) {
    ew.throw_exception();
  }
  return _return;
}

void apache::thrift::Client<::thrift::shared_interactions::InteractLocally>::SharedInteraction::do_something(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback) {
  auto [ctx, header] = do_somethingCtx(&rpcOptions);
  auto [wrappedCallback, contextStack] = apache::thrift::GeneratedAsyncClient::template prepareRequestClientCallback<false /* kIsOneWay */>(std::move(callback), std::move(ctx));
  fbthrift_serialize_and_send_do_something(rpcOptions, std::move(header), contextStack, std::move(wrappedCallback));
}

void apache::thrift::Client<::thrift::shared_interactions::InteractLocally>::SharedInteraction::fbthrift_serialize_and_send_do_something(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, bool stealRpcOptions) {
  apache::thrift::detail::ac::withProtocolWriter(apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId(), [&](auto&& writer) {
    apache::thrift::SerializedRequest request = fbthrift_serialize_do_something(&writer, rpcOptions, *header, contextStack);
    if (stealRpcOptions) {
      fbthrift_send_do_something(std::move(request), std::move(rpcOptions), std::move(header), std::move(callback));
    } else {
      fbthrift_send_do_something(std::move(request), rpcOptions, std::move(header), std::move(callback));
    }
  });
}

std::pair<::apache::thrift::ContextStack::UniquePtr, std::shared_ptr<::apache::thrift::transport::THeader>> apache::thrift::Client<::thrift::shared_interactions::InteractLocally>::SharedInteraction::do_somethingCtx(apache::thrift::RpcOptions* rpcOptions) {
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
      "InteractLocally.SharedInteraction.do_something",
      *header);

  return {std::move(ctx), std::move(header)};
}
void apache::thrift::Client<::thrift::shared_interactions::InteractLocally>::SharedInteraction::sync_do_something(::thrift::shared_interactions::DoSomethingResult& _return) {
  ::apache::thrift::RpcOptions rpcOptions;
  sync_do_something(rpcOptions, _return);
}

void apache::thrift::Client<::thrift::shared_interactions::InteractLocally>::SharedInteraction::sync_do_something(apache::thrift::RpcOptions& rpcOptions, ::thrift::shared_interactions::DoSomethingResult& _return) {
  apache::thrift::ClientReceiveState returnState;
  apache::thrift::ClientSyncCallback<false> callback(&returnState);
  auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  auto evb = apache::thrift::GeneratedAsyncClient::getChannel()->getEventBase();
  auto ctxAndHeader = do_somethingCtx(&rpcOptions);
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
      fbthrift_serialize_and_send_do_something(rpcOptions, std::move(ctxAndHeader.second), ctxAndHeader.first.get(), std::move(wrappedCallback));
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
      recv_do_something(_return, returnState);
  });
}


folly::SemiFuture<::thrift::shared_interactions::DoSomethingResult> apache::thrift::Client<::thrift::shared_interactions::InteractLocally>::SharedInteraction::semifuture_do_something() {
  ::apache::thrift::RpcOptions rpcOptions;
  return semifuture_do_something(rpcOptions);
}

folly::SemiFuture<::thrift::shared_interactions::DoSomethingResult> apache::thrift::Client<::thrift::shared_interactions::InteractLocally>::SharedInteraction::semifuture_do_something(apache::thrift::RpcOptions& rpcOptions) {
  auto callbackAndFuture = makeSemiFutureCallback(recv_wrapped_do_something, channel_);
  auto callback = std::move(callbackAndFuture.first);
  do_something(rpcOptions, std::move(callback));
  return std::move(callbackAndFuture.second);
}


#if FOLLY_HAS_COROUTINES
#endif // FOLLY_HAS_COROUTINES
folly::exception_wrapper apache::thrift::Client<::thrift::shared_interactions::InteractLocally>::SharedInteraction::recv_wrapped_do_something(::thrift::shared_interactions::DoSomethingResult& _return, ::apache::thrift::ClientReceiveState& state) {
  if (state.isException()) {
    return std::move(state.exception());
  }
  if (!state.hasResponseBuffer()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }

  using result = ::thrift::shared_interactions::InteractLocally_SharedInteraction_do_something_presult;
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
void apache::thrift::Client<::thrift::shared_interactions::InteractLocally>::SharedInteraction::recv_do_something(::thrift::shared_interactions::DoSomethingResult& _return, ::apache::thrift::ClientReceiveState& state) {
  auto ew = recv_wrapped_do_something(_return, state);
  if (ew) {
    ew.throw_exception();
  }
}

void apache::thrift::Client<::thrift::shared_interactions::InteractLocally>::SharedInteraction::tear_down(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback) {
  auto [ctx, header] = tear_downCtx(&rpcOptions);
  auto [wrappedCallback, contextStack] = apache::thrift::GeneratedAsyncClient::template prepareRequestClientCallback<false /* kIsOneWay */>(std::move(callback), std::move(ctx));
  fbthrift_serialize_and_send_tear_down(rpcOptions, std::move(header), contextStack, std::move(wrappedCallback));
}

void apache::thrift::Client<::thrift::shared_interactions::InteractLocally>::SharedInteraction::fbthrift_serialize_and_send_tear_down(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, bool stealRpcOptions) {
  apache::thrift::detail::ac::withProtocolWriter(apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId(), [&](auto&& writer) {
    apache::thrift::SerializedRequest request = fbthrift_serialize_tear_down(&writer, rpcOptions, *header, contextStack);
    if (stealRpcOptions) {
      fbthrift_send_tear_down(std::move(request), std::move(rpcOptions), std::move(header), std::move(callback));
    } else {
      fbthrift_send_tear_down(std::move(request), rpcOptions, std::move(header), std::move(callback));
    }
  });
}

std::pair<::apache::thrift::ContextStack::UniquePtr, std::shared_ptr<::apache::thrift::transport::THeader>> apache::thrift::Client<::thrift::shared_interactions::InteractLocally>::SharedInteraction::tear_downCtx(apache::thrift::RpcOptions* rpcOptions) {
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
      "InteractLocally.SharedInteraction.tear_down",
      *header);

  return {std::move(ctx), std::move(header)};
}
void apache::thrift::Client<::thrift::shared_interactions::InteractLocally>::SharedInteraction::sync_tear_down() {
  ::apache::thrift::RpcOptions rpcOptions;
  sync_tear_down(rpcOptions);
}

void apache::thrift::Client<::thrift::shared_interactions::InteractLocally>::SharedInteraction::sync_tear_down(apache::thrift::RpcOptions& rpcOptions) {
  apache::thrift::ClientReceiveState returnState;
  apache::thrift::ClientSyncCallback<false> callback(&returnState);
  auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  auto evb = apache::thrift::GeneratedAsyncClient::getChannel()->getEventBase();
  auto ctxAndHeader = tear_downCtx(&rpcOptions);
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
      fbthrift_serialize_and_send_tear_down(rpcOptions, std::move(ctxAndHeader.second), ctxAndHeader.first.get(), std::move(wrappedCallback));
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
      recv_tear_down(returnState);
  });
}


folly::SemiFuture<folly::Unit> apache::thrift::Client<::thrift::shared_interactions::InteractLocally>::SharedInteraction::semifuture_tear_down() {
  ::apache::thrift::RpcOptions rpcOptions;
  return semifuture_tear_down(rpcOptions);
}

folly::SemiFuture<folly::Unit> apache::thrift::Client<::thrift::shared_interactions::InteractLocally>::SharedInteraction::semifuture_tear_down(apache::thrift::RpcOptions& rpcOptions) {
  auto callbackAndFuture = makeSemiFutureCallback(recv_wrapped_tear_down, channel_);
  auto callback = std::move(callbackAndFuture.first);
  tear_down(rpcOptions, std::move(callback));
  return std::move(callbackAndFuture.second);
}


#if FOLLY_HAS_COROUTINES
#endif // FOLLY_HAS_COROUTINES
folly::exception_wrapper apache::thrift::Client<::thrift::shared_interactions::InteractLocally>::SharedInteraction::recv_wrapped_tear_down(::apache::thrift::ClientReceiveState& state) {
  if (state.isException()) {
    return std::move(state.exception());
  }
  if (!state.hasResponseBuffer()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }

  using result = ::thrift::shared_interactions::InteractLocally_SharedInteraction_tear_down_presult;
  switch (state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          &reader, state);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          &reader, state);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}
void apache::thrift::Client<::thrift::shared_interactions::InteractLocally>::SharedInteraction::recv_tear_down(::apache::thrift::ClientReceiveState& state) {
  auto ew = recv_wrapped_tear_down(state);
  if (ew) {
    ew.throw_exception();
  }
}
