// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: time.proto

#include "time.pb.h"

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
namespace gazebo {
namespace msgs {
constexpr Time::Time(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : sec_(0)
  , nsec_(0){}
struct TimeDefaultTypeInternal {
  constexpr TimeDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~TimeDefaultTypeInternal() {}
  union {
    Time _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT TimeDefaultTypeInternal _Time_default_instance_;
}  // namespace msgs
}  // namespace gazebo
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_time_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_time_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_time_2eproto = nullptr;

const uint32_t TableStruct_time_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Time, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Time, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Time, sec_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Time, nsec_),
  0,
  1,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 8, -1, sizeof(::gazebo::msgs::Time)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::gazebo::msgs::_Time_default_instance_),
};

const char descriptor_table_protodef_time_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\ntime.proto\022\013gazebo.msgs\"!\n\004Time\022\013\n\003sec"
  "\030\001 \002(\005\022\014\n\004nsec\030\002 \002(\005"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_time_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_time_2eproto = {
  false, false, 60, descriptor_table_protodef_time_2eproto, "time.proto", 
  &descriptor_table_time_2eproto_once, nullptr, 0, 1,
  schemas, file_default_instances, TableStruct_time_2eproto::offsets,
  file_level_metadata_time_2eproto, file_level_enum_descriptors_time_2eproto, file_level_service_descriptors_time_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_time_2eproto_getter() {
  return &descriptor_table_time_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_time_2eproto(&descriptor_table_time_2eproto);
namespace gazebo {
namespace msgs {

// ===================================================================

class Time::_Internal {
 public:
  using HasBits = decltype(std::declval<Time>()._has_bits_);
  static void set_has_sec(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_nsec(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static bool MissingRequiredFields(const HasBits& has_bits) {
    return ((has_bits[0] & 0x00000003) ^ 0x00000003) != 0;
  }
};

Time::Time(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:gazebo.msgs.Time)
}
Time::Time(const Time& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&sec_, &from.sec_,
    static_cast<size_t>(reinterpret_cast<char*>(&nsec_) -
    reinterpret_cast<char*>(&sec_)) + sizeof(nsec_));
  // @@protoc_insertion_point(copy_constructor:gazebo.msgs.Time)
}

inline void Time::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&sec_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&nsec_) -
    reinterpret_cast<char*>(&sec_)) + sizeof(nsec_));
}

Time::~Time() {
  // @@protoc_insertion_point(destructor:gazebo.msgs.Time)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void Time::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void Time::ArenaDtor(void* object) {
  Time* _this = reinterpret_cast< Time* >(object);
  (void)_this;
}
void Time::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Time::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Time::Clear() {
// @@protoc_insertion_point(message_clear_start:gazebo.msgs.Time)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    ::memset(&sec_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&nsec_) -
        reinterpret_cast<char*>(&sec_)) + sizeof(nsec_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Time::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // required int32 sec = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _Internal::set_has_sec(&has_bits);
          sec_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // required int32 nsec = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _Internal::set_has_nsec(&has_bits);
          nsec_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
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

uint8_t* Time::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:gazebo.msgs.Time)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required int32 sec = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_sec(), target);
  }

  // required int32 nsec = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(2, this->_internal_nsec(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gazebo.msgs.Time)
  return target;
}

size_t Time::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:gazebo.msgs.Time)
  size_t total_size = 0;

  if (_internal_has_sec()) {
    // required int32 sec = 1;
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32SizePlusOne(this->_internal_sec());
  }

  if (_internal_has_nsec()) {
    // required int32 nsec = 2;
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32SizePlusOne(this->_internal_nsec());
  }

  return total_size;
}
size_t Time::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gazebo.msgs.Time)
  size_t total_size = 0;

  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required int32 sec = 1;
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32SizePlusOne(this->_internal_sec());

    // required int32 nsec = 2;
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32SizePlusOne(this->_internal_nsec());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Time::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    Time::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Time::GetClassData() const { return &_class_data_; }

void Time::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<Time *>(to)->MergeFrom(
      static_cast<const Time &>(from));
}


void Time::MergeFrom(const Time& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gazebo.msgs.Time)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      sec_ = from.sec_;
    }
    if (cached_has_bits & 0x00000002u) {
      nsec_ = from.nsec_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Time::CopyFrom(const Time& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gazebo.msgs.Time)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Time::IsInitialized() const {
  if (_Internal::MissingRequiredFields(_has_bits_)) return false;
  return true;
}

void Time::InternalSwap(Time* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Time, nsec_)
      + sizeof(Time::nsec_)
      - PROTOBUF_FIELD_OFFSET(Time, sec_)>(
          reinterpret_cast<char*>(&sec_),
          reinterpret_cast<char*>(&other->sec_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Time::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_time_2eproto_getter, &descriptor_table_time_2eproto_once,
      file_level_metadata_time_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace gazebo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::gazebo::msgs::Time* Arena::CreateMaybeMessage< ::gazebo::msgs::Time >(Arena* arena) {
  return Arena::CreateMessageInternal< ::gazebo::msgs::Time >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>