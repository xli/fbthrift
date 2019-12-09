/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/gen/client_h.h>

#include "thrift/compiler/test/fixtures/sink/gen-cpp2/module_types.h"
#include <thrift/lib/cpp2/async/ClientSinkBridge.h>
#include <thrift/lib/cpp2/async/Sink.h>

namespace apache { namespace thrift {
  class Cpp2RequestContext;
  namespace detail { namespace ac { struct ClientRequestContext; }}
  namespace transport { class THeader; }
}}

namespace cpp2 {

class SinkServiceAsyncClient : public apache::thrift::GeneratedAsyncClient {
 public:
  using apache::thrift::GeneratedAsyncClient::GeneratedAsyncClient;

  char const* getServiceName() const noexcept override {
    return "SinkService";
  }

 private:
  void methodImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::SinkClientCallback* callback);
 public:
#if FOLLY_HAS_COROUTINES
folly::coro::Task<apache::thrift::ClientSink< ::cpp2::SinkPayload,  ::cpp2::FinalResponse>> co_method();
#endif // FOLLY_HAS_COROUTINES
  static folly::exception_wrapper recv_wrapped_method(apache::thrift::ClientSink< ::cpp2::SinkPayload,  ::cpp2::FinalResponse>& _return, ::apache::thrift::ClientReceiveState& state);
  static apache::thrift::ClientSink< ::cpp2::SinkPayload,  ::cpp2::FinalResponse> recv_method(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual apache::thrift::ClientSink< ::cpp2::SinkPayload,  ::cpp2::FinalResponse> recv_instance_method(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_method(apache::thrift::ClientSink< ::cpp2::SinkPayload,  ::cpp2::FinalResponse>& _return, ::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  void methodT(Protocol_* prot, apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::SinkClientCallback* callback);
 public:
 private:
  void methodAndReponseImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::SinkClientCallback* callback);
 public:
#if FOLLY_HAS_COROUTINES
folly::coro::Task<apache::thrift::ResponseAndClientSink< ::cpp2::InitialResponse,  ::cpp2::SinkPayload,  ::cpp2::FinalResponse>> co_methodAndReponse();
#endif // FOLLY_HAS_COROUTINES
  static folly::exception_wrapper recv_wrapped_methodAndReponse(apache::thrift::ResponseAndClientSink< ::cpp2::InitialResponse,  ::cpp2::SinkPayload,  ::cpp2::FinalResponse>& _return, ::apache::thrift::ClientReceiveState& state);
  static apache::thrift::ResponseAndClientSink< ::cpp2::InitialResponse,  ::cpp2::SinkPayload,  ::cpp2::FinalResponse> recv_methodAndReponse(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual apache::thrift::ResponseAndClientSink< ::cpp2::InitialResponse,  ::cpp2::SinkPayload,  ::cpp2::FinalResponse> recv_instance_methodAndReponse(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_methodAndReponse(apache::thrift::ResponseAndClientSink< ::cpp2::InitialResponse,  ::cpp2::SinkPayload,  ::cpp2::FinalResponse>& _return, ::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  void methodAndReponseT(Protocol_* prot, apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::SinkClientCallback* callback);
 public:
 private:
  void methodThrowImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::SinkClientCallback* callback);
 public:
#if FOLLY_HAS_COROUTINES
folly::coro::Task<apache::thrift::ClientSink< ::cpp2::SinkPayload,  ::cpp2::FinalResponse>> co_methodThrow();
#endif // FOLLY_HAS_COROUTINES
  static folly::exception_wrapper recv_wrapped_methodThrow(apache::thrift::ClientSink< ::cpp2::SinkPayload,  ::cpp2::FinalResponse>& _return, ::apache::thrift::ClientReceiveState& state);
  static apache::thrift::ClientSink< ::cpp2::SinkPayload,  ::cpp2::FinalResponse> recv_methodThrow(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual apache::thrift::ClientSink< ::cpp2::SinkPayload,  ::cpp2::FinalResponse> recv_instance_methodThrow(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_methodThrow(apache::thrift::ClientSink< ::cpp2::SinkPayload,  ::cpp2::FinalResponse>& _return, ::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  void methodThrowT(Protocol_* prot, apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::SinkClientCallback* callback);
 public:
 private:
  void methodSinkThrowImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::SinkClientCallback* callback);
 public:
#if FOLLY_HAS_COROUTINES
folly::coro::Task<apache::thrift::ClientSink< ::cpp2::SinkPayload,  ::cpp2::FinalResponse>> co_methodSinkThrow();
#endif // FOLLY_HAS_COROUTINES
  static folly::exception_wrapper recv_wrapped_methodSinkThrow(apache::thrift::ClientSink< ::cpp2::SinkPayload,  ::cpp2::FinalResponse>& _return, ::apache::thrift::ClientReceiveState& state);
  static apache::thrift::ClientSink< ::cpp2::SinkPayload,  ::cpp2::FinalResponse> recv_methodSinkThrow(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual apache::thrift::ClientSink< ::cpp2::SinkPayload,  ::cpp2::FinalResponse> recv_instance_methodSinkThrow(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_methodSinkThrow(apache::thrift::ClientSink< ::cpp2::SinkPayload,  ::cpp2::FinalResponse>& _return, ::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  void methodSinkThrowT(Protocol_* prot, apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::SinkClientCallback* callback);
 public:
 private:
  void methodFinalThrowImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::SinkClientCallback* callback);
 public:
#if FOLLY_HAS_COROUTINES
folly::coro::Task<apache::thrift::ClientSink< ::cpp2::SinkPayload,  ::cpp2::FinalResponse>> co_methodFinalThrow();
#endif // FOLLY_HAS_COROUTINES
  static folly::exception_wrapper recv_wrapped_methodFinalThrow(apache::thrift::ClientSink< ::cpp2::SinkPayload,  ::cpp2::FinalResponse>& _return, ::apache::thrift::ClientReceiveState& state);
  static apache::thrift::ClientSink< ::cpp2::SinkPayload,  ::cpp2::FinalResponse> recv_methodFinalThrow(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual apache::thrift::ClientSink< ::cpp2::SinkPayload,  ::cpp2::FinalResponse> recv_instance_methodFinalThrow(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_methodFinalThrow(apache::thrift::ClientSink< ::cpp2::SinkPayload,  ::cpp2::FinalResponse>& _return, ::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  void methodFinalThrowT(Protocol_* prot, apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::SinkClientCallback* callback);
 public:
 private:
  void methodBothThrowImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::SinkClientCallback* callback);
 public:
#if FOLLY_HAS_COROUTINES
folly::coro::Task<apache::thrift::ClientSink< ::cpp2::SinkPayload,  ::cpp2::FinalResponse>> co_methodBothThrow();
#endif // FOLLY_HAS_COROUTINES
  static folly::exception_wrapper recv_wrapped_methodBothThrow(apache::thrift::ClientSink< ::cpp2::SinkPayload,  ::cpp2::FinalResponse>& _return, ::apache::thrift::ClientReceiveState& state);
  static apache::thrift::ClientSink< ::cpp2::SinkPayload,  ::cpp2::FinalResponse> recv_methodBothThrow(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual apache::thrift::ClientSink< ::cpp2::SinkPayload,  ::cpp2::FinalResponse> recv_instance_methodBothThrow(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_methodBothThrow(apache::thrift::ClientSink< ::cpp2::SinkPayload,  ::cpp2::FinalResponse>& _return, ::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  void methodBothThrowT(Protocol_* prot, apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::SinkClientCallback* callback);
 public:
};

} // cpp2
