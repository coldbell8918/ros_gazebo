// Generated by gencpp from file service_tutorial/ControlTurningMessage.msg
// DO NOT EDIT!


#ifndef SERVICE_TUTORIAL_MESSAGE_CONTROLTURNINGMESSAGE_H
#define SERVICE_TUTORIAL_MESSAGE_CONTROLTURNINGMESSAGE_H

#include <ros/service_traits.h>


#include <service_tutorial/ControlTurningMessageRequest.h>
#include <service_tutorial/ControlTurningMessageResponse.h>


namespace service_tutorial
{

struct ControlTurningMessage
{

typedef ControlTurningMessageRequest Request;
typedef ControlTurningMessageResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct ControlTurningMessage
} // namespace service_tutorial


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::service_tutorial::ControlTurningMessage > {
  static const char* value()
  {
    return "ee9343ef2dee87389c351330c47df45c";
  }

  static const char* value(const ::service_tutorial::ControlTurningMessage&) { return value(); }
};

template<>
struct DataType< ::service_tutorial::ControlTurningMessage > {
  static const char* value()
  {
    return "service_tutorial/ControlTurningMessage";
  }

  static const char* value(const ::service_tutorial::ControlTurningMessage&) { return value(); }
};


// service_traits::MD5Sum< ::service_tutorial::ControlTurningMessageRequest> should match
// service_traits::MD5Sum< ::service_tutorial::ControlTurningMessage >
template<>
struct MD5Sum< ::service_tutorial::ControlTurningMessageRequest>
{
  static const char* value()
  {
    return MD5Sum< ::service_tutorial::ControlTurningMessage >::value();
  }
  static const char* value(const ::service_tutorial::ControlTurningMessageRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::service_tutorial::ControlTurningMessageRequest> should match
// service_traits::DataType< ::service_tutorial::ControlTurningMessage >
template<>
struct DataType< ::service_tutorial::ControlTurningMessageRequest>
{
  static const char* value()
  {
    return DataType< ::service_tutorial::ControlTurningMessage >::value();
  }
  static const char* value(const ::service_tutorial::ControlTurningMessageRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::service_tutorial::ControlTurningMessageResponse> should match
// service_traits::MD5Sum< ::service_tutorial::ControlTurningMessage >
template<>
struct MD5Sum< ::service_tutorial::ControlTurningMessageResponse>
{
  static const char* value()
  {
    return MD5Sum< ::service_tutorial::ControlTurningMessage >::value();
  }
  static const char* value(const ::service_tutorial::ControlTurningMessageResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::service_tutorial::ControlTurningMessageResponse> should match
// service_traits::DataType< ::service_tutorial::ControlTurningMessage >
template<>
struct DataType< ::service_tutorial::ControlTurningMessageResponse>
{
  static const char* value()
  {
    return DataType< ::service_tutorial::ControlTurningMessage >::value();
  }
  static const char* value(const ::service_tutorial::ControlTurningMessageResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // SERVICE_TUTORIAL_MESSAGE_CONTROLTURNINGMESSAGE_H
