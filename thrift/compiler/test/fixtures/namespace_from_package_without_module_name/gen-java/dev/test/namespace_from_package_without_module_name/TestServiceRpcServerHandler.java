/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package dev.test.namespace_from_package_without_module_name;

import java.util.*;
import org.apache.thrift.protocol.*;
import com.facebook.thrift.util.Readers;

public class TestServiceRpcServerHandler 
  implements com.facebook.thrift.server.RpcServerHandler {

  private final java.util.Map<String, com.facebook.thrift.server.RpcServerHandler> _methodMap;

  private final TestService.Reactive _delegate;

  private final java.util.List<com.facebook.thrift.payload.Reader> _initReaders;

  private final java.util.List<com.facebook.swift.service.ThriftEventHandler> _eventHandlers;

  public TestServiceRpcServerHandler(TestService _delegate,
                                    java.util.List<com.facebook.swift.service.ThriftEventHandler> _eventHandlers) {
    this(new TestServiceBlockingReactiveWrapper(_delegate), _eventHandlers);
  }

  public TestServiceRpcServerHandler(TestService.Async _delegate,
                                    java.util.List<com.facebook.swift.service.ThriftEventHandler> _eventHandlers) {
    this(new TestServiceAsyncReactiveWrapper(_delegate), _eventHandlers);
  }

  public TestServiceRpcServerHandler(TestService.Reactive _delegate,
                                    java.util.List<com.facebook.swift.service.ThriftEventHandler> _eventHandlers) {
    
    this._methodMap = new java.util.HashMap<>();
    this._delegate = _delegate;
    this._eventHandlers = _eventHandlers;

    _methodMap.put("init", this);
    _initReaders = _create_init_request_readers();


  }


  private static java.util.List<com.facebook.thrift.payload.Reader> _create_init_request_readers() {
    java.util.List<com.facebook.thrift.payload.Reader> _readerList = new java.util.ArrayList<>();

    
    _readerList.add(Readers.i64Reader());

    return _readerList;
  }

  private static com.facebook.thrift.payload.Writer _create_init_response_writer(
      final java.lang.Object _r,
      final com.facebook.swift.service.ContextChain _chain,
      final int _seqId) {
      return oprot -> {
      try {
        oprot.writeStructBegin(com.facebook.thrift.util.RpcPayloadUtil.TSTRUCT);

        
        long _iter0 = (long)_r;
        oprot.writeFieldBegin(com.facebook.thrift.util.RpcPayloadUtil.I64_FIELD);
oprot.writeI64(_iter0);
        oprot.writeFieldEnd();

        oprot.writeFieldStop();
        oprot.writeStructEnd();

        _chain.postWrite(_r);
      } catch (Throwable _e) {
        throw reactor.core.Exceptions.propagate(_e);
      }
    };
  }


  private static reactor.core.publisher.Mono<com.facebook.thrift.payload.ServerResponsePayload>
    _doinit(
    TestService.Reactive _delegate,
    com.facebook.thrift.payload.ServerRequestPayload _payload,
    java.util.List<com.facebook.thrift.payload.Reader> _readers,
    com.facebook.swift.service.ContextChain _chain) {
          _chain.preRead();
          java.util.List<java.lang.Object>_data = _payload.getData(_readers);
          java.util.Iterator<java.lang.Object> _iterator = _data.iterator();

          long int1 = (long) _iterator.next();

          _chain.postRead(_data);

          reactor.core.publisher.Mono<Long> _delegateResponse =
            _delegate.init(int1);

          if (com.facebook.thrift.util.resources.RpcResources.isForceExecutionOffEventLoop()) {
            _delegateResponse = _delegateResponse.publishOn(com.facebook.thrift.util.resources.RpcResources.getOffLoopScheduler());
          }

          reactor.core.publisher.Mono<com.facebook.thrift.payload.ServerResponsePayload> _internalResponse =
            _delegateResponse.map(_response -> {
              _chain.preWrite(_response);
              com.facebook.thrift.payload.ServerResponsePayload _serverResponsePayload =
                com.facebook.thrift.util.RpcPayloadUtil.createServerResponsePayload(
                  _payload,
                  _create_init_response_writer(_response, _chain, _payload.getMessageSeqId()));

                return _serverResponsePayload;
            })
            .switchIfEmpty(
              reactor.core.publisher.Mono.fromSupplier(
                () -> {
                  org.apache.thrift.TApplicationException _tApplicationException =
                    new org.apache.thrift.TApplicationException(org.apache.thrift.TApplicationException.MISSING_RESULT, "method init returned null");
                  return com.facebook.thrift.util.RpcPayloadUtil.fromTApplicationException(_tApplicationException, _payload.getRequestRpcMetadata(), _chain);
                }
              )
            )
            .<com.facebook.thrift.payload.ServerResponsePayload>onErrorResume(_t -> {
                _chain.preWriteException(_t);
                // exception is not of user declared type
                String _errorMessage = String.format("Internal error processing init: %s", _t.getMessage() == null ? "<null>" : _t.getMessage());
                org.apache.thrift.TApplicationException _tApplicationException =
                    new org.apache.thrift.TApplicationException(org.apache.thrift.TApplicationException.INTERNAL_ERROR, _errorMessage);
                _tApplicationException.initCause(_t);
                com.facebook.thrift.payload.ServerResponsePayload _serverResponsePayload =
                    com.facebook.thrift.util.RpcPayloadUtil.fromTApplicationException(_tApplicationException, _payload.getRequestRpcMetadata(),  _chain);

                return reactor.core.publisher.Mono.just(_serverResponsePayload);
            });
          if (com.facebook.thrift.util.resources.RpcResources.isForceExecutionOffEventLoop()) {
            _internalResponse = _internalResponse.subscribeOn(com.facebook.thrift.util.resources.RpcResources.getOffLoopScheduler());
          }

          return _internalResponse;
  }


  @java.lang.Override
  public reactor.core.publisher.Flux<com.facebook.thrift.payload.ServerResponsePayload> singleRequestStreamingResponse(com.facebook.thrift.payload.ServerRequestPayload _payload) {
    final String _name = _payload.getRequestRpcMetadata().getName();

    com.facebook.swift.service.ContextChain _chain;
    try {
      _chain = new com.facebook.swift.service.ContextChain(_eventHandlers, _name, _payload.getRequestContext());
    } catch (Throwable _t) {
      org.apache.thrift.TApplicationException _tApplicationException = new org.apache.thrift.TApplicationException(_t.getMessage());
      com.facebook.thrift.payload.ServerResponsePayload _serverResponsePayload = com.facebook.thrift.util.RpcPayloadUtil.fromTApplicationException(_tApplicationException, _payload.getRequestRpcMetadata(), null);
      return reactor.core.publisher.Flux.just(_serverResponsePayload);
    }

    reactor.core.publisher.Flux<com.facebook.thrift.payload.ServerResponsePayload> _result;
    try {
      switch(_name) {
        default: {
            _chain.preRead();
            org.apache.thrift.TApplicationException _tApplicationException = new org.apache.thrift.TApplicationException(org.apache.thrift.TApplicationException.UNKNOWN_METHOD, "no method found with name " + _name);
            com.facebook.thrift.payload.ServerResponsePayload _serverResponsePayload = com.facebook.thrift.util.RpcPayloadUtil.fromTApplicationException(_tApplicationException, _payload.getRequestRpcMetadata(), _chain);
            return reactor.core.publisher.Flux.just(_serverResponsePayload);
        }
      }
    } catch (org.apache.thrift.TApplicationException _tApplicationException) {
      com.facebook.thrift.payload.ServerResponsePayload _serverResponsePayload = com.facebook.thrift.util.RpcPayloadUtil.fromTApplicationException(_tApplicationException, _payload.getRequestRpcMetadata(), _chain);
      return reactor.core.publisher.Flux.just(_serverResponsePayload);
    } catch (Throwable _t) {
      _result = reactor.core.publisher.Flux.error(_t);
    }
    return _result;
  }

  @java.lang.Override
  public reactor.core.publisher.Mono<com.facebook.thrift.payload.ServerResponsePayload> singleRequestSingleResponse(com.facebook.thrift.payload.ServerRequestPayload _payload) {
    final String _name = _payload.getRequestRpcMetadata().getName();

    com.facebook.swift.service.ContextChain _chain;
    try {
      _chain = new com.facebook.swift.service.ContextChain(_eventHandlers, _name, _payload.getRequestContext());
    } catch (Throwable _t) {
      org.apache.thrift.TApplicationException _tApplicationException = new org.apache.thrift.TApplicationException(_t.getMessage());
      com.facebook.thrift.payload.ServerResponsePayload _serverResponsePayload = com.facebook.thrift.util.RpcPayloadUtil.fromTApplicationException(_tApplicationException, _payload.getRequestRpcMetadata(), null);
      return reactor.core.publisher.Mono.just(_serverResponsePayload);
    }

    reactor.core.publisher.Mono<com.facebook.thrift.payload.ServerResponsePayload> _result;
    try {
      switch (_name) {
        case "init":
          _result = _doinit(_delegate, _payload, _initReaders, _chain);
        break;
        default: {
            _chain.preRead();
            org.apache.thrift.TApplicationException _tApplicationException = new org.apache.thrift.TApplicationException(org.apache.thrift.TApplicationException.UNKNOWN_METHOD, "no method found with name " + _name);
            com.facebook.thrift.payload.ServerResponsePayload _serverResponsePayload = com.facebook.thrift.util.RpcPayloadUtil.fromTApplicationException(_tApplicationException, _payload.getRequestRpcMetadata(), _chain);
            return reactor.core.publisher.Mono.just(_serverResponsePayload);
        }
      }
    } catch (org.apache.thrift.TApplicationException _tApplicationException) {
      com.facebook.thrift.payload.ServerResponsePayload _serverResponsePayload = com.facebook.thrift.util.RpcPayloadUtil.fromTApplicationException(_tApplicationException, _payload.getRequestRpcMetadata(), _chain);
      return reactor.core.publisher.Mono.just(_serverResponsePayload);
    } catch (Throwable _t) {
      _result = reactor.core.publisher.Mono.error(_t);
    }

    return _result;
  }

  @java.lang.Override
  public reactor.core.publisher.Mono<Void> singleRequestNoResponse(com.facebook.thrift.payload.ServerRequestPayload _payload) {
    final String _name = _payload.getRequestRpcMetadata().getName();

    com.facebook.swift.service.ContextChain _chain;
    try {
      _chain = new com.facebook.swift.service.ContextChain(_eventHandlers, _name, _payload.getRequestContext());
    } catch (Throwable _t) {
      return reactor.core.publisher.Mono.error(_t);
    }

    reactor.core.publisher.Mono<Void> _result;
    try {
      switch (_name) {
        default: {
          _result = reactor.core.publisher.Mono.error(new org.apache.thrift.TApplicationException(org.apache.thrift.TApplicationException.UNKNOWN_METHOD, "no method found with name " + _name));
        }
      }
    } catch (Throwable _t) {
      _result = reactor.core.publisher.Mono.error(_t);
    }

    return _result;
  }

  public java.util.Map<String, com.facebook.thrift.server.RpcServerHandler> getMethodMap() {
      return _methodMap;
  }

}
