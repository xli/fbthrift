/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/doctext/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/service_h.h>

#include "thrift/compiler/test/fixtures/doctext/gen-cpp2/CAsyncClient.h"
#include "thrift/compiler/test/fixtures/doctext/gen-cpp2/module_types.h"
#include <thrift/lib/cpp2/async/ServerStream.h>

namespace folly {
  class IOBuf;
  class IOBufQueue;
}
namespace apache { namespace thrift {
  class Cpp2RequestContext;
  class BinaryProtocolReader;
  class CompactProtocolReader;
  namespace transport { class THeader; }
}}

namespace cpp2 {
class C;
class CAsyncProcessor;

class CServiceInfoHolder : public apache::thrift::ServiceInfoHolder {
  public:
   apache::thrift::ServiceRequestInfoMap const& requestInfoMap() const override;
   static apache::thrift::ServiceRequestInfoMap staticRequestInfoMap();
};
} // namespace cpp2

namespace apache::thrift {
template <>
class ServiceHandler<::cpp2::C> : public apache::thrift::ServerInterface {
 public:
  std::string_view getGeneratedName() const override { return "C"; }

  typedef ::cpp2::CAsyncProcessor ProcessorType;
  std::unique_ptr<apache::thrift::AsyncProcessor> getProcessor() override;
  CreateMethodMetadataResult createMethodMetadata() override;
  bool isThriftGenerated() const override final { return true; }
 private:
  std::optional<std::reference_wrapper<apache::thrift::ServiceRequestInfoMap const>> getServiceRequestInfoMap() const;
 public:

  virtual void sync_f();
  [[deprecated("Use sync_f instead")]] virtual void f();
  virtual folly::Future<folly::Unit> future_f();
  virtual folly::SemiFuture<folly::Unit> semifuture_f();
#if FOLLY_HAS_COROUTINES
  virtual folly::coro::Task<void> co_f();
  virtual folly::coro::Task<void> co_f(apache::thrift::RequestParams params);
#endif
  virtual void async_tm_f(apache::thrift::HandlerCallbackPtr<void> callback);
  virtual ::apache::thrift::ServerStream<::cpp2::number> sync_numbers();
  [[deprecated("Use sync_numbers instead")]] virtual ::apache::thrift::ServerStream<::cpp2::number> numbers();
  virtual folly::Future<::apache::thrift::ServerStream<::cpp2::number>> future_numbers();
  virtual folly::SemiFuture<::apache::thrift::ServerStream<::cpp2::number>> semifuture_numbers();
#if FOLLY_HAS_COROUTINES
  virtual folly::coro::Task<::apache::thrift::ServerStream<::cpp2::number>> co_numbers();
  virtual folly::coro::Task<::apache::thrift::ServerStream<::cpp2::number>> co_numbers(apache::thrift::RequestParams params);
#endif
  virtual void async_tm_numbers(apache::thrift::HandlerCallbackPtr<::apache::thrift::ServerStream<::cpp2::number>> callback);
  virtual void sync_thing(::std::string& /*_return*/, ::std::int32_t /*a*/, std::unique_ptr<::std::string> /*b*/, std::unique_ptr<::std::set<::std::int32_t>> /*c*/);
  [[deprecated("Use sync_thing instead")]] virtual void thing(::std::string& /*_return*/, ::std::int32_t /*a*/, std::unique_ptr<::std::string> /*b*/, std::unique_ptr<::std::set<::std::int32_t>> /*c*/);
  virtual folly::Future<std::unique_ptr<::std::string>> future_thing(::std::int32_t p_a, std::unique_ptr<::std::string> p_b, std::unique_ptr<::std::set<::std::int32_t>> p_c);
  virtual folly::SemiFuture<std::unique_ptr<::std::string>> semifuture_thing(::std::int32_t p_a, std::unique_ptr<::std::string> p_b, std::unique_ptr<::std::set<::std::int32_t>> p_c);
#if FOLLY_HAS_COROUTINES
  virtual folly::coro::Task<std::unique_ptr<::std::string>> co_thing(::std::int32_t p_a, std::unique_ptr<::std::string> p_b, std::unique_ptr<::std::set<::std::int32_t>> p_c);
  virtual folly::coro::Task<std::unique_ptr<::std::string>> co_thing(apache::thrift::RequestParams params, ::std::int32_t p_a, std::unique_ptr<::std::string> p_b, std::unique_ptr<::std::set<::std::int32_t>> p_c);
#endif
  virtual void async_tm_thing(apache::thrift::HandlerCallbackPtr<std::unique_ptr<::std::string>> callback, ::std::int32_t p_a, std::unique_ptr<::std::string> p_b, std::unique_ptr<::std::set<::std::int32_t>> p_c);
 private:
  static ::cpp2::CServiceInfoHolder __fbthrift_serviceInfoHolder;
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_f{apache::thrift::detail::si::InvocationType::AsyncTm};
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_numbers{apache::thrift::detail::si::InvocationType::AsyncTm};
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_thing{apache::thrift::detail::si::InvocationType::AsyncTm};
};

} // namespace apache::thrift

namespace cpp2 {
using CSvIf [[deprecated("Use apache::thrift::ServiceHandler<C> instead")]] = ::apache::thrift::ServiceHandler<C>;
} // namespace cpp2

namespace cpp2 {
class CSvNull : public ::apache::thrift::ServiceHandler<C> {
 public:
  void f() override;
  void thing(::std::string& /*_return*/, ::std::int32_t /*a*/, std::unique_ptr<::std::string> /*b*/, std::unique_ptr<::std::set<::std::int32_t>> /*c*/) override;
};

class CAsyncProcessor : public ::apache::thrift::GeneratedAsyncProcessorBase {
 public:
  const char* getServiceName() override;
  void getServiceMetadata(apache::thrift::metadata::ThriftServiceMetadataResponse& response) override;
  using BaseAsyncProcessor = void;
 protected:
  ::apache::thrift::ServiceHandler<::cpp2::C>* iface_;
 public:
  void processSerializedCompressedRequestWithMetadata(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) override;
  void executeRequest(apache::thrift::ServerRequest&& serverRequest, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata) override;
 public:
  using ProcessFuncs = GeneratedAsyncProcessorBase::ProcessFuncs<CAsyncProcessor>;
  using ProcessMap = GeneratedAsyncProcessorBase::ProcessMap<ProcessFuncs>;
  static const CAsyncProcessor::ProcessMap& getOwnProcessMap();
 private:
  static const CAsyncProcessor::ProcessMap kOwnProcessMap_;
 private:
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_f(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_f(apache::thrift::ServerRequest&& serverRequest);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::SerializedResponse return_f(apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_f(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_numbers(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_numbers(apache::thrift::ServerRequest&& serverRequest);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::ResponseAndServerStreamFactory return_numbers(apache::thrift::ContextStack* ctx, folly::Executor::KeepAlive<> executor, ::apache::thrift::ServerStream<::cpp2::number>&& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_numbers(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_thing(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_thing(apache::thrift::ServerRequest&& serverRequest);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::SerializedResponse return_thing(apache::thrift::ContextStack* ctx, ::std::string const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_thing(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
 public:
  CAsyncProcessor(::apache::thrift::ServiceHandler<::cpp2::C>* iface) :
      iface_(iface) {}
  ~CAsyncProcessor() override {}
};

} // namespace cpp2
