// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: vector2d.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_vector2d_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_vector2d_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3018000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3018000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_vector2d_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_vector2d_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_vector2d_2eproto;
namespace gazebo {
namespace msgs {
class Vector2d;
struct Vector2dDefaultTypeInternal;
extern Vector2dDefaultTypeInternal _Vector2d_default_instance_;
}  // namespace msgs
}  // namespace gazebo
PROTOBUF_NAMESPACE_OPEN
template<> ::gazebo::msgs::Vector2d* Arena::CreateMaybeMessage<::gazebo::msgs::Vector2d>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace gazebo {
namespace msgs {

// ===================================================================

class Vector2d final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:gazebo.msgs.Vector2d) */ {
 public:
  inline Vector2d() : Vector2d(nullptr) {}
  ~Vector2d() override;
  explicit constexpr Vector2d(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Vector2d(const Vector2d& from);
  Vector2d(Vector2d&& from) noexcept
    : Vector2d() {
    *this = ::std::move(from);
  }

  inline Vector2d& operator=(const Vector2d& from) {
    CopyFrom(from);
    return *this;
  }
  inline Vector2d& operator=(Vector2d&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Vector2d& default_instance() {
    return *internal_default_instance();
  }
  static inline const Vector2d* internal_default_instance() {
    return reinterpret_cast<const Vector2d*>(
               &_Vector2d_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Vector2d& a, Vector2d& b) {
    a.Swap(&b);
  }
  inline void Swap(Vector2d* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Vector2d* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Vector2d* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Vector2d>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Vector2d& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const Vector2d& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Vector2d* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "gazebo.msgs.Vector2d";
  }
  protected:
  explicit Vector2d(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kXFieldNumber = 1,
    kYFieldNumber = 2,
  };
  // required double x = 1;
  bool has_x() const;
  private:
  bool _internal_has_x() const;
  public:
  void clear_x();
  double x() const;
  void set_x(double value);
  private:
  double _internal_x() const;
  void _internal_set_x(double value);
  public:

  // required double y = 2;
  bool has_y() const;
  private:
  bool _internal_has_y() const;
  public:
  void clear_y();
  double y() const;
  void set_y(double value);
  private:
  double _internal_y() const;
  void _internal_set_y(double value);
  public:

  // @@protoc_insertion_point(class_scope:gazebo.msgs.Vector2d)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  double x_;
  double y_;
  friend struct ::TableStruct_vector2d_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Vector2d

// required double x = 1;
inline bool Vector2d::_internal_has_x() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool Vector2d::has_x() const {
  return _internal_has_x();
}
inline void Vector2d::clear_x() {
  x_ = 0;
  _has_bits_[0] &= ~0x00000001u;
}
inline double Vector2d::_internal_x() const {
  return x_;
}
inline double Vector2d::x() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Vector2d.x)
  return _internal_x();
}
inline void Vector2d::_internal_set_x(double value) {
  _has_bits_[0] |= 0x00000001u;
  x_ = value;
}
inline void Vector2d::set_x(double value) {
  _internal_set_x(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Vector2d.x)
}

// required double y = 2;
inline bool Vector2d::_internal_has_y() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool Vector2d::has_y() const {
  return _internal_has_y();
}
inline void Vector2d::clear_y() {
  y_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline double Vector2d::_internal_y() const {
  return y_;
}
inline double Vector2d::y() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Vector2d.y)
  return _internal_y();
}
inline void Vector2d::_internal_set_y(double value) {
  _has_bits_[0] |= 0x00000002u;
  y_ = value;
}
inline void Vector2d::set_y(double value) {
  _internal_set_y(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Vector2d.y)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_vector2d_2eproto
