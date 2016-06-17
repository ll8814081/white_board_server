// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Login.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "Login.pb.h"

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

const ::google::protobuf::Descriptor* Login_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Login_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_Login_2eproto() {
  protobuf_AddDesc_Login_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "Login.proto");
  GOOGLE_CHECK(file != NULL);
  Login_descriptor_ = file->message_type(0);
  static const int Login_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Login, loginname_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Login, loginpwd_),
  };
  Login_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Login_descriptor_,
      Login::default_instance_,
      Login_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Login, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Login, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Login));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_Login_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Login_descriptor_, &Login::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_Login_2eproto() {
  delete Login::default_instance_;
  delete Login_reflection_;
}

void protobuf_AddDesc_Login_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\013Login.proto\",\n\005Login\022\021\n\tLoginName\030\001 \001("
    "\t\022\020\n\010LoginPwd\030\002 \001(\t", 59);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Login.proto", &protobuf_RegisterTypes);
  Login::default_instance_ = new Login();
  Login::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_Login_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_Login_2eproto {
  StaticDescriptorInitializer_Login_2eproto() {
    protobuf_AddDesc_Login_2eproto();
  }
} static_descriptor_initializer_Login_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int Login::kLoginNameFieldNumber;
const int Login::kLoginPwdFieldNumber;
#endif  // !_MSC_VER

Login::Login()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Login)
}

void Login::InitAsDefaultInstance() {
}

Login::Login(const Login& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Login)
}

void Login::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  loginname_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  loginpwd_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Login::~Login() {
  // @@protoc_insertion_point(destructor:Login)
  SharedDtor();
}

void Login::SharedDtor() {
  if (loginname_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete loginname_;
  }
  if (loginpwd_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete loginpwd_;
  }
  if (this != default_instance_) {
  }
}

void Login::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Login::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Login_descriptor_;
}

const Login& Login::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Login_2eproto();
  return *default_instance_;
}

Login* Login::default_instance_ = NULL;

Login* Login::New() const {
  return new Login;
}

void Login::Clear() {
  if (_has_bits_[0 / 32] & 3) {
    if (has_loginname()) {
      if (loginname_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        loginname_->clear();
      }
    }
    if (has_loginpwd()) {
      if (loginpwd_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        loginpwd_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Login::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Login)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string LoginName = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_loginname()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->loginname().data(), this->loginname().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "loginname");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_LoginPwd;
        break;
      }

      // optional string LoginPwd = 2;
      case 2: {
        if (tag == 18) {
         parse_LoginPwd:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_loginpwd()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->loginpwd().data(), this->loginpwd().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "loginpwd");
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
  // @@protoc_insertion_point(parse_success:Login)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Login)
  return false;
#undef DO_
}

void Login::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Login)
  // optional string LoginName = 1;
  if (has_loginname()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->loginname().data(), this->loginname().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "loginname");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->loginname(), output);
  }

  // optional string LoginPwd = 2;
  if (has_loginpwd()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->loginpwd().data(), this->loginpwd().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "loginpwd");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->loginpwd(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:Login)
}

::google::protobuf::uint8* Login::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:Login)
  // optional string LoginName = 1;
  if (has_loginname()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->loginname().data(), this->loginname().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "loginname");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->loginname(), target);
  }

  // optional string LoginPwd = 2;
  if (has_loginpwd()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->loginpwd().data(), this->loginpwd().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "loginpwd");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->loginpwd(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Login)
  return target;
}

int Login::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string LoginName = 1;
    if (has_loginname()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->loginname());
    }

    // optional string LoginPwd = 2;
    if (has_loginpwd()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->loginpwd());
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

void Login::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Login* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Login*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Login::MergeFrom(const Login& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_loginname()) {
      set_loginname(from.loginname());
    }
    if (from.has_loginpwd()) {
      set_loginpwd(from.loginpwd());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Login::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Login::CopyFrom(const Login& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Login::IsInitialized() const {

  return true;
}

void Login::Swap(Login* other) {
  if (other != this) {
    std::swap(loginname_, other->loginname_);
    std::swap(loginpwd_, other->loginpwd_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Login::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Login_descriptor_;
  metadata.reflection = Login_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)