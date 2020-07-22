// Generated by gencpp from file pre_experiment/input4handingResponse.msg
// DO NOT EDIT!


#ifndef PRE_EXPERIMENT_MESSAGE_INPUT4HANDINGRESPONSE_H
#define PRE_EXPERIMENT_MESSAGE_INPUT4HANDINGRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace pre_experiment
{
template <class ContainerAllocator>
struct input4handingResponse_
{
  typedef input4handingResponse_<ContainerAllocator> Type;

  input4handingResponse_()
    : action_name()  {
    }
  input4handingResponse_(const ContainerAllocator& _alloc)
    : action_name(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _action_name_type;
  _action_name_type action_name;





  typedef boost::shared_ptr< ::pre_experiment::input4handingResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pre_experiment::input4handingResponse_<ContainerAllocator> const> ConstPtr;

}; // struct input4handingResponse_

typedef ::pre_experiment::input4handingResponse_<std::allocator<void> > input4handingResponse;

typedef boost::shared_ptr< ::pre_experiment::input4handingResponse > input4handingResponsePtr;
typedef boost::shared_ptr< ::pre_experiment::input4handingResponse const> input4handingResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pre_experiment::input4handingResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pre_experiment::input4handingResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pre_experiment

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'pre_experiment': ['/home/naoyamada/catkin_ws3/src/pre_experiment/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pre_experiment::input4handingResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pre_experiment::input4handingResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pre_experiment::input4handingResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pre_experiment::input4handingResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pre_experiment::input4handingResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pre_experiment::input4handingResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pre_experiment::input4handingResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e4d9ec8eb1541d8a917c71ed6f9b1654";
  }

  static const char* value(const ::pre_experiment::input4handingResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe4d9ec8eb1541d8aULL;
  static const uint64_t static_value2 = 0x917c71ed6f9b1654ULL;
};

template<class ContainerAllocator>
struct DataType< ::pre_experiment::input4handingResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pre_experiment/input4handingResponse";
  }

  static const char* value(const ::pre_experiment::input4handingResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pre_experiment::input4handingResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string action_name\n\
\n\
";
  }

  static const char* value(const ::pre_experiment::input4handingResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pre_experiment::input4handingResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.action_name);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct input4handingResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pre_experiment::input4handingResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pre_experiment::input4handingResponse_<ContainerAllocator>& v)
  {
    s << indent << "action_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.action_name);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PRE_EXPERIMENT_MESSAGE_INPUT4HANDINGRESPONSE_H
