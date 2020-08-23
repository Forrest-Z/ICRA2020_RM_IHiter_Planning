// Generated by gencpp from file icra_nav/path_srv.msg
// DO NOT EDIT!


#ifndef ICRA_NAV_MESSAGE_PATH_SRV_H
#define ICRA_NAV_MESSAGE_PATH_SRV_H

#include <ros/service_traits.h>


#include <icra_nav/path_srvRequest.h>
#include <icra_nav/path_srvResponse.h>


namespace icra_nav
{

struct path_srv
{

typedef path_srvRequest Request;
typedef path_srvResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct path_srv
} // namespace icra_nav


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::icra_nav::path_srv > {
  static const char* value()
  {
    return "9252540c61646001ef1bfd31da90b1cc";
  }

  static const char* value(const ::icra_nav::path_srv&) { return value(); }
};

template<>
struct DataType< ::icra_nav::path_srv > {
  static const char* value()
  {
    return "icra_nav/path_srv";
  }

  static const char* value(const ::icra_nav::path_srv&) { return value(); }
};


// service_traits::MD5Sum< ::icra_nav::path_srvRequest> should match 
// service_traits::MD5Sum< ::icra_nav::path_srv > 
template<>
struct MD5Sum< ::icra_nav::path_srvRequest>
{
  static const char* value()
  {
    return MD5Sum< ::icra_nav::path_srv >::value();
  }
  static const char* value(const ::icra_nav::path_srvRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::icra_nav::path_srvRequest> should match 
// service_traits::DataType< ::icra_nav::path_srv > 
template<>
struct DataType< ::icra_nav::path_srvRequest>
{
  static const char* value()
  {
    return DataType< ::icra_nav::path_srv >::value();
  }
  static const char* value(const ::icra_nav::path_srvRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::icra_nav::path_srvResponse> should match 
// service_traits::MD5Sum< ::icra_nav::path_srv > 
template<>
struct MD5Sum< ::icra_nav::path_srvResponse>
{
  static const char* value()
  {
    return MD5Sum< ::icra_nav::path_srv >::value();
  }
  static const char* value(const ::icra_nav::path_srvResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::icra_nav::path_srvResponse> should match 
// service_traits::DataType< ::icra_nav::path_srv > 
template<>
struct DataType< ::icra_nav::path_srvResponse>
{
  static const char* value()
  {
    return DataType< ::icra_nav::path_srv >::value();
  }
  static const char* value(const ::icra_nav::path_srvResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ICRA_NAV_MESSAGE_PATH_SRV_H