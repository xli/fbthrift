<?hh
/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

namespace hack_ns2;

/**
 * Original thrift service:-
 * TestService
 */
interface TestServiceAsyncIf extends \foo\hack_ns\FooHackServiceAsyncIf {
  /**
   * Original thrift definition:-
   * i32
   *   ping(1: string str_arg);
   */
  public function ping(string $str_arg): Awaitable<int>;
}

/**
 * Original thrift service:-
 * TestService
 */
interface TestServiceIf extends \foo\hack_ns\FooHackServiceIf {
  /**
   * Original thrift definition:-
   * i32
   *   ping(1: string str_arg);
   */
  public function ping(string $str_arg): int;
}

/**
 * Original thrift service:-
 * TestService
 */
interface TestServiceAsyncClientIf extends TestServiceAsyncIf, \foo\hack_ns\FooHackServiceAsyncClientIf {
}

/**
 * Original thrift service:-
 * TestService
 */
interface TestServiceClientIf extends \foo\hack_ns\FooHackServiceClientIf {
  /**
   * Original thrift definition:-
   * i32
   *   ping(1: string str_arg);
   */
  public function ping(string $str_arg): Awaitable<int>;
}

/**
 * Original thrift service:-
 * TestService
 */
trait TestServiceClientBase {
  require extends \ThriftClientBase;

  protected function sendImpl_ping(string $str_arg): int {
    $currentseqid = $this->getNextSequenceID();
    $args = \hack_ns2\TestService_ping_args::fromShape(shape(
      'str_arg' => $str_arg,
    ));
    try {
      $this->eventHandler_->preSend('ping', $args, $currentseqid);
      if ($this->output_ is \TBinaryProtocolAccelerated)
      {
        \thrift_protocol_write_binary($this->output_, 'ping', \TMessageType::CALL, $args, $currentseqid, $this->output_->isStrictWrite(), false);
      }
      else if ($this->output_ is \TCompactProtocolAccelerated)
      {
        \thrift_protocol_write_compact($this->output_, 'ping', \TMessageType::CALL, $args, $currentseqid, false);
      }
      else
      {
        $this->output_->writeMessageBegin('ping', \TMessageType::CALL, $currentseqid);
        $args->write($this->output_);
        $this->output_->writeMessageEnd();
        $this->output_->getTransport()->flush();
      }
    } catch (\THandlerShortCircuitException $ex) {
      switch ($ex->resultType) {
        case \THandlerShortCircuitException::R_EXPECTED_EX:
        case \THandlerShortCircuitException::R_UNEXPECTED_EX:
          $this->eventHandler_->sendError('ping', $args, $currentseqid, $ex->result);
          throw $ex->result;
        case \THandlerShortCircuitException::R_SUCCESS:
        default:
          $this->eventHandler_->postSend('ping', $args, $currentseqid);
          return $currentseqid;
      }
    } catch (\Exception $ex) {
      $this->eventHandler_->sendError('ping', $args, $currentseqid, $ex);
      throw $ex;
    }
    $this->eventHandler_->postSend('ping', $args, $currentseqid);
    return $currentseqid;
  }

  protected function recvImpl_ping(?int $expectedsequenceid = null, shape(?'read_options' => int) $options = shape()): int {
    try {
      $this->eventHandler_->preRecv('ping', $expectedsequenceid);
      if ($this->input_ is \TBinaryProtocolAccelerated) {
        $result = \thrift_protocol_read_binary($this->input_, '\hack_ns2\TestService_ping_result', $this->input_->isStrictRead(), Shapes::idx($options, 'read_options', 0));
      } else if ($this->input_ is \TCompactProtocolAccelerated)
      {
        $result = \thrift_protocol_read_compact($this->input_, '\hack_ns2\TestService_ping_result', Shapes::idx($options, 'read_options', 0));
      }
      else
      {
        $rseqid = 0;
        $fname = '';
        $mtype = 0;

        $this->input_->readMessageBegin(
          inout $fname,
          inout $mtype,
          inout $rseqid,
        );
        if ($mtype === \TMessageType::EXCEPTION) {
          $x = new \TApplicationException();
          $x->read($this->input_);
          $this->input_->readMessageEnd();
          throw $x;
        }
        $result = \hack_ns2\TestService_ping_result::withDefaultValues();
        $result->read($this->input_);
        $this->input_->readMessageEnd();
        if ($expectedsequenceid !== null && ($rseqid !== $expectedsequenceid)) {
          throw new \TProtocolException("ping failed: sequence id is out of order");
        }
      }
    } catch (\THandlerShortCircuitException $ex) {
      switch ($ex->resultType) {
        case \THandlerShortCircuitException::R_EXPECTED_EX:
          $this->eventHandler_->recvException('ping', $expectedsequenceid, $ex->result);
          throw $ex->result;
        case \THandlerShortCircuitException::R_UNEXPECTED_EX:
          $this->eventHandler_->recvError('ping', $expectedsequenceid, $ex->result);
          throw $ex->result;
        case \THandlerShortCircuitException::R_SUCCESS:
        default:
          $this->eventHandler_->postRecv('ping', $expectedsequenceid, $ex->result);
          return $ex->result;
      }
    } catch (\Exception $ex) {
      $this->eventHandler_->recvError('ping', $expectedsequenceid, $ex);
      throw $ex;
    }
    if ($result->success !== null) {
      $success = $result->success;
      $this->eventHandler_->postRecv('ping', $expectedsequenceid, $success);
      return $success;
    }
    $x = new \TApplicationException("ping failed: unknown result", \TApplicationException::MISSING_RESULT);
    $this->eventHandler_->recvError('ping', $expectedsequenceid, $x);
    throw $x;
  }

}

class TestServiceAsyncClient extends \foo\hack_ns\FooHackServiceAsyncClient implements TestServiceAsyncClientIf {
  use TestServiceClientBase;

  /**
   * Original thrift definition:-
   * i32
   *   ping(1: string str_arg);
   */
  public async function ping(string $str_arg): Awaitable<int> {
    $hh_frame_metadata = $this->getHHFrameMetadata();
    if ($hh_frame_metadata !== null) {
      \HH\set_frame_metadata($hh_frame_metadata);
    }
    $rpc_options = $this->getAndResetOptions() ?? \ThriftClientBase::defaultOptions();
    await $this->asyncHandler_->genBefore("TestService", "ping");
    $currentseqid = $this->sendImpl_ping($str_arg);
    $channel = $this->channel_;
    $out_transport = $this->output_->getTransport();
    $in_transport = $this->input_->getTransport();
    if ($channel !== null && $out_transport is \TMemoryBuffer && $in_transport is \TMemoryBuffer) {
      $msg = $out_transport->getBuffer();
      $out_transport->resetBuffer();
      list($result_msg, $_read_headers) = await $channel->genSendRequestResponse($rpc_options, $msg);
      $in_transport->resetBuffer();
      $in_transport->write($result_msg);
    } else {
      await $this->asyncHandler_->genWait($currentseqid);
    }
    $response = $this->recvImpl_ping($currentseqid);
    await $this->asyncHandler_->genAfter();
    return $response;
  }

}

class TestServiceClient extends \foo\hack_ns\FooHackServiceClient implements TestServiceClientIf {
  use TestServiceClientBase;

  /**
   * Original thrift definition:-
   * i32
   *   ping(1: string str_arg);
   */
  public async function ping(string $str_arg): Awaitable<int> {
    $hh_frame_metadata = $this->getHHFrameMetadata();
    if ($hh_frame_metadata !== null) {
      \HH\set_frame_metadata($hh_frame_metadata);
    }
    $rpc_options = $this->getAndResetOptions() ?? \ThriftClientBase::defaultOptions();
    await $this->asyncHandler_->genBefore("TestService", "ping");
    $currentseqid = $this->sendImpl_ping($str_arg);
    $channel = $this->channel_;
    $out_transport = $this->output_->getTransport();
    $in_transport = $this->input_->getTransport();
    if ($channel !== null && $out_transport is \TMemoryBuffer && $in_transport is \TMemoryBuffer) {
      $msg = $out_transport->getBuffer();
      $out_transport->resetBuffer();
      list($result_msg, $_read_headers) = await $channel->genSendRequestResponse($rpc_options, $msg);
      $in_transport->resetBuffer();
      $in_transport->write($result_msg);
    } else {
      await $this->asyncHandler_->genWait($currentseqid);
    }
    $response = $this->recvImpl_ping($currentseqid);
    await $this->asyncHandler_->genAfter();
    return $response;
  }

  /* send and recv functions */
  public function send_ping(string $str_arg): int {
    return $this->sendImpl_ping($str_arg);
  }
  public function recv_ping(?int $expectedsequenceid = null): int {
    return $this->recvImpl_ping($expectedsequenceid);
  }
}

// HELPER FUNCTIONS AND STRUCTURES

class TestService_ping_args implements \IThriftSyncStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'str_arg',
      'type' => \TType::STRING,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'str_arg' => 1,
  ];

  const type TConstructorShape = shape(
    ?'str_arg' => ?string,
  );

  const int STRUCTURAL_ID = 5542358918184482101;
  public string $str_arg;

  public function __construct(?string $str_arg = null  )[] {
    $this->str_arg = $str_arg ?? '';
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'str_arg'),
    );
  }

  public function getName()[]: string {
    return 'TestService_ping_args';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return \tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "module2.ping_args",
        "fields" => vec[
          \tmeta_ThriftField::fromShape(
            shape(
              "id" => 1,
              "type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => \tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                )
              ),
              "name" => "str_arg",
            )
          ),
        ],
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
      ],
    );
  }

  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

}

class TestService_ping_result implements \IThriftSyncStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    0 => shape(
      'var' => 'success',
      'type' => \TType::I32,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'success' => 0,
  ];

  const type TConstructorShape = shape(
    ?'success' => ?int,
  );

  const int STRUCTURAL_ID = 3865318819874171525;
  public ?int $success;

  public function __construct(?int $success = null  )[] {
    $this->success = $success;
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'success'),
    );
  }

  public function getName()[]: string {
    return 'TestService_ping_result';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return \tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "module2.TestService_ping_result",
        "fields" => vec[
          \tmeta_ThriftField::fromShape(
            shape(
              "id" => 0,
              "type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => \tmeta_ThriftPrimitiveType::THRIFT_I32_TYPE,
                )
              ),
              "name" => "success",
            )
          ),
        ],
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
      ],
    );
  }

  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

}

class TestServiceStaticMetadata implements \IThriftServiceStaticMetadata {
  public static function getServiceMetadata()[]: \tmeta_ThriftService {
    return \tmeta_ThriftService::fromShape(
      shape(
        "name" => "module2.TestService",
        "functions" => vec[
          \tmeta_ThriftFunction::fromShape(
            shape(
              "name" => "ping",
              "return_type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => \tmeta_ThriftPrimitiveType::THRIFT_I32_TYPE,
                )
              ),
              "arguments" => vec[
                \tmeta_ThriftField::fromShape(
                  shape(
                    "id" => 1,
                    "type" => \tmeta_ThriftType::fromShape(
                      shape(
                        "t_primitive" => \tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                      )
                    ),
                    "name" => "str_arg",
                  )
                ),
              ],
            )
          ),
        ],
        "parent" => "module.FooHackService",
      )
    );
  }

  public static function getServiceMetadataResponse()[]: \tmeta_ThriftServiceMetadataResponse {
    return \tmeta_ThriftServiceMetadataResponse::fromShape(
      shape(
        'context' => \tmeta_ThriftServiceContext::fromShape(
          shape(
            'service_info' => self::getServiceMetadata(),
            'module' => \tmeta_ThriftModuleContext::fromShape(
              shape(
                'name' => 'module2',
              )
            ),
          )
        ),
        'metadata' => \tmeta_ThriftMetadata::fromShape(
          shape(
            'enums' => dict[
            ],
            'structs' => dict[
            ],
            'exceptions' => dict[
            ],
            'services' => dict[
              'module.FooHackService' => \foo\hack_ns\FooHackServiceStaticMetadata::getServiceMetadata(),
            ],
          )
        ),
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TServiceAnnotations {
    return shape(
      'service' => dict[],
      'functions' => dict[
      ],
    );
  }
}

