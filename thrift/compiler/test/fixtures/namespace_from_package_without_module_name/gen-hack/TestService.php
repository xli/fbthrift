<?hh
/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

/**
 * Original thrift service:-
 * TestService
 */
<<\ThriftTypeInfo(shape('uri' => 'test.dev/namespace_from_package_without_module_name/TestService'))>>
interface TestServiceAsyncIf extends \IThriftAsyncIf {
  /**
   * Original thrift definition:-
   * i64
   *   init(1: i64 int1);
   */
  public function init(int $int1): Awaitable<int>;
}

/**
 * Original thrift service:-
 * TestService
 */
<<\ThriftTypeInfo(shape('uri' => 'test.dev/namespace_from_package_without_module_name/TestService'))>>
interface TestServiceIf extends \IThriftSyncIf {
  /**
   * Original thrift definition:-
   * i64
   *   init(1: i64 int1);
   */
  public function init(int $int1): int;
}

/**
 * Original thrift service:-
 * TestService
 */
<<\ThriftTypeInfo(shape('uri' => 'test.dev/namespace_from_package_without_module_name/TestService'))>>
interface TestServiceAsyncClientIf extends TestServiceAsyncIf {
}

/**
 * Original thrift service:-
 * TestService
 */
<<\ThriftTypeInfo(shape('uri' => 'test.dev/namespace_from_package_without_module_name/TestService'))>>
interface TestServiceClientIf extends \IThriftSyncIf {
  /**
   * Original thrift definition:-
   * i64
   *   init(1: i64 int1);
   */
  public function init(int $int1): Awaitable<int>;
}

/**
 * Original thrift service:-
 * TestService
 */
trait TestServiceClientBase {
  require extends \ThriftClientBase;

  protected function sendImpl_init(int $int1): int {
    $currentseqid = $this->getNextSequenceID();
    $args = test.namespace_from_package_without_module_name_TestService_init_args::fromShape(shape(
      'int1' => $int1,
    ));
    try {
      $this->eventHandler_->preSend('init', $args, $currentseqid);
      if ($this->output_ is \TBinaryProtocolAccelerated)
      {
        \thrift_protocol_write_binary($this->output_, 'init', \TMessageType::CALL, $args, $currentseqid, $this->output_->isStrictWrite(), false);
      }
      else if ($this->output_ is \TCompactProtocolAccelerated)
      {
        \thrift_protocol_write_compact($this->output_, 'init', \TMessageType::CALL, $args, $currentseqid, false);
      }
      else
      {
        $this->output_->writeMessageBegin('init', \TMessageType::CALL, $currentseqid);
        $args->write($this->output_);
        $this->output_->writeMessageEnd();
        $this->output_->getTransport()->flush();
      }
    } catch (\THandlerShortCircuitException $ex) {
      switch ($ex->resultType) {
        case \THandlerShortCircuitException::R_EXPECTED_EX:
        case \THandlerShortCircuitException::R_UNEXPECTED_EX:
          $this->eventHandler_->sendError('init', $args, $currentseqid, $ex->result);
          throw $ex->result;
        case \THandlerShortCircuitException::R_SUCCESS:
        default:
          $this->eventHandler_->postSend('init', $args, $currentseqid);
          return $currentseqid;
      }
    } catch (\Exception $ex) {
      $this->eventHandler_->sendError('init', $args, $currentseqid, $ex);
      throw $ex;
    }
    $this->eventHandler_->postSend('init', $args, $currentseqid);
    return $currentseqid;
  }

  protected function recvImpl_init(?int $expectedsequenceid = null, shape(?'read_options' => int) $options = shape()): int {
    try {
      $this->eventHandler_->preRecv('init', $expectedsequenceid);
      if ($this->input_ is \TBinaryProtocolAccelerated) {
        $result = \thrift_protocol_read_binary($this->input_, 'test.namespace_from_package_without_module_name_TestService_init_result', $this->input_->isStrictRead(), Shapes::idx($options, 'read_options', 0));
      } else if ($this->input_ is \TCompactProtocolAccelerated)
      {
        $result = \thrift_protocol_read_compact($this->input_, 'test.namespace_from_package_without_module_name_TestService_init_result', Shapes::idx($options, 'read_options', 0));
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
        $result = test.namespace_from_package_without_module_name_TestService_init_result::withDefaultValues();
        $result->read($this->input_);
        $this->input_->readMessageEnd();
        if ($expectedsequenceid !== null && ($rseqid !== $expectedsequenceid)) {
          throw new \TProtocolException("init failed: sequence id is out of order");
        }
      }
    } catch (\THandlerShortCircuitException $ex) {
      switch ($ex->resultType) {
        case \THandlerShortCircuitException::R_EXPECTED_EX:
          $this->eventHandler_->recvException('init', $expectedsequenceid, $ex->result);
          throw $ex->result;
        case \THandlerShortCircuitException::R_UNEXPECTED_EX:
          $this->eventHandler_->recvError('init', $expectedsequenceid, $ex->result);
          throw $ex->result;
        case \THandlerShortCircuitException::R_SUCCESS:
        default:
          $this->eventHandler_->postRecv('init', $expectedsequenceid, $ex->result);
          return $ex->result;
      }
    } catch (\Exception $ex) {
      $this->eventHandler_->recvError('init', $expectedsequenceid, $ex);
      throw $ex;
    }
    if ($result->success !== null) {
      $success = $result->success;
      $this->eventHandler_->postRecv('init', $expectedsequenceid, $success);
      return $success;
    }
    $x = new \TApplicationException("init failed: unknown result", \TApplicationException::MISSING_RESULT);
    $this->eventHandler_->recvError('init', $expectedsequenceid, $x);
    throw $x;
  }

}

class TestServiceAsyncClient extends \ThriftClientBase implements TestServiceAsyncClientIf {
  use TestServiceClientBase;

  /**
   * Original thrift definition:-
   * i64
   *   init(1: i64 int1);
   */
  public async function init(int $int1): Awaitable<int> {
    $hh_frame_metadata = $this->getHHFrameMetadata();
    if ($hh_frame_metadata !== null) {
      \HH\set_frame_metadata($hh_frame_metadata);
    }
    $rpc_options = $this->getAndResetOptions() ?? \ThriftClientBase::defaultOptions();
    await $this->asyncHandler_->genBefore("TestService", "init");
    $currentseqid = $this->sendImpl_init($int1);
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
    $response = $this->recvImpl_init($currentseqid);
    await $this->asyncHandler_->genAfter();
    return $response;
  }

}

class TestServiceClient extends \ThriftClientBase implements TestServiceClientIf {
  use TestServiceClientBase;

  /**
   * Original thrift definition:-
   * i64
   *   init(1: i64 int1);
   */
  public async function init(int $int1): Awaitable<int> {
    $hh_frame_metadata = $this->getHHFrameMetadata();
    if ($hh_frame_metadata !== null) {
      \HH\set_frame_metadata($hh_frame_metadata);
    }
    $rpc_options = $this->getAndResetOptions() ?? \ThriftClientBase::defaultOptions();
    await $this->asyncHandler_->genBefore("TestService", "init");
    $currentseqid = $this->sendImpl_init($int1);
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
    $response = $this->recvImpl_init($currentseqid);
    await $this->asyncHandler_->genAfter();
    return $response;
  }

  /* send and recv functions */
  public function send_init(int $int1): int {
    return $this->sendImpl_init($int1);
  }
  public function recv_init(?int $expectedsequenceid = null): int {
    return $this->recvImpl_init($expectedsequenceid);
  }
}

abstract class TestServiceAsyncProcessorBase extends \ThriftAsyncProcessor {
  abstract const type TThriftIf as TestServiceAsyncIf;
  const classname<\IThriftServiceStaticMetadata> SERVICE_METADATA_CLASS = TestServiceStaticMetadata::class;

  protected async function process_init(int $seqid, \TProtocol $input, \TProtocol $output): Awaitable<void> {
    $handler_ctx = $this->eventHandler_->getHandlerContext('init');
    $reply_type = \TMessageType::REPLY;

    $this->eventHandler_->preRead($handler_ctx, 'init', dict[]);

    if ($input is \TBinaryProtocolAccelerated) {
      $args = \thrift_protocol_read_binary_struct($input, 'test.namespace_from_package_without_module_name_TestService_init_args');
    } else if ($input is \TCompactProtocolAccelerated) {
      $args = \thrift_protocol_read_compact_struct($input, 'test.namespace_from_package_without_module_name_TestService_init_args');
    } else {
      $args = test.namespace_from_package_without_module_name_TestService_init_args::withDefaultValues();
      $args->read($input);
    }
    $input->readMessageEnd();
    $this->eventHandler_->postRead($handler_ctx, 'init', $args);
    $result = test.namespace_from_package_without_module_name_TestService_init_result::withDefaultValues();
    try {
      $this->eventHandler_->preExec($handler_ctx, 'test.namespace_from_package_without_module_name_TestService', 'init', $args);
      $result->success = await $this->handler->init($args->int1);
      $this->eventHandler_->postExec($handler_ctx, 'init', $result);
    } catch (\Exception $ex) {
      $reply_type = \TMessageType::EXCEPTION;
      $this->eventHandler_->handlerError($handler_ctx, 'init', $ex);
      $result = new \TApplicationException($ex->getMessage()."\n".$ex->getTraceAsString());
    }
    $this->eventHandler_->preWrite($handler_ctx, 'init', $result);
    if ($output is \TBinaryProtocolAccelerated)
    {
      \thrift_protocol_write_binary($output, 'init', $reply_type, $result, $seqid, $output->isStrictWrite());
    }
    else if ($output is \TCompactProtocolAccelerated)
    {
      \thrift_protocol_write_compact($output, 'init', $reply_type, $result, $seqid);
    }
    else
    {
      $output->writeMessageBegin("init", $reply_type, $seqid);
      $result->write($output);
      $output->writeMessageEnd();
      $output->getTransport()->flush();
    }
    $this->eventHandler_->postWrite($handler_ctx, 'init', $result);
  }
  protected async function process_getThriftServiceMetadata(int $seqid, \TProtocol $input, \TProtocol $output): Awaitable<void> {
    $reply_type = \TMessageType::REPLY;

    if ($input is \TBinaryProtocolAccelerated) {
      $args = \thrift_protocol_read_binary_struct($input, '\tmeta_ThriftMetadataService_getThriftServiceMetadata_args');
    } else if ($input is \TCompactProtocolAccelerated) {
      $args = \thrift_protocol_read_compact_struct($input, '\tmeta_ThriftMetadataService_getThriftServiceMetadata_args');
    } else {
      $args = \tmeta_ThriftMetadataService_getThriftServiceMetadata_args::withDefaultValues();
      $args->read($input);
    }
    $input->readMessageEnd();
    $result = \tmeta_ThriftMetadataService_getThriftServiceMetadata_result::withDefaultValues();
    try {
      $result->success = TestServiceStaticMetadata::getServiceMetadataResponse();
    } catch (\Exception $ex) {
      $reply_type = \TMessageType::EXCEPTION;
      $result = new \TApplicationException($ex->getMessage()."\n".$ex->getTraceAsString());
    }
    if ($output is \TBinaryProtocolAccelerated)
    {
      \thrift_protocol_write_binary($output, 'getThriftServiceMetadata', $reply_type, $result, $seqid, $output->isStrictWrite());
    }
    else if ($output is \TCompactProtocolAccelerated)
    {
      \thrift_protocol_write_compact($output, 'getThriftServiceMetadata', $reply_type, $result, $seqid);
    }
    else
    {
      $output->writeMessageBegin("getThriftServiceMetadata", $reply_type, $seqid);
      $result->write($output);
      $output->writeMessageEnd();
      $output->getTransport()->flush();
    }
  }
}
class TestServiceAsyncProcessor extends TestServiceAsyncProcessorBase {
  const type TThriftIf = TestServiceAsyncIf;
}

abstract class TestServiceSyncProcessorBase extends \ThriftSyncProcessor {
  abstract const type TThriftIf as TestServiceIf;
  const classname<\IThriftServiceStaticMetadata> SERVICE_METADATA_CLASS = TestServiceStaticMetadata::class;

  protected function process_init(int $seqid, \TProtocol $input, \TProtocol $output): void {
    $handler_ctx = $this->eventHandler_->getHandlerContext('init');
    $reply_type = \TMessageType::REPLY;

    $this->eventHandler_->preRead($handler_ctx, 'init', dict[]);

    if ($input is \TBinaryProtocolAccelerated) {
      $args = \thrift_protocol_read_binary_struct($input, 'test.namespace_from_package_without_module_name_TestService_init_args');
    } else if ($input is \TCompactProtocolAccelerated) {
      $args = \thrift_protocol_read_compact_struct($input, 'test.namespace_from_package_without_module_name_TestService_init_args');
    } else {
      $args = test.namespace_from_package_without_module_name_TestService_init_args::withDefaultValues();
      $args->read($input);
    }
    $input->readMessageEnd();
    $this->eventHandler_->postRead($handler_ctx, 'init', $args);
    $result = test.namespace_from_package_without_module_name_TestService_init_result::withDefaultValues();
    try {
      $this->eventHandler_->preExec($handler_ctx, 'test.namespace_from_package_without_module_name_TestService', 'init', $args);
      $result->success = $this->handler->init($args->int1);
      $this->eventHandler_->postExec($handler_ctx, 'init', $result);
    } catch (\Exception $ex) {
      $reply_type = \TMessageType::EXCEPTION;
      $this->eventHandler_->handlerError($handler_ctx, 'init', $ex);
      $result = new \TApplicationException($ex->getMessage()."\n".$ex->getTraceAsString());
    }
    $this->eventHandler_->preWrite($handler_ctx, 'init', $result);
    if ($output is \TBinaryProtocolAccelerated)
    {
      \thrift_protocol_write_binary($output, 'init', $reply_type, $result, $seqid, $output->isStrictWrite());
    }
    else if ($output is \TCompactProtocolAccelerated)
    {
      \thrift_protocol_write_compact($output, 'init', $reply_type, $result, $seqid);
    }
    else
    {
      $output->writeMessageBegin("init", $reply_type, $seqid);
      $result->write($output);
      $output->writeMessageEnd();
      $output->getTransport()->flush();
    }
    $this->eventHandler_->postWrite($handler_ctx, 'init', $result);
  }
  protected function process_getThriftServiceMetadata(int $seqid, \TProtocol $input, \TProtocol $output): void {
    $reply_type = \TMessageType::REPLY;

    if ($input is \TBinaryProtocolAccelerated) {
      $args = \thrift_protocol_read_binary_struct($input, '\tmeta_ThriftMetadataService_getThriftServiceMetadata_args');
    } else if ($input is \TCompactProtocolAccelerated) {
      $args = \thrift_protocol_read_compact_struct($input, '\tmeta_ThriftMetadataService_getThriftServiceMetadata_args');
    } else {
      $args = \tmeta_ThriftMetadataService_getThriftServiceMetadata_args::withDefaultValues();
      $args->read($input);
    }
    $input->readMessageEnd();
    $result = \tmeta_ThriftMetadataService_getThriftServiceMetadata_result::withDefaultValues();
    try {
      $result->success = TestServiceStaticMetadata::getServiceMetadataResponse();
    } catch (\Exception $ex) {
      $reply_type = \TMessageType::EXCEPTION;
      $result = new \TApplicationException($ex->getMessage()."\n".$ex->getTraceAsString());
    }
    if ($output is \TBinaryProtocolAccelerated)
    {
      \thrift_protocol_write_binary($output, 'getThriftServiceMetadata', $reply_type, $result, $seqid, $output->isStrictWrite());
    }
    else if ($output is \TCompactProtocolAccelerated)
    {
      \thrift_protocol_write_compact($output, 'getThriftServiceMetadata', $reply_type, $result, $seqid);
    }
    else
    {
      $output->writeMessageBegin("getThriftServiceMetadata", $reply_type, $seqid);
      $result->write($output);
      $output->writeMessageEnd();
      $output->getTransport()->flush();
    }
  }
}
class TestServiceSyncProcessor extends TestServiceSyncProcessorBase {
  const type TThriftIf = TestServiceIf;
}
// For backwards compatibility
class TestServiceProcessor extends TestServiceSyncProcessor {}

// HELPER FUNCTIONS AND STRUCTURES

class test.namespace_from_package_without_module_name_TestService_init_args implements \IThriftSyncStruct, \IThriftShapishSyncStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'int1',
      'type' => \TType::I64,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'int1' => 1,
  ];

  const type TConstructorShape = shape(
    ?'int1' => ?int,
  );

  const type TShape = shape(
    'int1' => int,
  );
  const int STRUCTURAL_ID = 975124300794717332;
  public int $int1;

  public function __construct(?int $int1 = null  )[] {
    $this->int1 = $int1 ?? 0;
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'int1'),
    );
  }

  public function getName()[]: string {
    return 'TestService_init_args';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "module.init_args",
        "fields" => vec[
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 1,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_I64_TYPE,
                )
              ),
              "name" => "int1",
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

  public static function __fromShape(self::TShape $shape)[]: this {
    return new static(
      $shape['int1'],
    );
  }

  public function __toShape()[]: self::TShape {
    return shape(
      'int1' => $this->int1,
    );
  }
  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

  public function readFromJson(string $jsonText): void {
    $parsed = json_decode($jsonText, true);

    if ($parsed === null || !($parsed is KeyedContainer<_, _>)) {
      throw new \TProtocolException("Cannot parse the given json string.");
    }

    if (idx($parsed, 'int1') !== null) {
      $this->int1 = /* HH_FIXME[4110] */ $parsed['int1'];
    }    
  }

}

class test.namespace_from_package_without_module_name_TestService_init_result implements \IThriftSyncStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    0 => shape(
      'var' => 'success',
      'type' => \TType::I64,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'success' => 0,
  ];

  const type TConstructorShape = shape(
    ?'success' => ?int,
  );

  const int STRUCTURAL_ID = 5548670328188446575;
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
    return 'TestService_init_result';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "module.TestService_init_result",
        "fields" => vec[
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 0,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_I64_TYPE,
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

  public function readFromJson(string $jsonText): void {
    $parsed = json_decode($jsonText, true);

    if ($parsed === null || !($parsed is KeyedContainer<_, _>)) {
      throw new \TProtocolException("Cannot parse the given json string.");
    }

    if (idx($parsed, 'success') !== null) {
      $this->success = /* HH_FIXME[4110] */ $parsed['success'];
    }    
  }

}

class TestServiceStaticMetadata implements \IThriftServiceStaticMetadata {
  public static function getServiceMetadata()[]: \tmeta_ThriftService {
    return tmeta_ThriftService::fromShape(
      shape(
        "name" => "module.TestService",
        "functions" => vec[
          tmeta_ThriftFunction::fromShape(
            shape(
              "name" => "init",
              "return_type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_I64_TYPE,
                )
              ),
              "arguments" => vec[
                tmeta_ThriftField::fromShape(
                  shape(
                    "id" => 1,
                    "type" => tmeta_ThriftType::fromShape(
                      shape(
                        "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_I64_TYPE,
                      )
                    ),
                    "name" => "int1",
                  )
                ),
              ],
            )
          ),
        ],
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
                'name' => 'module',
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

