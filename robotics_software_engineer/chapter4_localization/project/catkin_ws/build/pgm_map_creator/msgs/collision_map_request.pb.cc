// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: collision_map_request.proto

#include "collision_map_request.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
namespace collision_map_creator_msgs {
namespace msgs {
constexpr CollisionMapRequest::CollisionMapRequest(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : filename_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , upperleft_(nullptr)
  , upperright_(nullptr)
  , lowerright_(nullptr)
  , lowerleft_(nullptr)
  , height_(0)
  , resolution_(0)
  , threshold_(255){}
struct CollisionMapRequestDefaultTypeInternal {
  constexpr CollisionMapRequestDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~CollisionMapRequestDefaultTypeInternal() {}
  union {
    CollisionMapRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT CollisionMapRequestDefaultTypeInternal _CollisionMapRequest_default_instance_;
}  // namespace msgs
}  // namespace collision_map_creator_msgs
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_collision_5fmap_5frequest_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_collision_5fmap_5frequest_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_collision_5fmap_5frequest_2eproto = nullptr;

const uint32_t TableStruct_collision_5fmap_5frequest_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::collision_map_creator_msgs::msgs::CollisionMapRequest, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::collision_map_creator_msgs::msgs::CollisionMapRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::collision_map_creator_msgs::msgs::CollisionMapRequest, upperleft_),
  PROTOBUF_FIELD_OFFSET(::collision_map_creator_msgs::msgs::CollisionMapRequest, upperright_),
  PROTOBUF_FIELD_OFFSET(::collision_map_creator_msgs::msgs::CollisionMapRequest, lowerright_),
  PROTOBUF_FIELD_OFFSET(::collision_map_creator_msgs::msgs::CollisionMapRequest, lowerleft_),
  PROTOBUF_FIELD_OFFSET(::collision_map_creator_msgs::msgs::CollisionMapRequest, height_),
  PROTOBUF_FIELD_OFFSET(::collision_map_creator_msgs::msgs::CollisionMapRequest, resolution_),
  PROTOBUF_FIELD_OFFSET(::collision_map_creator_msgs::msgs::CollisionMapRequest, filename_),
  PROTOBUF_FIELD_OFFSET(::collision_map_creator_msgs::msgs::CollisionMapRequest, threshold_),
  1,
  2,
  3,
  4,
  5,
  6,
  0,
  7,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 14, -1, sizeof(::collision_map_creator_msgs::msgs::CollisionMapRequest)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::collision_map_creator_msgs::msgs::_CollisionMapRequest_default_instance_),
};

const char descriptor_table_protodef_collision_5fmap_5frequest_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\033collision_map_request.proto\022\037collision"
  "_map_creator_msgs.msgs\032\016vector2d.proto\"\217"
  "\002\n\023CollisionMapRequest\022(\n\tupperLeft\030\001 \002("
  "\0132\025.gazebo.msgs.Vector2d\022)\n\nupperRight\030\002"
  " \002(\0132\025.gazebo.msgs.Vector2d\022)\n\nlowerRigh"
  "t\030\003 \002(\0132\025.gazebo.msgs.Vector2d\022(\n\tlowerL"
  "eft\030\004 \002(\0132\025.gazebo.msgs.Vector2d\022\016\n\006heig"
  "ht\030\005 \002(\001\022\022\n\nresolution\030\006 \002(\001\022\022\n\010filename"
  "\030\007 \001(\t:\000\022\026\n\tthreshold\030\010 \001(\005:\003255"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_collision_5fmap_5frequest_2eproto_deps[1] = {
  &::descriptor_table_vector2d_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_collision_5fmap_5frequest_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_collision_5fmap_5frequest_2eproto = {
  false, false, 352, descriptor_table_protodef_collision_5fmap_5frequest_2eproto, "collision_map_request.proto", 
  &descriptor_table_collision_5fmap_5frequest_2eproto_once, descriptor_table_collision_5fmap_5frequest_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_collision_5fmap_5frequest_2eproto::offsets,
  file_level_metadata_collision_5fmap_5frequest_2eproto, file_level_enum_descriptors_collision_5fmap_5frequest_2eproto, file_level_service_descriptors_collision_5fmap_5frequest_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_collision_5fmap_5frequest_2eproto_getter() {
  return &descriptor_table_collision_5fmap_5frequest_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_collision_5fmap_5frequest_2eproto(&descriptor_table_collision_5fmap_5frequest_2eproto);
namespace collision_map_creator_msgs {
namespace msgs {

// ===================================================================

class CollisionMapRequest::_Internal {
 public:
  using HasBits = decltype(std::declval<CollisionMapRequest>()._has_bits_);
  static const ::gazebo::msgs::Vector2d& upperleft(const CollisionMapRequest* msg);
  static void set_has_upperleft(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static const ::gazebo::msgs::Vector2d& upperright(const CollisionMapRequest* msg);
  static void set_has_upperright(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static const ::gazebo::msgs::Vector2d& lowerright(const CollisionMapRequest* msg);
  static void set_has_lowerright(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static const ::gazebo::msgs::Vector2d& lowerleft(const CollisionMapRequest* msg);
  static void set_has_lowerleft(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static void set_has_height(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
  static void set_has_resolution(HasBits* has_bits) {
    (*has_bits)[0] |= 64u;
  }
  static void set_has_filename(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_threshold(HasBits* has_bits) {
    (*has_bits)[0] |= 128u;
  }
  static bool MissingRequiredFields(const HasBits& has_bits) {
    return ((has_bits[0] & 0x0000007e) ^ 0x0000007e) != 0;
  }
};

const ::gazebo::msgs::Vector2d&
CollisionMapRequest::_Internal::upperleft(const CollisionMapRequest* msg) {
  return *msg->upperleft_;
}
const ::gazebo::msgs::Vector2d&
CollisionMapRequest::_Internal::upperright(const CollisionMapRequest* msg) {
  return *msg->upperright_;
}
const ::gazebo::msgs::Vector2d&
CollisionMapRequest::_Internal::lowerright(const CollisionMapRequest* msg) {
  return *msg->lowerright_;
}
const ::gazebo::msgs::Vector2d&
CollisionMapRequest::_Internal::lowerleft(const CollisionMapRequest* msg) {
  return *msg->lowerleft_;
}
void CollisionMapRequest::clear_upperleft() {
  if (upperleft_ != nullptr) upperleft_->Clear();
  _has_bits_[0] &= ~0x00000002u;
}
void CollisionMapRequest::clear_upperright() {
  if (upperright_ != nullptr) upperright_->Clear();
  _has_bits_[0] &= ~0x00000004u;
}
void CollisionMapRequest::clear_lowerright() {
  if (lowerright_ != nullptr) lowerright_->Clear();
  _has_bits_[0] &= ~0x00000008u;
}
void CollisionMapRequest::clear_lowerleft() {
  if (lowerleft_ != nullptr) lowerleft_->Clear();
  _has_bits_[0] &= ~0x00000010u;
}
CollisionMapRequest::CollisionMapRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:collision_map_creator_msgs.msgs.CollisionMapRequest)
}
CollisionMapRequest::CollisionMapRequest(const CollisionMapRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  filename_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    filename_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_filename()) {
    filename_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_filename(), 
      GetArenaForAllocation());
  }
  if (from._internal_has_upperleft()) {
    upperleft_ = new ::gazebo::msgs::Vector2d(*from.upperleft_);
  } else {
    upperleft_ = nullptr;
  }
  if (from._internal_has_upperright()) {
    upperright_ = new ::gazebo::msgs::Vector2d(*from.upperright_);
  } else {
    upperright_ = nullptr;
  }
  if (from._internal_has_lowerright()) {
    lowerright_ = new ::gazebo::msgs::Vector2d(*from.lowerright_);
  } else {
    lowerright_ = nullptr;
  }
  if (from._internal_has_lowerleft()) {
    lowerleft_ = new ::gazebo::msgs::Vector2d(*from.lowerleft_);
  } else {
    lowerleft_ = nullptr;
  }
  ::memcpy(&height_, &from.height_,
    static_cast<size_t>(reinterpret_cast<char*>(&threshold_) -
    reinterpret_cast<char*>(&height_)) + sizeof(threshold_));
  // @@protoc_insertion_point(copy_constructor:collision_map_creator_msgs.msgs.CollisionMapRequest)
}

inline void CollisionMapRequest::SharedCtor() {
filename_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  filename_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&upperleft_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&resolution_) -
    reinterpret_cast<char*>(&upperleft_)) + sizeof(resolution_));
threshold_ = 255;
}

CollisionMapRequest::~CollisionMapRequest() {
  // @@protoc_insertion_point(destructor:collision_map_creator_msgs.msgs.CollisionMapRequest)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void CollisionMapRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  filename_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete upperleft_;
  if (this != internal_default_instance()) delete upperright_;
  if (this != internal_default_instance()) delete lowerright_;
  if (this != internal_default_instance()) delete lowerleft_;
}

void CollisionMapRequest::ArenaDtor(void* object) {
  CollisionMapRequest* _this = reinterpret_cast< CollisionMapRequest* >(object);
  (void)_this;
}
void CollisionMapRequest::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void CollisionMapRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void CollisionMapRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:collision_map_creator_msgs.msgs.CollisionMapRequest)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    if (cached_has_bits & 0x00000001u) {
      filename_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(upperleft_ != nullptr);
      upperleft_->Clear();
    }
    if (cached_has_bits & 0x00000004u) {
      GOOGLE_DCHECK(upperright_ != nullptr);
      upperright_->Clear();
    }
    if (cached_has_bits & 0x00000008u) {
      GOOGLE_DCHECK(lowerright_ != nullptr);
      lowerright_->Clear();
    }
    if (cached_has_bits & 0x00000010u) {
      GOOGLE_DCHECK(lowerleft_ != nullptr);
      lowerleft_->Clear();
    }
  }
  if (cached_has_bits & 0x000000e0u) {
    ::memset(&height_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&resolution_) -
        reinterpret_cast<char*>(&height_)) + sizeof(resolution_));
    threshold_ = 255;
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* CollisionMapRequest::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // required .gazebo.msgs.Vector2d upperLeft = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_upperleft(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // required .gazebo.msgs.Vector2d upperRight = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_upperright(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // required .gazebo.msgs.Vector2d lowerRight = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          ptr = ctx->ParseMessage(_internal_mutable_lowerright(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // required .gazebo.msgs.Vector2d lowerLeft = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          ptr = ctx->ParseMessage(_internal_mutable_lowerleft(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // required double height = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 41)) {
          _Internal::set_has_height(&has_bits);
          height_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else
          goto handle_unusual;
        continue;
      // required double resolution = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 49)) {
          _Internal::set_has_resolution(&has_bits);
          resolution_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else
          goto handle_unusual;
        continue;
      // optional string filename = 7 [default = ""];
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 58)) {
          auto str = _internal_mutable_filename();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "collision_map_creator_msgs.msgs.CollisionMapRequest.filename");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional int32 threshold = 8 [default = 255];
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 64)) {
          _Internal::set_has_threshold(&has_bits);
          threshold_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* CollisionMapRequest::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:collision_map_creator_msgs.msgs.CollisionMapRequest)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required .gazebo.msgs.Vector2d upperLeft = 1;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::upperleft(this), target, stream);
  }

  // required .gazebo.msgs.Vector2d upperRight = 2;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        2, _Internal::upperright(this), target, stream);
  }

  // required .gazebo.msgs.Vector2d lowerRight = 3;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        3, _Internal::lowerright(this), target, stream);
  }

  // required .gazebo.msgs.Vector2d lowerLeft = 4;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        4, _Internal::lowerleft(this), target, stream);
  }

  // required double height = 5;
  if (cached_has_bits & 0x00000020u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(5, this->_internal_height(), target);
  }

  // required double resolution = 6;
  if (cached_has_bits & 0x00000040u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(6, this->_internal_resolution(), target);
  }

  // optional string filename = 7 [default = ""];
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_filename().data(), static_cast<int>(this->_internal_filename().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "collision_map_creator_msgs.msgs.CollisionMapRequest.filename");
    target = stream->WriteStringMaybeAliased(
        7, this->_internal_filename(), target);
  }

  // optional int32 threshold = 8 [default = 255];
  if (cached_has_bits & 0x00000080u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(8, this->_internal_threshold(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:collision_map_creator_msgs.msgs.CollisionMapRequest)
  return target;
}

size_t CollisionMapRequest::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:collision_map_creator_msgs.msgs.CollisionMapRequest)
  size_t total_size = 0;

  if (_internal_has_upperleft()) {
    // required .gazebo.msgs.Vector2d upperLeft = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *upperleft_);
  }

  if (_internal_has_upperright()) {
    // required .gazebo.msgs.Vector2d upperRight = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *upperright_);
  }

  if (_internal_has_lowerright()) {
    // required .gazebo.msgs.Vector2d lowerRight = 3;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *lowerright_);
  }

  if (_internal_has_lowerleft()) {
    // required .gazebo.msgs.Vector2d lowerLeft = 4;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *lowerleft_);
  }

  if (_internal_has_height()) {
    // required double height = 5;
    total_size += 1 + 8;
  }

  if (_internal_has_resolution()) {
    // required double resolution = 6;
    total_size += 1 + 8;
  }

  return total_size;
}
size_t CollisionMapRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:collision_map_creator_msgs.msgs.CollisionMapRequest)
  size_t total_size = 0;

  if (((_has_bits_[0] & 0x0000007e) ^ 0x0000007e) == 0) {  // All required fields are present.
    // required .gazebo.msgs.Vector2d upperLeft = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *upperleft_);

    // required .gazebo.msgs.Vector2d upperRight = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *upperright_);

    // required .gazebo.msgs.Vector2d lowerRight = 3;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *lowerright_);

    // required .gazebo.msgs.Vector2d lowerLeft = 4;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *lowerleft_);

    // required double height = 5;
    total_size += 1 + 8;

    // required double resolution = 6;
    total_size += 1 + 8;

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // optional string filename = 7 [default = ""];
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_filename());
  }

  // optional int32 threshold = 8 [default = 255];
  if (cached_has_bits & 0x00000080u) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32SizePlusOne(this->_internal_threshold());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData CollisionMapRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    CollisionMapRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*CollisionMapRequest::GetClassData() const { return &_class_data_; }

void CollisionMapRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<CollisionMapRequest *>(to)->MergeFrom(
      static_cast<const CollisionMapRequest &>(from));
}


void CollisionMapRequest::MergeFrom(const CollisionMapRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:collision_map_creator_msgs.msgs.CollisionMapRequest)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    if (cached_has_bits & 0x00000001u) {
      _internal_set_filename(from._internal_filename());
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_mutable_upperleft()->::gazebo::msgs::Vector2d::MergeFrom(from._internal_upperleft());
    }
    if (cached_has_bits & 0x00000004u) {
      _internal_mutable_upperright()->::gazebo::msgs::Vector2d::MergeFrom(from._internal_upperright());
    }
    if (cached_has_bits & 0x00000008u) {
      _internal_mutable_lowerright()->::gazebo::msgs::Vector2d::MergeFrom(from._internal_lowerright());
    }
    if (cached_has_bits & 0x00000010u) {
      _internal_mutable_lowerleft()->::gazebo::msgs::Vector2d::MergeFrom(from._internal_lowerleft());
    }
    if (cached_has_bits & 0x00000020u) {
      height_ = from.height_;
    }
    if (cached_has_bits & 0x00000040u) {
      resolution_ = from.resolution_;
    }
    if (cached_has_bits & 0x00000080u) {
      threshold_ = from.threshold_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void CollisionMapRequest::CopyFrom(const CollisionMapRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:collision_map_creator_msgs.msgs.CollisionMapRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CollisionMapRequest::IsInitialized() const {
  if (_Internal::MissingRequiredFields(_has_bits_)) return false;
  if (_internal_has_upperleft()) {
    if (!upperleft_->IsInitialized()) return false;
  }
  if (_internal_has_upperright()) {
    if (!upperright_->IsInitialized()) return false;
  }
  if (_internal_has_lowerright()) {
    if (!lowerright_->IsInitialized()) return false;
  }
  if (_internal_has_lowerleft()) {
    if (!lowerleft_->IsInitialized()) return false;
  }
  return true;
}

void CollisionMapRequest::InternalSwap(CollisionMapRequest* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &filename_, lhs_arena,
      &other->filename_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(CollisionMapRequest, resolution_)
      + sizeof(CollisionMapRequest::resolution_)
      - PROTOBUF_FIELD_OFFSET(CollisionMapRequest, upperleft_)>(
          reinterpret_cast<char*>(&upperleft_),
          reinterpret_cast<char*>(&other->upperleft_));
  swap(threshold_, other->threshold_);
}

::PROTOBUF_NAMESPACE_ID::Metadata CollisionMapRequest::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_collision_5fmap_5frequest_2eproto_getter, &descriptor_table_collision_5fmap_5frequest_2eproto_once,
      file_level_metadata_collision_5fmap_5frequest_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace collision_map_creator_msgs
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::collision_map_creator_msgs::msgs::CollisionMapRequest* Arena::CreateMaybeMessage< ::collision_map_creator_msgs::msgs::CollisionMapRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::collision_map_creator_msgs::msgs::CollisionMapRequest >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
