// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: WhiteBoardMessage.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "WhiteBoardMessage.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* WhiteBoardMessage_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  WhiteBoardMessage_reflection_ = NULL;
const ::google::protobuf::Descriptor* WhiteBoardMessageList_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  WhiteBoardMessageList_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_WhiteBoardMessage_2eproto() {
  protobuf_AddDesc_WhiteBoardMessage_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "WhiteBoardMessage.proto");
  GOOGLE_CHECK(file != NULL);
  WhiteBoardMessage_descriptor_ = file->message_type(0);
  static const int WhiteBoardMessage_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WhiteBoardMessage, shapeid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WhiteBoardMessage, shapetype_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WhiteBoardMessage, shapedata_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WhiteBoardMessage, shapeproperty_),
  };
  WhiteBoardMessage_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      WhiteBoardMessage_descriptor_,
      WhiteBoardMessage::default_instance_,
      WhiteBoardMessage_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WhiteBoardMessage, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WhiteBoardMessage, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(WhiteBoardMessage));
  WhiteBoardMessageList_descriptor_ = file->message_type(1);
  static const int WhiteBoardMessageList_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WhiteBoardMessageList, msgid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WhiteBoardMessageList, shapeobject_),
  };
  WhiteBoardMessageList_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      WhiteBoardMessageList_descriptor_,
      WhiteBoardMessageList::default_instance_,
      WhiteBoardMessageList_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WhiteBoardMessageList, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WhiteBoardMessageList, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(WhiteBoardMessageList));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_WhiteBoardMessage_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    WhiteBoardMessage_descriptor_, &WhiteBoardMessage::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    WhiteBoardMessageList_descriptor_, &WhiteBoardMessageList::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_WhiteBoardMessage_2eproto() {
  delete WhiteBoardMessage::default_instance_;
  delete WhiteBoardMessage_reflection_;
  delete WhiteBoardMessageList::default_instance_;
  delete WhiteBoardMessageList_reflection_;
}

void protobuf_AddDesc_WhiteBoardMessage_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\027WhiteBoardMessage.proto\"a\n\021WhiteBoardM"
    "essage\022\017\n\007shapeID\030\001 \001(\r\022\021\n\tshapeType\030\002 \001"
    "(\t\022\021\n\tshapeData\030\003 \001(\014\022\025\n\rshapeProperty\030\004"
    " \001(\014\"O\n\025WhiteBoardMessageList\022\r\n\005msgid\030\001"
    " \001(\t\022\'\n\013ShapeObject\030\002 \003(\0132\022.WhiteBoardMe"
    "ssage", 205);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "WhiteBoardMessage.proto", &protobuf_RegisterTypes);
  WhiteBoardMessage::default_instance_ = new WhiteBoardMessage();
  WhiteBoardMessageList::default_instance_ = new WhiteBoardMessageList();
  WhiteBoardMessage::default_instance_->InitAsDefaultInstance();
  WhiteBoardMessageList::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_WhiteBoardMessage_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_WhiteBoardMessage_2eproto {
  StaticDescriptorInitializer_WhiteBoardMessage_2eproto() {
    protobuf_AddDesc_WhiteBoardMessage_2eproto();
  }
} static_descriptor_initializer_WhiteBoardMessage_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int WhiteBoardMessage::kShapeIDFieldNumber;
const int WhiteBoardMessage::kShapeTypeFieldNumber;
const int WhiteBoardMessage::kShapeDataFieldNumber;
const int WhiteBoardMessage::kShapePropertyFieldNumber;
#endif  // !_MSC_VER

WhiteBoardMessage::WhiteBoardMessage()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:WhiteBoardMessage)
}

void WhiteBoardMessage::InitAsDefaultInstance() {
}

WhiteBoardMessage::WhiteBoardMessage(const WhiteBoardMessage& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:WhiteBoardMessage)
}

void WhiteBoardMessage::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  shapeid_ = 0u;
  shapetype_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  shapedata_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  shapeproperty_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

WhiteBoardMessage::~WhiteBoardMessage() {
  // @@protoc_insertion_point(destructor:WhiteBoardMessage)
  SharedDtor();
}

void WhiteBoardMessage::SharedDtor() {
  if (shapetype_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete shapetype_;
  }
  if (shapedata_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete shapedata_;
  }
  if (shapeproperty_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete shapeproperty_;
  }
  if (this != default_instance_) {
  }
}

void WhiteBoardMessage::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* WhiteBoardMessage::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return WhiteBoardMessage_descriptor_;
}

const WhiteBoardMessage& WhiteBoardMessage::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_WhiteBoardMessage_2eproto();
  return *default_instance_;
}

WhiteBoardMessage* WhiteBoardMessage::default_instance_ = NULL;

WhiteBoardMessage* WhiteBoardMessage::New() const {
  return new WhiteBoardMessage;
}

void WhiteBoardMessage::Clear() {
  if (_has_bits_[0 / 32] & 15) {
    shapeid_ = 0u;
    if (has_shapetype()) {
      if (shapetype_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        shapetype_->clear();
      }
    }
    if (has_shapedata()) {
      if (shapedata_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        shapedata_->clear();
      }
    }
    if (has_shapeproperty()) {
      if (shapeproperty_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        shapeproperty_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool WhiteBoardMessage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:WhiteBoardMessage)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint32 shapeID = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &shapeid_)));
          set_has_shapeid();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_shapeType;
        break;
      }

      // optional string shapeType = 2;
      case 2: {
        if (tag == 18) {
         parse_shapeType:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_shapetype()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->shapetype().data(), this->shapetype().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "shapetype");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_shapeData;
        break;
      }

      // optional bytes shapeData = 3;
      case 3: {
        if (tag == 26) {
         parse_shapeData:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_shapedata()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_shapeProperty;
        break;
      }

      // optional bytes shapeProperty = 4;
      case 4: {
        if (tag == 34) {
         parse_shapeProperty:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_shapeproperty()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:WhiteBoardMessage)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:WhiteBoardMessage)
  return false;
#undef DO_
}

void WhiteBoardMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:WhiteBoardMessage)
  // optional uint32 shapeID = 1;
  if (has_shapeid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->shapeid(), output);
  }

  // optional string shapeType = 2;
  if (has_shapetype()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->shapetype().data(), this->shapetype().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "shapetype");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->shapetype(), output);
  }

  // optional bytes shapeData = 3;
  if (has_shapedata()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      3, this->shapedata(), output);
  }

  // optional bytes shapeProperty = 4;
  if (has_shapeproperty()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      4, this->shapeproperty(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:WhiteBoardMessage)
}

::google::protobuf::uint8* WhiteBoardMessage::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:WhiteBoardMessage)
  // optional uint32 shapeID = 1;
  if (has_shapeid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->shapeid(), target);
  }

  // optional string shapeType = 2;
  if (has_shapetype()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->shapetype().data(), this->shapetype().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "shapetype");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->shapetype(), target);
  }

  // optional bytes shapeData = 3;
  if (has_shapedata()) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        3, this->shapedata(), target);
  }

  // optional bytes shapeProperty = 4;
  if (has_shapeproperty()) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        4, this->shapeproperty(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:WhiteBoardMessage)
  return target;
}

int WhiteBoardMessage::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional uint32 shapeID = 1;
    if (has_shapeid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->shapeid());
    }

    // optional string shapeType = 2;
    if (has_shapetype()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->shapetype());
    }

    // optional bytes shapeData = 3;
    if (has_shapedata()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->shapedata());
    }

    // optional bytes shapeProperty = 4;
    if (has_shapeproperty()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->shapeproperty());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void WhiteBoardMessage::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const WhiteBoardMessage* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const WhiteBoardMessage*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void WhiteBoardMessage::MergeFrom(const WhiteBoardMessage& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_shapeid()) {
      set_shapeid(from.shapeid());
    }
    if (from.has_shapetype()) {
      set_shapetype(from.shapetype());
    }
    if (from.has_shapedata()) {
      set_shapedata(from.shapedata());
    }
    if (from.has_shapeproperty()) {
      set_shapeproperty(from.shapeproperty());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void WhiteBoardMessage::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void WhiteBoardMessage::CopyFrom(const WhiteBoardMessage& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool WhiteBoardMessage::IsInitialized() const {

  return true;
}

void WhiteBoardMessage::Swap(WhiteBoardMessage* other) {
  if (other != this) {
    std::swap(shapeid_, other->shapeid_);
    std::swap(shapetype_, other->shapetype_);
    std::swap(shapedata_, other->shapedata_);
    std::swap(shapeproperty_, other->shapeproperty_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata WhiteBoardMessage::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = WhiteBoardMessage_descriptor_;
  metadata.reflection = WhiteBoardMessage_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int WhiteBoardMessageList::kMsgidFieldNumber;
const int WhiteBoardMessageList::kShapeObjectFieldNumber;
#endif  // !_MSC_VER

WhiteBoardMessageList::WhiteBoardMessageList()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:WhiteBoardMessageList)
}

void WhiteBoardMessageList::InitAsDefaultInstance() {
}

WhiteBoardMessageList::WhiteBoardMessageList(const WhiteBoardMessageList& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:WhiteBoardMessageList)
}

void WhiteBoardMessageList::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  msgid_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

WhiteBoardMessageList::~WhiteBoardMessageList() {
  // @@protoc_insertion_point(destructor:WhiteBoardMessageList)
  SharedDtor();
}

void WhiteBoardMessageList::SharedDtor() {
  if (msgid_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete msgid_;
  }
  if (this != default_instance_) {
  }
}

void WhiteBoardMessageList::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* WhiteBoardMessageList::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return WhiteBoardMessageList_descriptor_;
}

const WhiteBoardMessageList& WhiteBoardMessageList::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_WhiteBoardMessage_2eproto();
  return *default_instance_;
}

WhiteBoardMessageList* WhiteBoardMessageList::default_instance_ = NULL;

WhiteBoardMessageList* WhiteBoardMessageList::New() const {
  return new WhiteBoardMessageList;
}

void WhiteBoardMessageList::Clear() {
  if (has_msgid()) {
    if (msgid_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
      msgid_->clear();
    }
  }
  shapeobject_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool WhiteBoardMessageList::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:WhiteBoardMessageList)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string msgid = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_msgid()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->msgid().data(), this->msgid().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "msgid");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_ShapeObject;
        break;
      }

      // repeated .WhiteBoardMessage ShapeObject = 2;
      case 2: {
        if (tag == 18) {
         parse_ShapeObject:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_shapeobject()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_ShapeObject;
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:WhiteBoardMessageList)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:WhiteBoardMessageList)
  return false;
#undef DO_
}

void WhiteBoardMessageList::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:WhiteBoardMessageList)
  // optional string msgid = 1;
  if (has_msgid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->msgid().data(), this->msgid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "msgid");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->msgid(), output);
  }

  // repeated .WhiteBoardMessage ShapeObject = 2;
  for (int i = 0; i < this->shapeobject_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->shapeobject(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:WhiteBoardMessageList)
}

::google::protobuf::uint8* WhiteBoardMessageList::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:WhiteBoardMessageList)
  // optional string msgid = 1;
  if (has_msgid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->msgid().data(), this->msgid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "msgid");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->msgid(), target);
  }

  // repeated .WhiteBoardMessage ShapeObject = 2;
  for (int i = 0; i < this->shapeobject_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->shapeobject(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:WhiteBoardMessageList)
  return target;
}

int WhiteBoardMessageList::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string msgid = 1;
    if (has_msgid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->msgid());
    }

  }
  // repeated .WhiteBoardMessage ShapeObject = 2;
  total_size += 1 * this->shapeobject_size();
  for (int i = 0; i < this->shapeobject_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->shapeobject(i));
  }

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void WhiteBoardMessageList::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const WhiteBoardMessageList* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const WhiteBoardMessageList*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void WhiteBoardMessageList::MergeFrom(const WhiteBoardMessageList& from) {
  GOOGLE_CHECK_NE(&from, this);
  shapeobject_.MergeFrom(from.shapeobject_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_msgid()) {
      set_msgid(from.msgid());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void WhiteBoardMessageList::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void WhiteBoardMessageList::CopyFrom(const WhiteBoardMessageList& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool WhiteBoardMessageList::IsInitialized() const {

  return true;
}

void WhiteBoardMessageList::Swap(WhiteBoardMessageList* other) {
  if (other != this) {
    std::swap(msgid_, other->msgid_);
    shapeobject_.Swap(&other->shapeobject_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata WhiteBoardMessageList::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = WhiteBoardMessageList_descriptor_;
  metadata.reflection = WhiteBoardMessageList_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
