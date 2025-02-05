// Autogenerated by Thrift for thrift/compiler/test/fixtures/inheritance/src/module.thrift
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//  @generated

package module


import (
    "context"
    "fmt"
    "reflect"

    thrift "github.com/facebook/fbthrift/thrift/lib/go/thrift/types"
    metadata "github.com/facebook/fbthrift/thrift/lib/thrift/metadata"
)

// (needed to ensure safety because of naive import list construction)
var _ = context.Background
var _ = fmt.Printf
var _ = reflect.Ptr
var _ = thrift.ZERO
var _ = metadata.GoUnusedProtection__

type MyRoot interface {
    DoRoot(ctx context.Context) (error)
}

type MyRootClientInterface interface {
    thrift.ClientInterface
    MyRoot
}

type MyRootClient struct {
    ch thrift.RequestChannel
}
// Compile time interface enforcer
var _ MyRootClientInterface = (*MyRootClient)(nil)

func NewMyRootChannelClient(channel thrift.RequestChannel) *MyRootClient {
    return &MyRootClient{
        ch: channel,
    }
}

func NewMyRootClient(prot thrift.Protocol) *MyRootClient {
    return NewMyRootChannelClient(thrift.NewSerialChannel(prot))
}

func (c *MyRootClient) Close() error {
    return c.ch.Close()
}

func (c *MyRootClient) DoRoot(ctx context.Context) (error) {
    in := &reqMyRootDoRoot{
    }
    out := newRespMyRootDoRoot()
    err := c.ch.Call(ctx, "do_root", in, out)
    if err != nil {
        return err
    }
    return nil
}


type MyRootProcessor struct {
    processorFunctionMap map[string]thrift.ProcessorFunction
    functionServiceMap   map[string]string
    handler            MyRoot
}

func NewMyRootProcessor(handler MyRoot) *MyRootProcessor {
    p := &MyRootProcessor{
        handler:              handler,
        processorFunctionMap: make(map[string]thrift.ProcessorFunction),
        functionServiceMap:   make(map[string]string),
    }
    p.AddToProcessorFunctionMap("do_root", &procFuncMyRootDoRoot{handler: handler})
    p.AddToFunctionServiceMap("do_root", "MyRoot")

    return p
}

func (p *MyRootProcessor) AddToProcessorFunctionMap(key string, processorFunction thrift.ProcessorFunction) {
    p.processorFunctionMap[key] = processorFunction
}

func (p *MyRootProcessor) AddToFunctionServiceMap(key, service string) {
    p.functionServiceMap[key] = service
}

func (p *MyRootProcessor) GetProcessorFunction(key string) (processor thrift.ProcessorFunction) {
    return p.processorFunctionMap[key]
}

func (p *MyRootProcessor) ProcessorFunctionMap() map[string]thrift.ProcessorFunction {
    return p.processorFunctionMap
}

func (p *MyRootProcessor) FunctionServiceMap() map[string]string {
    return p.functionServiceMap
}

func (p *MyRootProcessor) PackageName() string {
    return "module"
}

func (p *MyRootProcessor) GetThriftMetadata() *metadata.ThriftMetadata {
    return GetThriftMetadataForService("module.MyRoot")
}


type procFuncMyRootDoRoot struct {
    handler MyRoot
}
// Compile time interface enforcer
var _ thrift.ProcessorFunction = (*procFuncMyRootDoRoot)(nil)

func (p *procFuncMyRootDoRoot) Read(iprot thrift.Decoder) (thrift.Struct, thrift.Exception) {
    args := newReqMyRootDoRoot()
    if err := args.Read(iprot); err != nil {
        return nil, err
    }
    iprot.ReadMessageEnd()
    return args, nil
}

func (p *procFuncMyRootDoRoot) Write(seqId int32, result thrift.WritableStruct, oprot thrift.Encoder) (err thrift.Exception) {
    var err2 error
    messageType := thrift.REPLY
    switch result.(type) {
    case thrift.ApplicationException:
        messageType = thrift.EXCEPTION
    }

    if err2 = oprot.WriteMessageBegin("do_root", messageType, seqId); err2 != nil {
        err = err2
    }
    if err2 = result.Write(oprot); err == nil && err2 != nil {
        err = err2
    }
    if err2 = oprot.WriteMessageEnd(); err == nil && err2 != nil {
        err = err2
    }
    if err2 = oprot.Flush(); err == nil && err2 != nil {
        err = err2
    }
    return err
}

func (p *procFuncMyRootDoRoot) RunContext(ctx context.Context, reqStruct thrift.Struct) (thrift.WritableStruct, thrift.ApplicationException) {
    result := newRespMyRootDoRoot()
    err := p.handler.DoRoot(ctx)
    if err != nil {
        x := thrift.NewApplicationExceptionCause(thrift.INTERNAL_ERROR, "Internal error processing DoRoot: " + err.Error(), err)
        return x, x
    }

    return result, nil
}


type MyNode interface {
    // Inherited/extended service
    MyRoot

    DoMid(ctx context.Context) (error)
}

type MyNodeClientInterface interface {
    thrift.ClientInterface
    MyNode
}

type MyNodeClient struct {
    // Inherited/extended service
    *MyRootClient
    ch thrift.RequestChannel
}
// Compile time interface enforcer
var _ MyNodeClientInterface = (*MyNodeClient)(nil)

func NewMyNodeChannelClient(channel thrift.RequestChannel) *MyNodeClient {
    return &MyNodeClient{
        MyRootClient: NewMyRootChannelClient(channel),
        ch: channel,
    }
}

func NewMyNodeClient(prot thrift.Protocol) *MyNodeClient {
    return NewMyNodeChannelClient(thrift.NewSerialChannel(prot))
}

func (c *MyNodeClient) Close() error {
    return c.ch.Close()
}

func (c *MyNodeClient) DoMid(ctx context.Context) (error) {
    in := &reqMyNodeDoMid{
    }
    out := newRespMyNodeDoMid()
    err := c.ch.Call(ctx, "do_mid", in, out)
    if err != nil {
        return err
    }
    return nil
}


type MyNodeProcessor struct {
    // Inherited/extended processor
    *MyRootProcessor
}

func NewMyNodeProcessor(handler MyNode) *MyNodeProcessor {
    p := &MyNodeProcessor{
        NewMyRootProcessor(handler),
    }
    p.AddToProcessorFunctionMap("do_mid", &procFuncMyNodeDoMid{handler: handler})
    p.AddToFunctionServiceMap("do_mid", "MyNode")

    return p
}

func (p *MyNodeProcessor) GetThriftMetadata() *metadata.ThriftMetadata {
    return GetThriftMetadataForService("module.MyNode")
}


type procFuncMyNodeDoMid struct {
    handler MyNode
}
// Compile time interface enforcer
var _ thrift.ProcessorFunction = (*procFuncMyNodeDoMid)(nil)

func (p *procFuncMyNodeDoMid) Read(iprot thrift.Decoder) (thrift.Struct, thrift.Exception) {
    args := newReqMyNodeDoMid()
    if err := args.Read(iprot); err != nil {
        return nil, err
    }
    iprot.ReadMessageEnd()
    return args, nil
}

func (p *procFuncMyNodeDoMid) Write(seqId int32, result thrift.WritableStruct, oprot thrift.Encoder) (err thrift.Exception) {
    var err2 error
    messageType := thrift.REPLY
    switch result.(type) {
    case thrift.ApplicationException:
        messageType = thrift.EXCEPTION
    }

    if err2 = oprot.WriteMessageBegin("do_mid", messageType, seqId); err2 != nil {
        err = err2
    }
    if err2 = result.Write(oprot); err == nil && err2 != nil {
        err = err2
    }
    if err2 = oprot.WriteMessageEnd(); err == nil && err2 != nil {
        err = err2
    }
    if err2 = oprot.Flush(); err == nil && err2 != nil {
        err = err2
    }
    return err
}

func (p *procFuncMyNodeDoMid) RunContext(ctx context.Context, reqStruct thrift.Struct) (thrift.WritableStruct, thrift.ApplicationException) {
    result := newRespMyNodeDoMid()
    err := p.handler.DoMid(ctx)
    if err != nil {
        x := thrift.NewApplicationExceptionCause(thrift.INTERNAL_ERROR, "Internal error processing DoMid: " + err.Error(), err)
        return x, x
    }

    return result, nil
}


type MyLeaf interface {
    // Inherited/extended service
    MyNode

    DoLeaf(ctx context.Context) (error)
}

type MyLeafClientInterface interface {
    thrift.ClientInterface
    MyLeaf
}

type MyLeafClient struct {
    // Inherited/extended service
    *MyNodeClient
    ch thrift.RequestChannel
}
// Compile time interface enforcer
var _ MyLeafClientInterface = (*MyLeafClient)(nil)

func NewMyLeafChannelClient(channel thrift.RequestChannel) *MyLeafClient {
    return &MyLeafClient{
        MyNodeClient: NewMyNodeChannelClient(channel),
        ch: channel,
    }
}

func NewMyLeafClient(prot thrift.Protocol) *MyLeafClient {
    return NewMyLeafChannelClient(thrift.NewSerialChannel(prot))
}

func (c *MyLeafClient) Close() error {
    return c.ch.Close()
}

func (c *MyLeafClient) DoLeaf(ctx context.Context) (error) {
    in := &reqMyLeafDoLeaf{
    }
    out := newRespMyLeafDoLeaf()
    err := c.ch.Call(ctx, "do_leaf", in, out)
    if err != nil {
        return err
    }
    return nil
}


type MyLeafProcessor struct {
    // Inherited/extended processor
    *MyNodeProcessor
}

func NewMyLeafProcessor(handler MyLeaf) *MyLeafProcessor {
    p := &MyLeafProcessor{
        NewMyNodeProcessor(handler),
    }
    p.AddToProcessorFunctionMap("do_leaf", &procFuncMyLeafDoLeaf{handler: handler})
    p.AddToFunctionServiceMap("do_leaf", "MyLeaf")

    return p
}

func (p *MyLeafProcessor) GetThriftMetadata() *metadata.ThriftMetadata {
    return GetThriftMetadataForService("module.MyLeaf")
}


type procFuncMyLeafDoLeaf struct {
    handler MyLeaf
}
// Compile time interface enforcer
var _ thrift.ProcessorFunction = (*procFuncMyLeafDoLeaf)(nil)

func (p *procFuncMyLeafDoLeaf) Read(iprot thrift.Decoder) (thrift.Struct, thrift.Exception) {
    args := newReqMyLeafDoLeaf()
    if err := args.Read(iprot); err != nil {
        return nil, err
    }
    iprot.ReadMessageEnd()
    return args, nil
}

func (p *procFuncMyLeafDoLeaf) Write(seqId int32, result thrift.WritableStruct, oprot thrift.Encoder) (err thrift.Exception) {
    var err2 error
    messageType := thrift.REPLY
    switch result.(type) {
    case thrift.ApplicationException:
        messageType = thrift.EXCEPTION
    }

    if err2 = oprot.WriteMessageBegin("do_leaf", messageType, seqId); err2 != nil {
        err = err2
    }
    if err2 = result.Write(oprot); err == nil && err2 != nil {
        err = err2
    }
    if err2 = oprot.WriteMessageEnd(); err == nil && err2 != nil {
        err = err2
    }
    if err2 = oprot.Flush(); err == nil && err2 != nil {
        err = err2
    }
    return err
}

func (p *procFuncMyLeafDoLeaf) RunContext(ctx context.Context, reqStruct thrift.Struct) (thrift.WritableStruct, thrift.ApplicationException) {
    result := newRespMyLeafDoLeaf()
    err := p.handler.DoLeaf(ctx)
    if err != nil {
        x := thrift.NewApplicationExceptionCause(thrift.INTERNAL_ERROR, "Internal error processing DoLeaf: " + err.Error(), err)
        return x, x
    }

    return result, nil
}


