// Generated by gencpp from file service_tutorial/ControlTurningMessageResponse.msg
// DO NOT EDIT!


#ifndef SERVICE_TUTORIAL_MESSAGE_CONTROLTURNINGMESSAGERESPONSE_H
#define SERVICE_TUTORIAL_MESSAGE_CONTROLTURNINGMESSAGERESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace service_tutorial
{
template <class ContainerAllocator>
struct ControlTurningMessageResponse_
{
  typedef ControlTurningMessageResponse_<ContainerAllocator> Type;

  ControlTurningMessageResponse_()
    : success(false)  {
    }
  ControlTurningMessageResponse_(const ContainerAllocator& _alloc)
    : success(false)  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;





  typedef boost::shared_ptr< ::service_tutorial::ControlTurningMessageResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::service_tutorial::ControlTurningMessageResponse_<ContainerAllocator> const> ConstPtr;

}; // struct ControlTurningMessageResponse_

typedef ::service_tutorial::ControlTurningMessageResponse_<std::allocator<void> > ControlTurningMessageResponse;

typedef boost::shared_ptr< ::service_tutorial::ControlTurningMessageResponse > ControlTurningMessageResponsePtr;
typedef boost::shared_ptr< ::service_tutorial::ControlTurningMessageResponse const> ControlTurningMessageResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::service_tutorial::ControlTurningMessageResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::service_tutorial::ControlTurningMessageResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::service_tutorial::ControlTurningMessageResponse_<ContainerAllocator1> & lhs, const ::service_tutorial::ControlTurningMessageResponse_<ContainerAllocator2> & rhs)
{
  return lhs.success == rhs.success;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::service_tutorial::ControlTurningMessageResponse_<ContainerAllocator1> & lhs, const ::service_tutorial::ControlTurningMessageResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace service_tutorial

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::service_tutorial::ControlTurningMessageResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::service_tutorial::ControlTurningMessageResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::service_tutorial::ControlTurningMessageResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::service_tutorial::ControlTurningMessageResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::service_tutorial::ControlTurningMessageResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::service_tutorial::ControlTurningMessageResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::service_tutorial::ControlTurningMessageResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const ::service_tutorial::ControlTurningMessageResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x358e233cde0c8a8bULL;
  static const uint64_t static_value2 = 0xcfea4ce193f8fc15ULL;
};

template<class ContainerAllocator>
struct DataType< ::service_tutorial::ControlTurningMessageResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "service_tutorial/ControlTurningMessageResponse";
  }

  static const char* value(const ::service_tutorial::ControlTurningMessageResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::service_tutorial::ControlTurningMessageResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool success\n"
;
  }

  static const char* value(const ::service_tutorial::ControlTurningMessageResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::service_tutorial::ControlTurningMessageResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ControlTurningMessageResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::service_tutorial::ControlTurningMessageResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::service_tutorial::ControlTurningMessageResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SERVICE_TUTORIAL_MESSAGE_CONTROLTURNINGMESSAGERESPONSE_H