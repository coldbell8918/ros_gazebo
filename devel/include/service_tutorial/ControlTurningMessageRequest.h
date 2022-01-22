// Generated by gencpp from file service_tutorial/ControlTurningMessageRequest.msg
// DO NOT EDIT!


#ifndef SERVICE_TUTORIAL_MESSAGE_CONTROLTURNINGMESSAGEREQUEST_H
#define SERVICE_TUTORIAL_MESSAGE_CONTROLTURNINGMESSAGEREQUEST_H


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
struct ControlTurningMessageRequest_
{
  typedef ControlTurningMessageRequest_<ContainerAllocator> Type;

  ControlTurningMessageRequest_()
    : time_duration(0)
    , angular_vel(0.0)  {
    }
  ControlTurningMessageRequest_(const ContainerAllocator& _alloc)
    : time_duration(0)
    , angular_vel(0.0)  {
  (void)_alloc;
    }



   typedef uint32_t _time_duration_type;
  _time_duration_type time_duration;

   typedef double _angular_vel_type;
  _angular_vel_type angular_vel;





  typedef boost::shared_ptr< ::service_tutorial::ControlTurningMessageRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::service_tutorial::ControlTurningMessageRequest_<ContainerAllocator> const> ConstPtr;

}; // struct ControlTurningMessageRequest_

typedef ::service_tutorial::ControlTurningMessageRequest_<std::allocator<void> > ControlTurningMessageRequest;

typedef boost::shared_ptr< ::service_tutorial::ControlTurningMessageRequest > ControlTurningMessageRequestPtr;
typedef boost::shared_ptr< ::service_tutorial::ControlTurningMessageRequest const> ControlTurningMessageRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::service_tutorial::ControlTurningMessageRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::service_tutorial::ControlTurningMessageRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::service_tutorial::ControlTurningMessageRequest_<ContainerAllocator1> & lhs, const ::service_tutorial::ControlTurningMessageRequest_<ContainerAllocator2> & rhs)
{
  return lhs.time_duration == rhs.time_duration &&
    lhs.angular_vel == rhs.angular_vel;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::service_tutorial::ControlTurningMessageRequest_<ContainerAllocator1> & lhs, const ::service_tutorial::ControlTurningMessageRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace service_tutorial

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::service_tutorial::ControlTurningMessageRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::service_tutorial::ControlTurningMessageRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::service_tutorial::ControlTurningMessageRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::service_tutorial::ControlTurningMessageRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::service_tutorial::ControlTurningMessageRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::service_tutorial::ControlTurningMessageRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::service_tutorial::ControlTurningMessageRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cb1f7304cbb93690c058b16806267092";
  }

  static const char* value(const ::service_tutorial::ControlTurningMessageRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcb1f7304cbb93690ULL;
  static const uint64_t static_value2 = 0xc058b16806267092ULL;
};

template<class ContainerAllocator>
struct DataType< ::service_tutorial::ControlTurningMessageRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "service_tutorial/ControlTurningMessageRequest";
  }

  static const char* value(const ::service_tutorial::ControlTurningMessageRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::service_tutorial::ControlTurningMessageRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint32 time_duration\n"
"float64 angular_vel\n"
;
  }

  static const char* value(const ::service_tutorial::ControlTurningMessageRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::service_tutorial::ControlTurningMessageRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.time_duration);
      stream.next(m.angular_vel);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ControlTurningMessageRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::service_tutorial::ControlTurningMessageRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::service_tutorial::ControlTurningMessageRequest_<ContainerAllocator>& v)
  {
    s << indent << "time_duration: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.time_duration);
    s << indent << "angular_vel: ";
    Printer<double>::stream(s, indent + "  ", v.angular_vel);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SERVICE_TUTORIAL_MESSAGE_CONTROLTURNINGMESSAGEREQUEST_H
