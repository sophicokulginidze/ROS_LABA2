// Generated by gencpp from file laba2/WEC.msg
// DO NOT EDIT!


#ifndef LABA2_MESSAGE_WEC_H
#define LABA2_MESSAGE_WEC_H

#include <ros/service_traits.h>


#include <laba2/WECRequest.h>
#include <laba2/WECResponse.h>


namespace laba2
{

struct WEC
{

typedef WECRequest Request;
typedef WECResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct WEC
} // namespace laba2


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::laba2::WEC > {
  static const char* value()
  {
    return "f238e82627f1728794d42f42961a9dc9";
  }

  static const char* value(const ::laba2::WEC&) { return value(); }
};

template<>
struct DataType< ::laba2::WEC > {
  static const char* value()
  {
    return "laba2/WEC";
  }

  static const char* value(const ::laba2::WEC&) { return value(); }
};


// service_traits::MD5Sum< ::laba2::WECRequest> should match
// service_traits::MD5Sum< ::laba2::WEC >
template<>
struct MD5Sum< ::laba2::WECRequest>
{
  static const char* value()
  {
    return MD5Sum< ::laba2::WEC >::value();
  }
  static const char* value(const ::laba2::WECRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::laba2::WECRequest> should match
// service_traits::DataType< ::laba2::WEC >
template<>
struct DataType< ::laba2::WECRequest>
{
  static const char* value()
  {
    return DataType< ::laba2::WEC >::value();
  }
  static const char* value(const ::laba2::WECRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::laba2::WECResponse> should match
// service_traits::MD5Sum< ::laba2::WEC >
template<>
struct MD5Sum< ::laba2::WECResponse>
{
  static const char* value()
  {
    return MD5Sum< ::laba2::WEC >::value();
  }
  static const char* value(const ::laba2::WECResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::laba2::WECResponse> should match
// service_traits::DataType< ::laba2::WEC >
template<>
struct DataType< ::laba2::WECResponse>
{
  static const char* value()
  {
    return DataType< ::laba2::WEC >::value();
  }
  static const char* value(const ::laba2::WECResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // LABA2_MESSAGE_WEC_H