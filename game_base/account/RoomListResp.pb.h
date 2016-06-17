// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: RoomListResp.proto

#ifndef PROTOBUF_RoomListResp_2eproto__INCLUDED
#define PROTOBUF_RoomListResp_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_RoomListResp_2eproto();
void protobuf_AssignDesc_RoomListResp_2eproto();
void protobuf_ShutdownFile_RoomListResp_2eproto();

class RoomListResp;

// ===================================================================

class RoomListResp : public ::google::protobuf::Message {
 public:
  RoomListResp();
  virtual ~RoomListResp();

  RoomListResp(const RoomListResp& from);

  inline RoomListResp& operator=(const RoomListResp& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const RoomListResp& default_instance();

  void Swap(RoomListResp* other);

  // implements Message ----------------------------------------------

  RoomListResp* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RoomListResp& from);
  void MergeFrom(const RoomListResp& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated string room_list = 1;
  inline int room_list_size() const;
  inline void clear_room_list();
  static const int kRoomListFieldNumber = 1;
  inline const ::std::string& room_list(int index) const;
  inline ::std::string* mutable_room_list(int index);
  inline void set_room_list(int index, const ::std::string& value);
  inline void set_room_list(int index, const char* value);
  inline void set_room_list(int index, const char* value, size_t size);
  inline ::std::string* add_room_list();
  inline void add_room_list(const ::std::string& value);
  inline void add_room_list(const char* value);
  inline void add_room_list(const char* value, size_t size);
  inline const ::google::protobuf::RepeatedPtrField< ::std::string>& room_list() const;
  inline ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_room_list();

  // @@protoc_insertion_point(class_scope:RoomListResp)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::std::string> room_list_;
  friend void  protobuf_AddDesc_RoomListResp_2eproto();
  friend void protobuf_AssignDesc_RoomListResp_2eproto();
  friend void protobuf_ShutdownFile_RoomListResp_2eproto();

  void InitAsDefaultInstance();
  static RoomListResp* default_instance_;
};
// ===================================================================


// ===================================================================

// RoomListResp

// repeated string room_list = 1;
inline int RoomListResp::room_list_size() const {
  return room_list_.size();
}
inline void RoomListResp::clear_room_list() {
  room_list_.Clear();
}
inline const ::std::string& RoomListResp::room_list(int index) const {
  // @@protoc_insertion_point(field_get:RoomListResp.room_list)
  return room_list_.Get(index);
}
inline ::std::string* RoomListResp::mutable_room_list(int index) {
  // @@protoc_insertion_point(field_mutable:RoomListResp.room_list)
  return room_list_.Mutable(index);
}
inline void RoomListResp::set_room_list(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:RoomListResp.room_list)
  room_list_.Mutable(index)->assign(value);
}
inline void RoomListResp::set_room_list(int index, const char* value) {
  room_list_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:RoomListResp.room_list)
}
inline void RoomListResp::set_room_list(int index, const char* value, size_t size) {
  room_list_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:RoomListResp.room_list)
}
inline ::std::string* RoomListResp::add_room_list() {
  return room_list_.Add();
}
inline void RoomListResp::add_room_list(const ::std::string& value) {
  room_list_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:RoomListResp.room_list)
}
inline void RoomListResp::add_room_list(const char* value) {
  room_list_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:RoomListResp.room_list)
}
inline void RoomListResp::add_room_list(const char* value, size_t size) {
  room_list_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:RoomListResp.room_list)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
RoomListResp::room_list() const {
  // @@protoc_insertion_point(field_list:RoomListResp.room_list)
  return room_list_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
RoomListResp::mutable_room_list() {
  // @@protoc_insertion_point(field_mutable_list:RoomListResp.room_list)
  return &room_list_;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_RoomListResp_2eproto__INCLUDED