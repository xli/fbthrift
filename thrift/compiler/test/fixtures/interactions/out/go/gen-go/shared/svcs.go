// Autogenerated by Thrift for shared.thrift
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//  @generated

package shared


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

type InteractLocally interface {
}

type InteractLocallyClientInterface interface {
    thrift.ClientInterface
    InteractLocally
}

type InteractLocallyClient struct {
    ch thrift.RequestChannel
}
// Compile time interface enforcer
var _ InteractLocallyClientInterface = (*InteractLocallyClient)(nil)

func NewInteractLocallyChannelClient(channel thrift.RequestChannel) *InteractLocallyClient {
    return &InteractLocallyClient{
        ch: channel,
    }
}

func NewInteractLocallyClient(prot thrift.Protocol) *InteractLocallyClient {
    return NewInteractLocallyChannelClient(thrift.NewSerialChannel(prot))
}

func (c *InteractLocallyClient) Close() error {
    return c.ch.Close()
}


type InteractLocallyProcessor struct {
    processorFunctionMap map[string]thrift.ProcessorFunction
    functionServiceMap   map[string]string
    handler            InteractLocally
}

func NewInteractLocallyProcessor(handler InteractLocally) *InteractLocallyProcessor {
    p := &InteractLocallyProcessor{
        handler:              handler,
        processorFunctionMap: make(map[string]thrift.ProcessorFunction),
        functionServiceMap:   make(map[string]string),
    }

    return p
}

func (p *InteractLocallyProcessor) AddToProcessorFunctionMap(key string, processorFunction thrift.ProcessorFunction) {
    p.processorFunctionMap[key] = processorFunction
}

func (p *InteractLocallyProcessor) AddToFunctionServiceMap(key, service string) {
    p.functionServiceMap[key] = service
}

func (p *InteractLocallyProcessor) GetProcessorFunction(key string) (processor thrift.ProcessorFunction) {
    return p.processorFunctionMap[key]
}

func (p *InteractLocallyProcessor) ProcessorFunctionMap() map[string]thrift.ProcessorFunction {
    return p.processorFunctionMap
}

func (p *InteractLocallyProcessor) FunctionServiceMap() map[string]string {
    return p.functionServiceMap
}

func (p *InteractLocallyProcessor) PackageName() string {
    return "shared"
}

func (p *InteractLocallyProcessor) GetThriftMetadata() *metadata.ThriftMetadata {
    return GetThriftMetadataForService("shared.InteractLocally")
}


