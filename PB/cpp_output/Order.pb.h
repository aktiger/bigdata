// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Order.proto

#ifndef PROTOBUF_Order_2eproto__INCLUDED
#define PROTOBUF_Order_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
// @@protoc_insertion_point(includes)

namespace xquant {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_Order_2eproto();
void protobuf_AssignDesc_Order_2eproto();
void protobuf_ShutdownFile_Order_2eproto();

class Order;

// ===================================================================

class Order : public ::google::protobuf::Message {
 public:
  Order();
  virtual ~Order();
  
  Order(const Order& from);
  
  inline Order& operator=(const Order& from) {
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
  static const Order& default_instance();
  
  void Swap(Order* other);
  
  // implements Message ----------------------------------------------
  
  Order* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Order& from);
  void MergeFrom(const Order& from);
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
  
  // required int32 action = 1;
  inline bool has_action() const;
  inline void clear_action();
  static const int kActionFieldNumber = 1;
  inline ::google::protobuf::int32 action() const;
  inline void set_action(::google::protobuf::int32 value);
  
  // required string serialNo = 2;
  inline bool has_serialno() const;
  inline void clear_serialno();
  static const int kSerialNoFieldNumber = 2;
  inline const ::std::string& serialno() const;
  inline void set_serialno(const ::std::string& value);
  inline void set_serialno(const char* value);
  inline void set_serialno(const char* value, size_t size);
  inline ::std::string* mutable_serialno();
  inline ::std::string* release_serialno();
  
  // required string version = 3;
  inline bool has_version() const;
  inline void clear_version();
  static const int kVersionFieldNumber = 3;
  inline const ::std::string& version() const;
  inline void set_version(const ::std::string& value);
  inline void set_version(const char* value);
  inline void set_version(const char* value, size_t size);
  inline ::std::string* mutable_version();
  inline ::std::string* release_version();
  
  // optional string operator = 4;
  inline bool has_operator_() const;
  inline void clear_operator_();
  static const int kOperatorFieldNumber = 4;
  inline const ::std::string& operator_() const;
  inline void set_operator_(const ::std::string& value);
  inline void set_operator_(const char* value);
  inline void set_operator_(const char* value, size_t size);
  inline ::std::string* mutable_operator_();
  inline ::std::string* release_operator_();
  
  // optional string code = 5;
  inline bool has_code() const;
  inline void clear_code();
  static const int kCodeFieldNumber = 5;
  inline const ::std::string& code() const;
  inline void set_code(const ::std::string& value);
  inline void set_code(const char* value);
  inline void set_code(const char* value, size_t size);
  inline ::std::string* mutable_code();
  inline ::std::string* release_code();
  
  // optional string name = 6;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 6;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  
  // optional string price = 7;
  inline bool has_price() const;
  inline void clear_price();
  static const int kPriceFieldNumber = 7;
  inline const ::std::string& price() const;
  inline void set_price(const ::std::string& value);
  inline void set_price(const char* value);
  inline void set_price(const char* value, size_t size);
  inline ::std::string* mutable_price();
  inline ::std::string* release_price();
  
  // optional string amount = 8;
  inline bool has_amount() const;
  inline void clear_amount();
  static const int kAmountFieldNumber = 8;
  inline const ::std::string& amount() const;
  inline void set_amount(const ::std::string& value);
  inline void set_amount(const char* value);
  inline void set_amount(const char* value, size_t size);
  inline ::std::string* mutable_amount();
  inline ::std::string* release_amount();
  
  // @@protoc_insertion_point(class_scope:xquant.Order)
 private:
  inline void set_has_action();
  inline void clear_has_action();
  inline void set_has_serialno();
  inline void clear_has_serialno();
  inline void set_has_version();
  inline void clear_has_version();
  inline void set_has_operator_();
  inline void clear_has_operator_();
  inline void set_has_code();
  inline void clear_has_code();
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_price();
  inline void clear_has_price();
  inline void set_has_amount();
  inline void clear_has_amount();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* serialno_;
  ::std::string* version_;
  ::std::string* operator__;
  ::std::string* code_;
  ::std::string* name_;
  ::std::string* price_;
  ::std::string* amount_;
  ::google::protobuf::int32 action_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(8 + 31) / 32];
  
  friend void  protobuf_AddDesc_Order_2eproto();
  friend void protobuf_AssignDesc_Order_2eproto();
  friend void protobuf_ShutdownFile_Order_2eproto();
  
  void InitAsDefaultInstance();
  static Order* default_instance_;
};
// ===================================================================


// ===================================================================

// Order

// required int32 action = 1;
inline bool Order::has_action() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Order::set_has_action() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Order::clear_has_action() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Order::clear_action() {
  action_ = 0;
  clear_has_action();
}
inline ::google::protobuf::int32 Order::action() const {
  return action_;
}
inline void Order::set_action(::google::protobuf::int32 value) {
  set_has_action();
  action_ = value;
}

// required string serialNo = 2;
inline bool Order::has_serialno() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Order::set_has_serialno() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Order::clear_has_serialno() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Order::clear_serialno() {
  if (serialno_ != &::google::protobuf::internal::kEmptyString) {
    serialno_->clear();
  }
  clear_has_serialno();
}
inline const ::std::string& Order::serialno() const {
  return *serialno_;
}
inline void Order::set_serialno(const ::std::string& value) {
  set_has_serialno();
  if (serialno_ == &::google::protobuf::internal::kEmptyString) {
    serialno_ = new ::std::string;
  }
  serialno_->assign(value);
}
inline void Order::set_serialno(const char* value) {
  set_has_serialno();
  if (serialno_ == &::google::protobuf::internal::kEmptyString) {
    serialno_ = new ::std::string;
  }
  serialno_->assign(value);
}
inline void Order::set_serialno(const char* value, size_t size) {
  set_has_serialno();
  if (serialno_ == &::google::protobuf::internal::kEmptyString) {
    serialno_ = new ::std::string;
  }
  serialno_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Order::mutable_serialno() {
  set_has_serialno();
  if (serialno_ == &::google::protobuf::internal::kEmptyString) {
    serialno_ = new ::std::string;
  }
  return serialno_;
}
inline ::std::string* Order::release_serialno() {
  clear_has_serialno();
  if (serialno_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = serialno_;
    serialno_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// required string version = 3;
inline bool Order::has_version() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Order::set_has_version() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Order::clear_has_version() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Order::clear_version() {
  if (version_ != &::google::protobuf::internal::kEmptyString) {
    version_->clear();
  }
  clear_has_version();
}
inline const ::std::string& Order::version() const {
  return *version_;
}
inline void Order::set_version(const ::std::string& value) {
  set_has_version();
  if (version_ == &::google::protobuf::internal::kEmptyString) {
    version_ = new ::std::string;
  }
  version_->assign(value);
}
inline void Order::set_version(const char* value) {
  set_has_version();
  if (version_ == &::google::protobuf::internal::kEmptyString) {
    version_ = new ::std::string;
  }
  version_->assign(value);
}
inline void Order::set_version(const char* value, size_t size) {
  set_has_version();
  if (version_ == &::google::protobuf::internal::kEmptyString) {
    version_ = new ::std::string;
  }
  version_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Order::mutable_version() {
  set_has_version();
  if (version_ == &::google::protobuf::internal::kEmptyString) {
    version_ = new ::std::string;
  }
  return version_;
}
inline ::std::string* Order::release_version() {
  clear_has_version();
  if (version_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = version_;
    version_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional string operator = 4;
inline bool Order::has_operator_() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Order::set_has_operator_() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Order::clear_has_operator_() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Order::clear_operator_() {
  if (operator__ != &::google::protobuf::internal::kEmptyString) {
    operator__->clear();
  }
  clear_has_operator_();
}
inline const ::std::string& Order::operator_() const {
  return *operator__;
}
inline void Order::set_operator_(const ::std::string& value) {
  set_has_operator_();
  if (operator__ == &::google::protobuf::internal::kEmptyString) {
    operator__ = new ::std::string;
  }
  operator__->assign(value);
}
inline void Order::set_operator_(const char* value) {
  set_has_operator_();
  if (operator__ == &::google::protobuf::internal::kEmptyString) {
    operator__ = new ::std::string;
  }
  operator__->assign(value);
}
inline void Order::set_operator_(const char* value, size_t size) {
  set_has_operator_();
  if (operator__ == &::google::protobuf::internal::kEmptyString) {
    operator__ = new ::std::string;
  }
  operator__->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Order::mutable_operator_() {
  set_has_operator_();
  if (operator__ == &::google::protobuf::internal::kEmptyString) {
    operator__ = new ::std::string;
  }
  return operator__;
}
inline ::std::string* Order::release_operator_() {
  clear_has_operator_();
  if (operator__ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = operator__;
    operator__ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional string code = 5;
inline bool Order::has_code() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Order::set_has_code() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Order::clear_has_code() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Order::clear_code() {
  if (code_ != &::google::protobuf::internal::kEmptyString) {
    code_->clear();
  }
  clear_has_code();
}
inline const ::std::string& Order::code() const {
  return *code_;
}
inline void Order::set_code(const ::std::string& value) {
  set_has_code();
  if (code_ == &::google::protobuf::internal::kEmptyString) {
    code_ = new ::std::string;
  }
  code_->assign(value);
}
inline void Order::set_code(const char* value) {
  set_has_code();
  if (code_ == &::google::protobuf::internal::kEmptyString) {
    code_ = new ::std::string;
  }
  code_->assign(value);
}
inline void Order::set_code(const char* value, size_t size) {
  set_has_code();
  if (code_ == &::google::protobuf::internal::kEmptyString) {
    code_ = new ::std::string;
  }
  code_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Order::mutable_code() {
  set_has_code();
  if (code_ == &::google::protobuf::internal::kEmptyString) {
    code_ = new ::std::string;
  }
  return code_;
}
inline ::std::string* Order::release_code() {
  clear_has_code();
  if (code_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = code_;
    code_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional string name = 6;
inline bool Order::has_name() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void Order::set_has_name() {
  _has_bits_[0] |= 0x00000020u;
}
inline void Order::clear_has_name() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void Order::clear_name() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& Order::name() const {
  return *name_;
}
inline void Order::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void Order::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void Order::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Order::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  return name_;
}
inline ::std::string* Order::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional string price = 7;
inline bool Order::has_price() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void Order::set_has_price() {
  _has_bits_[0] |= 0x00000040u;
}
inline void Order::clear_has_price() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void Order::clear_price() {
  if (price_ != &::google::protobuf::internal::kEmptyString) {
    price_->clear();
  }
  clear_has_price();
}
inline const ::std::string& Order::price() const {
  return *price_;
}
inline void Order::set_price(const ::std::string& value) {
  set_has_price();
  if (price_ == &::google::protobuf::internal::kEmptyString) {
    price_ = new ::std::string;
  }
  price_->assign(value);
}
inline void Order::set_price(const char* value) {
  set_has_price();
  if (price_ == &::google::protobuf::internal::kEmptyString) {
    price_ = new ::std::string;
  }
  price_->assign(value);
}
inline void Order::set_price(const char* value, size_t size) {
  set_has_price();
  if (price_ == &::google::protobuf::internal::kEmptyString) {
    price_ = new ::std::string;
  }
  price_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Order::mutable_price() {
  set_has_price();
  if (price_ == &::google::protobuf::internal::kEmptyString) {
    price_ = new ::std::string;
  }
  return price_;
}
inline ::std::string* Order::release_price() {
  clear_has_price();
  if (price_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = price_;
    price_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional string amount = 8;
inline bool Order::has_amount() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void Order::set_has_amount() {
  _has_bits_[0] |= 0x00000080u;
}
inline void Order::clear_has_amount() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void Order::clear_amount() {
  if (amount_ != &::google::protobuf::internal::kEmptyString) {
    amount_->clear();
  }
  clear_has_amount();
}
inline const ::std::string& Order::amount() const {
  return *amount_;
}
inline void Order::set_amount(const ::std::string& value) {
  set_has_amount();
  if (amount_ == &::google::protobuf::internal::kEmptyString) {
    amount_ = new ::std::string;
  }
  amount_->assign(value);
}
inline void Order::set_amount(const char* value) {
  set_has_amount();
  if (amount_ == &::google::protobuf::internal::kEmptyString) {
    amount_ = new ::std::string;
  }
  amount_->assign(value);
}
inline void Order::set_amount(const char* value, size_t size) {
  set_has_amount();
  if (amount_ == &::google::protobuf::internal::kEmptyString) {
    amount_ = new ::std::string;
  }
  amount_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Order::mutable_amount() {
  set_has_amount();
  if (amount_ == &::google::protobuf::internal::kEmptyString) {
    amount_ = new ::std::string;
  }
  return amount_;
}
inline ::std::string* Order::release_amount() {
  clear_has_amount();
  if (amount_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = amount_;
    amount_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace xquant

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Order_2eproto__INCLUDED
