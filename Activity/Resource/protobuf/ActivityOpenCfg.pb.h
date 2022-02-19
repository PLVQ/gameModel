// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ActivityOpenCfg.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ActivityOpenCfg_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ActivityOpenCfg_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3019000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3019004 < PROTOBUF_MIN_PROTOC_VERSION
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
#define PROTOBUF_INTERNAL_EXPORT_ActivityOpenCfg_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_ActivityOpenCfg_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ActivityOpenCfg_2eproto;
namespace Resource {
class ActivityOpenCfg;
struct ActivityOpenCfgDefaultTypeInternal;
extern ActivityOpenCfgDefaultTypeInternal _ActivityOpenCfg_default_instance_;
class ActivityOpenCfg_ARRAY;
struct ActivityOpenCfg_ARRAYDefaultTypeInternal;
extern ActivityOpenCfg_ARRAYDefaultTypeInternal _ActivityOpenCfg_ARRAY_default_instance_;
}  // namespace Resource
PROTOBUF_NAMESPACE_OPEN
template<> ::Resource::ActivityOpenCfg* Arena::CreateMaybeMessage<::Resource::ActivityOpenCfg>(Arena*);
template<> ::Resource::ActivityOpenCfg_ARRAY* Arena::CreateMaybeMessage<::Resource::ActivityOpenCfg_ARRAY>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace Resource {

// ===================================================================

class ActivityOpenCfg final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Resource.ActivityOpenCfg) */ {
 public:
  inline ActivityOpenCfg() : ActivityOpenCfg(nullptr) {}
  ~ActivityOpenCfg() override;
  explicit constexpr ActivityOpenCfg(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ActivityOpenCfg(const ActivityOpenCfg& from);
  ActivityOpenCfg(ActivityOpenCfg&& from) noexcept
    : ActivityOpenCfg() {
    *this = ::std::move(from);
  }

  inline ActivityOpenCfg& operator=(const ActivityOpenCfg& from) {
    CopyFrom(from);
    return *this;
  }
  inline ActivityOpenCfg& operator=(ActivityOpenCfg&& from) noexcept {
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

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const ActivityOpenCfg& default_instance() {
    return *internal_default_instance();
  }
  static inline const ActivityOpenCfg* internal_default_instance() {
    return reinterpret_cast<const ActivityOpenCfg*>(
               &_ActivityOpenCfg_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ActivityOpenCfg& a, ActivityOpenCfg& b) {
    a.Swap(&b);
  }
  inline void Swap(ActivityOpenCfg* other) {
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
  void UnsafeArenaSwap(ActivityOpenCfg* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ActivityOpenCfg* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ActivityOpenCfg>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const ActivityOpenCfg& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const ActivityOpenCfg& from);
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
  void InternalSwap(ActivityOpenCfg* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Resource.ActivityOpenCfg";
  }
  protected:
  explicit ActivityOpenCfg(::PROTOBUF_NAMESPACE_ID::Arena* arena,
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
    kOpenParamFieldNumber = 5,
    kActivityNameFieldNumber = 2,
    kActivityIDFieldNumber = 1,
    kAcitivityTypeFieldNumber = 3,
    kOpenTypeFieldNumber = 4,
    kOpenLevelFieldNumber = 7,
    kOpenServerTimeFieldNumber = 6,
    kCreateRoleDayFieldNumber = 8,
    kSortIDFieldNumber = 9,
    kDelayTimeFieldNumber = 10,
  };
  // repeated uint64 OpenParam = 5;
  int openparam_size() const;
  private:
  int _internal_openparam_size() const;
  public:
  void clear_openparam();
  private:
  uint64_t _internal_openparam(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< uint64_t >&
      _internal_openparam() const;
  void _internal_add_openparam(uint64_t value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< uint64_t >*
      _internal_mutable_openparam();
  public:
  uint64_t openparam(int index) const;
  void set_openparam(int index, uint64_t value);
  void add_openparam(uint64_t value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< uint64_t >&
      openparam() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< uint64_t >*
      mutable_openparam();

  // bytes ActivityName = 2;
  void clear_activityname();
  const std::string& activityname() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_activityname(ArgT0&& arg0, ArgT... args);
  std::string* mutable_activityname();
  PROTOBUF_NODISCARD std::string* release_activityname();
  void set_allocated_activityname(std::string* activityname);
  private:
  const std::string& _internal_activityname() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_activityname(const std::string& value);
  std::string* _internal_mutable_activityname();
  public:

  // uint32 ActivityID = 1;
  void clear_activityid();
  uint32_t activityid() const;
  void set_activityid(uint32_t value);
  private:
  uint32_t _internal_activityid() const;
  void _internal_set_activityid(uint32_t value);
  public:

  // uint32 AcitivityType = 3;
  void clear_acitivitytype();
  uint32_t acitivitytype() const;
  void set_acitivitytype(uint32_t value);
  private:
  uint32_t _internal_acitivitytype() const;
  void _internal_set_acitivitytype(uint32_t value);
  public:

  // uint32 OpenType = 4;
  void clear_opentype();
  uint32_t opentype() const;
  void set_opentype(uint32_t value);
  private:
  uint32_t _internal_opentype() const;
  void _internal_set_opentype(uint32_t value);
  public:

  // uint32 OpenLevel = 7;
  void clear_openlevel();
  uint32_t openlevel() const;
  void set_openlevel(uint32_t value);
  private:
  uint32_t _internal_openlevel() const;
  void _internal_set_openlevel(uint32_t value);
  public:

  // uint64 OpenServerTime = 6;
  void clear_openservertime();
  uint64_t openservertime() const;
  void set_openservertime(uint64_t value);
  private:
  uint64_t _internal_openservertime() const;
  void _internal_set_openservertime(uint64_t value);
  public:

  // uint32 CreateRoleDay = 8;
  void clear_createroleday();
  uint32_t createroleday() const;
  void set_createroleday(uint32_t value);
  private:
  uint32_t _internal_createroleday() const;
  void _internal_set_createroleday(uint32_t value);
  public:

  // uint32 SortID = 9;
  void clear_sortid();
  uint32_t sortid() const;
  void set_sortid(uint32_t value);
  private:
  uint32_t _internal_sortid() const;
  void _internal_set_sortid(uint32_t value);
  public:

  // uint64 DelayTime = 10;
  void clear_delaytime();
  uint64_t delaytime() const;
  void set_delaytime(uint64_t value);
  private:
  uint64_t _internal_delaytime() const;
  void _internal_set_delaytime(uint64_t value);
  public:

  // @@protoc_insertion_point(class_scope:Resource.ActivityOpenCfg)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< uint64_t > openparam_;
  mutable std::atomic<int> _openparam_cached_byte_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr activityname_;
  uint32_t activityid_;
  uint32_t acitivitytype_;
  uint32_t opentype_;
  uint32_t openlevel_;
  uint64_t openservertime_;
  uint32_t createroleday_;
  uint32_t sortid_;
  uint64_t delaytime_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_ActivityOpenCfg_2eproto;
};
// -------------------------------------------------------------------

class ActivityOpenCfg_ARRAY final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Resource.ActivityOpenCfg_ARRAY) */ {
 public:
  inline ActivityOpenCfg_ARRAY() : ActivityOpenCfg_ARRAY(nullptr) {}
  ~ActivityOpenCfg_ARRAY() override;
  explicit constexpr ActivityOpenCfg_ARRAY(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ActivityOpenCfg_ARRAY(const ActivityOpenCfg_ARRAY& from);
  ActivityOpenCfg_ARRAY(ActivityOpenCfg_ARRAY&& from) noexcept
    : ActivityOpenCfg_ARRAY() {
    *this = ::std::move(from);
  }

  inline ActivityOpenCfg_ARRAY& operator=(const ActivityOpenCfg_ARRAY& from) {
    CopyFrom(from);
    return *this;
  }
  inline ActivityOpenCfg_ARRAY& operator=(ActivityOpenCfg_ARRAY&& from) noexcept {
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

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const ActivityOpenCfg_ARRAY& default_instance() {
    return *internal_default_instance();
  }
  static inline const ActivityOpenCfg_ARRAY* internal_default_instance() {
    return reinterpret_cast<const ActivityOpenCfg_ARRAY*>(
               &_ActivityOpenCfg_ARRAY_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(ActivityOpenCfg_ARRAY& a, ActivityOpenCfg_ARRAY& b) {
    a.Swap(&b);
  }
  inline void Swap(ActivityOpenCfg_ARRAY* other) {
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
  void UnsafeArenaSwap(ActivityOpenCfg_ARRAY* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ActivityOpenCfg_ARRAY* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ActivityOpenCfg_ARRAY>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const ActivityOpenCfg_ARRAY& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const ActivityOpenCfg_ARRAY& from);
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
  void InternalSwap(ActivityOpenCfg_ARRAY* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Resource.ActivityOpenCfg_ARRAY";
  }
  protected:
  explicit ActivityOpenCfg_ARRAY(::PROTOBUF_NAMESPACE_ID::Arena* arena,
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
    kItemsFieldNumber = 1,
  };
  // repeated .Resource.ActivityOpenCfg items = 1;
  int items_size() const;
  private:
  int _internal_items_size() const;
  public:
  void clear_items();
  ::Resource::ActivityOpenCfg* mutable_items(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Resource::ActivityOpenCfg >*
      mutable_items();
  private:
  const ::Resource::ActivityOpenCfg& _internal_items(int index) const;
  ::Resource::ActivityOpenCfg* _internal_add_items();
  public:
  const ::Resource::ActivityOpenCfg& items(int index) const;
  ::Resource::ActivityOpenCfg* add_items();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Resource::ActivityOpenCfg >&
      items() const;

  // @@protoc_insertion_point(class_scope:Resource.ActivityOpenCfg_ARRAY)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Resource::ActivityOpenCfg > items_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_ActivityOpenCfg_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ActivityOpenCfg

// uint32 ActivityID = 1;
inline void ActivityOpenCfg::clear_activityid() {
  activityid_ = 0u;
}
inline uint32_t ActivityOpenCfg::_internal_activityid() const {
  return activityid_;
}
inline uint32_t ActivityOpenCfg::activityid() const {
  // @@protoc_insertion_point(field_get:Resource.ActivityOpenCfg.ActivityID)
  return _internal_activityid();
}
inline void ActivityOpenCfg::_internal_set_activityid(uint32_t value) {
  
  activityid_ = value;
}
inline void ActivityOpenCfg::set_activityid(uint32_t value) {
  _internal_set_activityid(value);
  // @@protoc_insertion_point(field_set:Resource.ActivityOpenCfg.ActivityID)
}

// bytes ActivityName = 2;
inline void ActivityOpenCfg::clear_activityname() {
  activityname_.ClearToEmpty();
}
inline const std::string& ActivityOpenCfg::activityname() const {
  // @@protoc_insertion_point(field_get:Resource.ActivityOpenCfg.ActivityName)
  return _internal_activityname();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void ActivityOpenCfg::set_activityname(ArgT0&& arg0, ArgT... args) {
 
 activityname_.SetBytes(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:Resource.ActivityOpenCfg.ActivityName)
}
inline std::string* ActivityOpenCfg::mutable_activityname() {
  std::string* _s = _internal_mutable_activityname();
  // @@protoc_insertion_point(field_mutable:Resource.ActivityOpenCfg.ActivityName)
  return _s;
}
inline const std::string& ActivityOpenCfg::_internal_activityname() const {
  return activityname_.Get();
}
inline void ActivityOpenCfg::_internal_set_activityname(const std::string& value) {
  
  activityname_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* ActivityOpenCfg::_internal_mutable_activityname() {
  
  return activityname_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* ActivityOpenCfg::release_activityname() {
  // @@protoc_insertion_point(field_release:Resource.ActivityOpenCfg.ActivityName)
  return activityname_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void ActivityOpenCfg::set_allocated_activityname(std::string* activityname) {
  if (activityname != nullptr) {
    
  } else {
    
  }
  activityname_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), activityname,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (activityname_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    activityname_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:Resource.ActivityOpenCfg.ActivityName)
}

// uint32 AcitivityType = 3;
inline void ActivityOpenCfg::clear_acitivitytype() {
  acitivitytype_ = 0u;
}
inline uint32_t ActivityOpenCfg::_internal_acitivitytype() const {
  return acitivitytype_;
}
inline uint32_t ActivityOpenCfg::acitivitytype() const {
  // @@protoc_insertion_point(field_get:Resource.ActivityOpenCfg.AcitivityType)
  return _internal_acitivitytype();
}
inline void ActivityOpenCfg::_internal_set_acitivitytype(uint32_t value) {
  
  acitivitytype_ = value;
}
inline void ActivityOpenCfg::set_acitivitytype(uint32_t value) {
  _internal_set_acitivitytype(value);
  // @@protoc_insertion_point(field_set:Resource.ActivityOpenCfg.AcitivityType)
}

// uint32 OpenType = 4;
inline void ActivityOpenCfg::clear_opentype() {
  opentype_ = 0u;
}
inline uint32_t ActivityOpenCfg::_internal_opentype() const {
  return opentype_;
}
inline uint32_t ActivityOpenCfg::opentype() const {
  // @@protoc_insertion_point(field_get:Resource.ActivityOpenCfg.OpenType)
  return _internal_opentype();
}
inline void ActivityOpenCfg::_internal_set_opentype(uint32_t value) {
  
  opentype_ = value;
}
inline void ActivityOpenCfg::set_opentype(uint32_t value) {
  _internal_set_opentype(value);
  // @@protoc_insertion_point(field_set:Resource.ActivityOpenCfg.OpenType)
}

// repeated uint64 OpenParam = 5;
inline int ActivityOpenCfg::_internal_openparam_size() const {
  return openparam_.size();
}
inline int ActivityOpenCfg::openparam_size() const {
  return _internal_openparam_size();
}
inline void ActivityOpenCfg::clear_openparam() {
  openparam_.Clear();
}
inline uint64_t ActivityOpenCfg::_internal_openparam(int index) const {
  return openparam_.Get(index);
}
inline uint64_t ActivityOpenCfg::openparam(int index) const {
  // @@protoc_insertion_point(field_get:Resource.ActivityOpenCfg.OpenParam)
  return _internal_openparam(index);
}
inline void ActivityOpenCfg::set_openparam(int index, uint64_t value) {
  openparam_.Set(index, value);
  // @@protoc_insertion_point(field_set:Resource.ActivityOpenCfg.OpenParam)
}
inline void ActivityOpenCfg::_internal_add_openparam(uint64_t value) {
  openparam_.Add(value);
}
inline void ActivityOpenCfg::add_openparam(uint64_t value) {
  _internal_add_openparam(value);
  // @@protoc_insertion_point(field_add:Resource.ActivityOpenCfg.OpenParam)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< uint64_t >&
ActivityOpenCfg::_internal_openparam() const {
  return openparam_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< uint64_t >&
ActivityOpenCfg::openparam() const {
  // @@protoc_insertion_point(field_list:Resource.ActivityOpenCfg.OpenParam)
  return _internal_openparam();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< uint64_t >*
ActivityOpenCfg::_internal_mutable_openparam() {
  return &openparam_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< uint64_t >*
ActivityOpenCfg::mutable_openparam() {
  // @@protoc_insertion_point(field_mutable_list:Resource.ActivityOpenCfg.OpenParam)
  return _internal_mutable_openparam();
}

// uint64 OpenServerTime = 6;
inline void ActivityOpenCfg::clear_openservertime() {
  openservertime_ = uint64_t{0u};
}
inline uint64_t ActivityOpenCfg::_internal_openservertime() const {
  return openservertime_;
}
inline uint64_t ActivityOpenCfg::openservertime() const {
  // @@protoc_insertion_point(field_get:Resource.ActivityOpenCfg.OpenServerTime)
  return _internal_openservertime();
}
inline void ActivityOpenCfg::_internal_set_openservertime(uint64_t value) {
  
  openservertime_ = value;
}
inline void ActivityOpenCfg::set_openservertime(uint64_t value) {
  _internal_set_openservertime(value);
  // @@protoc_insertion_point(field_set:Resource.ActivityOpenCfg.OpenServerTime)
}

// uint32 OpenLevel = 7;
inline void ActivityOpenCfg::clear_openlevel() {
  openlevel_ = 0u;
}
inline uint32_t ActivityOpenCfg::_internal_openlevel() const {
  return openlevel_;
}
inline uint32_t ActivityOpenCfg::openlevel() const {
  // @@protoc_insertion_point(field_get:Resource.ActivityOpenCfg.OpenLevel)
  return _internal_openlevel();
}
inline void ActivityOpenCfg::_internal_set_openlevel(uint32_t value) {
  
  openlevel_ = value;
}
inline void ActivityOpenCfg::set_openlevel(uint32_t value) {
  _internal_set_openlevel(value);
  // @@protoc_insertion_point(field_set:Resource.ActivityOpenCfg.OpenLevel)
}

// uint32 CreateRoleDay = 8;
inline void ActivityOpenCfg::clear_createroleday() {
  createroleday_ = 0u;
}
inline uint32_t ActivityOpenCfg::_internal_createroleday() const {
  return createroleday_;
}
inline uint32_t ActivityOpenCfg::createroleday() const {
  // @@protoc_insertion_point(field_get:Resource.ActivityOpenCfg.CreateRoleDay)
  return _internal_createroleday();
}
inline void ActivityOpenCfg::_internal_set_createroleday(uint32_t value) {
  
  createroleday_ = value;
}
inline void ActivityOpenCfg::set_createroleday(uint32_t value) {
  _internal_set_createroleday(value);
  // @@protoc_insertion_point(field_set:Resource.ActivityOpenCfg.CreateRoleDay)
}

// uint32 SortID = 9;
inline void ActivityOpenCfg::clear_sortid() {
  sortid_ = 0u;
}
inline uint32_t ActivityOpenCfg::_internal_sortid() const {
  return sortid_;
}
inline uint32_t ActivityOpenCfg::sortid() const {
  // @@protoc_insertion_point(field_get:Resource.ActivityOpenCfg.SortID)
  return _internal_sortid();
}
inline void ActivityOpenCfg::_internal_set_sortid(uint32_t value) {
  
  sortid_ = value;
}
inline void ActivityOpenCfg::set_sortid(uint32_t value) {
  _internal_set_sortid(value);
  // @@protoc_insertion_point(field_set:Resource.ActivityOpenCfg.SortID)
}

// uint64 DelayTime = 10;
inline void ActivityOpenCfg::clear_delaytime() {
  delaytime_ = uint64_t{0u};
}
inline uint64_t ActivityOpenCfg::_internal_delaytime() const {
  return delaytime_;
}
inline uint64_t ActivityOpenCfg::delaytime() const {
  // @@protoc_insertion_point(field_get:Resource.ActivityOpenCfg.DelayTime)
  return _internal_delaytime();
}
inline void ActivityOpenCfg::_internal_set_delaytime(uint64_t value) {
  
  delaytime_ = value;
}
inline void ActivityOpenCfg::set_delaytime(uint64_t value) {
  _internal_set_delaytime(value);
  // @@protoc_insertion_point(field_set:Resource.ActivityOpenCfg.DelayTime)
}

// -------------------------------------------------------------------

// ActivityOpenCfg_ARRAY

// repeated .Resource.ActivityOpenCfg items = 1;
inline int ActivityOpenCfg_ARRAY::_internal_items_size() const {
  return items_.size();
}
inline int ActivityOpenCfg_ARRAY::items_size() const {
  return _internal_items_size();
}
inline void ActivityOpenCfg_ARRAY::clear_items() {
  items_.Clear();
}
inline ::Resource::ActivityOpenCfg* ActivityOpenCfg_ARRAY::mutable_items(int index) {
  // @@protoc_insertion_point(field_mutable:Resource.ActivityOpenCfg_ARRAY.items)
  return items_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Resource::ActivityOpenCfg >*
ActivityOpenCfg_ARRAY::mutable_items() {
  // @@protoc_insertion_point(field_mutable_list:Resource.ActivityOpenCfg_ARRAY.items)
  return &items_;
}
inline const ::Resource::ActivityOpenCfg& ActivityOpenCfg_ARRAY::_internal_items(int index) const {
  return items_.Get(index);
}
inline const ::Resource::ActivityOpenCfg& ActivityOpenCfg_ARRAY::items(int index) const {
  // @@protoc_insertion_point(field_get:Resource.ActivityOpenCfg_ARRAY.items)
  return _internal_items(index);
}
inline ::Resource::ActivityOpenCfg* ActivityOpenCfg_ARRAY::_internal_add_items() {
  return items_.Add();
}
inline ::Resource::ActivityOpenCfg* ActivityOpenCfg_ARRAY::add_items() {
  ::Resource::ActivityOpenCfg* _add = _internal_add_items();
  // @@protoc_insertion_point(field_add:Resource.ActivityOpenCfg_ARRAY.items)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Resource::ActivityOpenCfg >&
ActivityOpenCfg_ARRAY::items() const {
  // @@protoc_insertion_point(field_list:Resource.ActivityOpenCfg_ARRAY.items)
  return items_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace Resource

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ActivityOpenCfg_2eproto
