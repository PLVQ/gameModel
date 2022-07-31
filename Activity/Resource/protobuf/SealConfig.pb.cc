// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SealConfig.proto

#include "SealConfig.pb.h"

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
namespace resource {
constexpr SealConfig::SealConfig(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : sealattr_()
  , sealname_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , sealid_(0){}
struct SealConfigDefaultTypeInternal {
  constexpr SealConfigDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~SealConfigDefaultTypeInternal() {}
  union {
    SealConfig _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT SealConfigDefaultTypeInternal _SealConfig_default_instance_;
constexpr AttrConfig::AttrConfig(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : datatype_(0)
  , addtype_(0)
  , value_(0){}
struct AttrConfigDefaultTypeInternal {
  constexpr AttrConfigDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~AttrConfigDefaultTypeInternal() {}
  union {
    AttrConfig _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT AttrConfigDefaultTypeInternal _AttrConfig_default_instance_;
constexpr SealConfigList::SealConfigList(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : data_(){}
struct SealConfigListDefaultTypeInternal {
  constexpr SealConfigListDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~SealConfigListDefaultTypeInternal() {}
  union {
    SealConfigList _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT SealConfigListDefaultTypeInternal _SealConfigList_default_instance_;
}  // namespace resource
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_SealConfig_2eproto[3];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_SealConfig_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_SealConfig_2eproto = nullptr;

const uint32_t TableStruct_SealConfig_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::resource::SealConfig, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::resource::SealConfig, sealid_),
  PROTOBUF_FIELD_OFFSET(::resource::SealConfig, sealname_),
  PROTOBUF_FIELD_OFFSET(::resource::SealConfig, sealattr_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::resource::AttrConfig, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::resource::AttrConfig, datatype_),
  PROTOBUF_FIELD_OFFSET(::resource::AttrConfig, addtype_),
  PROTOBUF_FIELD_OFFSET(::resource::AttrConfig, value_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::resource::SealConfigList, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::resource::SealConfigList, data_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::resource::SealConfig)},
  { 9, -1, -1, sizeof(::resource::AttrConfig)},
  { 18, -1, -1, sizeof(::resource::SealConfigList)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::resource::_SealConfig_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::resource::_AttrConfig_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::resource::_SealConfigList_default_instance_),
};

const char descriptor_table_protodef_SealConfig_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\020SealConfig.proto\022\010resource\"V\n\nSealConf"
  "ig\022\016\n\006SealID\030\001 \001(\005\022\020\n\010SealName\030\002 \001(\t\022&\n\010"
  "SealAttr\030\003 \003(\0132\024.resource.AttrConfig\">\n\n"
  "AttrConfig\022\020\n\010DataType\030\001 \001(\005\022\017\n\007AddType\030"
  "\002 \001(\005\022\r\n\005Value\030\003 \001(\005\"4\n\016SealConfigList\022\""
  "\n\004data\030\001 \003(\0132\024.resource.SealConfigB\025Z\023./"
  "resource;resourceb\006proto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_SealConfig_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_SealConfig_2eproto = {
  false, false, 265, descriptor_table_protodef_SealConfig_2eproto, "SealConfig.proto", 
  &descriptor_table_SealConfig_2eproto_once, nullptr, 0, 3,
  schemas, file_default_instances, TableStruct_SealConfig_2eproto::offsets,
  file_level_metadata_SealConfig_2eproto, file_level_enum_descriptors_SealConfig_2eproto, file_level_service_descriptors_SealConfig_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_SealConfig_2eproto_getter() {
  return &descriptor_table_SealConfig_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_SealConfig_2eproto(&descriptor_table_SealConfig_2eproto);
namespace resource {

// ===================================================================

class SealConfig::_Internal {
 public:
};

SealConfig::SealConfig(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned),
  sealattr_(arena) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:resource.SealConfig)
}
SealConfig::SealConfig(const SealConfig& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      sealattr_(from.sealattr_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  sealname_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    sealname_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_sealname().empty()) {
    sealname_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_sealname(), 
      GetArenaForAllocation());
  }
  sealid_ = from.sealid_;
  // @@protoc_insertion_point(copy_constructor:resource.SealConfig)
}

inline void SealConfig::SharedCtor() {
sealname_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  sealname_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
sealid_ = 0;
}

SealConfig::~SealConfig() {
  // @@protoc_insertion_point(destructor:resource.SealConfig)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void SealConfig::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  sealname_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void SealConfig::ArenaDtor(void* object) {
  SealConfig* _this = reinterpret_cast< SealConfig* >(object);
  (void)_this;
}
void SealConfig::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void SealConfig::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void SealConfig::Clear() {
// @@protoc_insertion_point(message_clear_start:resource.SealConfig)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  sealattr_.Clear();
  sealname_.ClearToEmpty();
  sealid_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SealConfig::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int32 SealID = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          sealid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string SealName = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_sealname();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "resource.SealConfig.SealName"));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // repeated .resource.AttrConfig SealAttr = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_sealattr(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<26>(ptr));
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
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* SealConfig::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:resource.SealConfig)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 SealID = 1;
  if (this->_internal_sealid() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_sealid(), target);
  }

  // string SealName = 2;
  if (!this->_internal_sealname().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_sealname().data(), static_cast<int>(this->_internal_sealname().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "resource.SealConfig.SealName");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_sealname(), target);
  }

  // repeated .resource.AttrConfig SealAttr = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_sealattr_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(3, this->_internal_sealattr(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:resource.SealConfig)
  return target;
}

size_t SealConfig::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:resource.SealConfig)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .resource.AttrConfig SealAttr = 3;
  total_size += 1UL * this->_internal_sealattr_size();
  for (const auto& msg : this->sealattr_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // string SealName = 2;
  if (!this->_internal_sealname().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_sealname());
  }

  // int32 SealID = 1;
  if (this->_internal_sealid() != 0) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32SizePlusOne(this->_internal_sealid());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData SealConfig::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    SealConfig::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*SealConfig::GetClassData() const { return &_class_data_; }

void SealConfig::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<SealConfig *>(to)->MergeFrom(
      static_cast<const SealConfig &>(from));
}


void SealConfig::MergeFrom(const SealConfig& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:resource.SealConfig)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  sealattr_.MergeFrom(from.sealattr_);
  if (!from._internal_sealname().empty()) {
    _internal_set_sealname(from._internal_sealname());
  }
  if (from._internal_sealid() != 0) {
    _internal_set_sealid(from._internal_sealid());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void SealConfig::CopyFrom(const SealConfig& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:resource.SealConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SealConfig::IsInitialized() const {
  return true;
}

void SealConfig::InternalSwap(SealConfig* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  sealattr_.InternalSwap(&other->sealattr_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &sealname_, lhs_arena,
      &other->sealname_, rhs_arena
  );
  swap(sealid_, other->sealid_);
}

::PROTOBUF_NAMESPACE_ID::Metadata SealConfig::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_SealConfig_2eproto_getter, &descriptor_table_SealConfig_2eproto_once,
      file_level_metadata_SealConfig_2eproto[0]);
}

// ===================================================================

class AttrConfig::_Internal {
 public:
};

AttrConfig::AttrConfig(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:resource.AttrConfig)
}
AttrConfig::AttrConfig(const AttrConfig& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&datatype_, &from.datatype_,
    static_cast<size_t>(reinterpret_cast<char*>(&value_) -
    reinterpret_cast<char*>(&datatype_)) + sizeof(value_));
  // @@protoc_insertion_point(copy_constructor:resource.AttrConfig)
}

inline void AttrConfig::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&datatype_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&value_) -
    reinterpret_cast<char*>(&datatype_)) + sizeof(value_));
}

AttrConfig::~AttrConfig() {
  // @@protoc_insertion_point(destructor:resource.AttrConfig)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void AttrConfig::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void AttrConfig::ArenaDtor(void* object) {
  AttrConfig* _this = reinterpret_cast< AttrConfig* >(object);
  (void)_this;
}
void AttrConfig::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void AttrConfig::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void AttrConfig::Clear() {
// @@protoc_insertion_point(message_clear_start:resource.AttrConfig)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&datatype_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&value_) -
      reinterpret_cast<char*>(&datatype_)) + sizeof(value_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* AttrConfig::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int32 DataType = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          datatype_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 AddType = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          addtype_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 Value = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          value_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
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
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* AttrConfig::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:resource.AttrConfig)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 DataType = 1;
  if (this->_internal_datatype() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_datatype(), target);
  }

  // int32 AddType = 2;
  if (this->_internal_addtype() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(2, this->_internal_addtype(), target);
  }

  // int32 Value = 3;
  if (this->_internal_value() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(3, this->_internal_value(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:resource.AttrConfig)
  return target;
}

size_t AttrConfig::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:resource.AttrConfig)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int32 DataType = 1;
  if (this->_internal_datatype() != 0) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32SizePlusOne(this->_internal_datatype());
  }

  // int32 AddType = 2;
  if (this->_internal_addtype() != 0) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32SizePlusOne(this->_internal_addtype());
  }

  // int32 Value = 3;
  if (this->_internal_value() != 0) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32SizePlusOne(this->_internal_value());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData AttrConfig::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    AttrConfig::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*AttrConfig::GetClassData() const { return &_class_data_; }

void AttrConfig::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<AttrConfig *>(to)->MergeFrom(
      static_cast<const AttrConfig &>(from));
}


void AttrConfig::MergeFrom(const AttrConfig& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:resource.AttrConfig)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_datatype() != 0) {
    _internal_set_datatype(from._internal_datatype());
  }
  if (from._internal_addtype() != 0) {
    _internal_set_addtype(from._internal_addtype());
  }
  if (from._internal_value() != 0) {
    _internal_set_value(from._internal_value());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void AttrConfig::CopyFrom(const AttrConfig& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:resource.AttrConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AttrConfig::IsInitialized() const {
  return true;
}

void AttrConfig::InternalSwap(AttrConfig* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(AttrConfig, value_)
      + sizeof(AttrConfig::value_)
      - PROTOBUF_FIELD_OFFSET(AttrConfig, datatype_)>(
          reinterpret_cast<char*>(&datatype_),
          reinterpret_cast<char*>(&other->datatype_));
}

::PROTOBUF_NAMESPACE_ID::Metadata AttrConfig::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_SealConfig_2eproto_getter, &descriptor_table_SealConfig_2eproto_once,
      file_level_metadata_SealConfig_2eproto[1]);
}

// ===================================================================

class SealConfigList::_Internal {
 public:
};

SealConfigList::SealConfigList(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned),
  data_(arena) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:resource.SealConfigList)
}
SealConfigList::SealConfigList(const SealConfigList& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      data_(from.data_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:resource.SealConfigList)
}

inline void SealConfigList::SharedCtor() {
}

SealConfigList::~SealConfigList() {
  // @@protoc_insertion_point(destructor:resource.SealConfigList)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void SealConfigList::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void SealConfigList::ArenaDtor(void* object) {
  SealConfigList* _this = reinterpret_cast< SealConfigList* >(object);
  (void)_this;
}
void SealConfigList::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void SealConfigList::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void SealConfigList::Clear() {
// @@protoc_insertion_point(message_clear_start:resource.SealConfigList)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  data_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SealConfigList::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .resource.SealConfig data = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_data(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
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
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* SealConfigList::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:resource.SealConfigList)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .resource.SealConfig data = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_data_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, this->_internal_data(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:resource.SealConfigList)
  return target;
}

size_t SealConfigList::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:resource.SealConfigList)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .resource.SealConfig data = 1;
  total_size += 1UL * this->_internal_data_size();
  for (const auto& msg : this->data_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData SealConfigList::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    SealConfigList::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*SealConfigList::GetClassData() const { return &_class_data_; }

void SealConfigList::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<SealConfigList *>(to)->MergeFrom(
      static_cast<const SealConfigList &>(from));
}


void SealConfigList::MergeFrom(const SealConfigList& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:resource.SealConfigList)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  data_.MergeFrom(from.data_);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void SealConfigList::CopyFrom(const SealConfigList& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:resource.SealConfigList)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SealConfigList::IsInitialized() const {
  return true;
}

void SealConfigList::InternalSwap(SealConfigList* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  data_.InternalSwap(&other->data_);
}

::PROTOBUF_NAMESPACE_ID::Metadata SealConfigList::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_SealConfig_2eproto_getter, &descriptor_table_SealConfig_2eproto_once,
      file_level_metadata_SealConfig_2eproto[2]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace resource
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::resource::SealConfig* Arena::CreateMaybeMessage< ::resource::SealConfig >(Arena* arena) {
  return Arena::CreateMessageInternal< ::resource::SealConfig >(arena);
}
template<> PROTOBUF_NOINLINE ::resource::AttrConfig* Arena::CreateMaybeMessage< ::resource::AttrConfig >(Arena* arena) {
  return Arena::CreateMessageInternal< ::resource::AttrConfig >(arena);
}
template<> PROTOBUF_NOINLINE ::resource::SealConfigList* Arena::CreateMaybeMessage< ::resource::SealConfigList >(Arena* arena) {
  return Arena::CreateMessageInternal< ::resource::SealConfigList >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>