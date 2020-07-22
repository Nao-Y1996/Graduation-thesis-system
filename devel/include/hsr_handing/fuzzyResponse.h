// Generated by gencpp from file hsr_handing/fuzzyResponse.msg
// DO NOT EDIT!


#ifndef HSR_HANDING_MESSAGE_FUZZYRESPONSE_H
#define HSR_HANDING_MESSAGE_FUZZYRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace hsr_handing
{
template <class ContainerAllocator>
struct fuzzyResponse_
{
  typedef fuzzyResponse_<ContainerAllocator> Type;

  fuzzyResponse_()
    : x(0.0)
    , y(0.0)
    , ek(0.0)  {
    }
  fuzzyResponse_(const ContainerAllocator& _alloc)
    : x(0.0)
    , y(0.0)
    , ek(0.0)  {
  (void)_alloc;
    }



   typedef double _x_type;
  _x_type x;

   typedef double _y_type;
  _y_type y;

   typedef double _ek_type;
  _ek_type ek;





  typedef boost::shared_ptr< ::hsr_handing::fuzzyResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hsr_handing::fuzzyResponse_<ContainerAllocator> const> ConstPtr;

}; // struct fuzzyResponse_

typedef ::hsr_handing::fuzzyResponse_<std::allocator<void> > fuzzyResponse;

typedef boost::shared_ptr< ::hsr_handing::fuzzyResponse > fuzzyResponsePtr;
typedef boost::shared_ptr< ::hsr_handing::fuzzyResponse const> fuzzyResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::hsr_handing::fuzzyResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::hsr_handing::fuzzyResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace hsr_handing

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'hsr_handing': ['/home/naoyamada/catkin_ws3/src/hsr_handing/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::hsr_handing::fuzzyResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::hsr_handing::fuzzyResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hsr_handing::fuzzyResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hsr_handing::fuzzyResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hsr_handing::fuzzyResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hsr_handing::fuzzyResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::hsr_handing::fuzzyResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8fe105539d9eff0c116c131922ede9dd";
  }

  static const char* value(const ::hsr_handing::fuzzyResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8fe105539d9eff0cULL;
  static const uint64_t static_value2 = 0x116c131922ede9ddULL;
};

template<class ContainerAllocator>
struct DataType< ::hsr_handing::fuzzyResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "hsr_handing/fuzzyResponse";
  }

  static const char* value(const ::hsr_handing::fuzzyResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::hsr_handing::fuzzyResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 x\n\
float64 y\n\
float64 ek\n\
\n\
";
  }

  static const char* value(const ::hsr_handing::fuzzyResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::hsr_handing::fuzzyResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.ek);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct fuzzyResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hsr_handing::fuzzyResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::hsr_handing::fuzzyResponse_<ContainerAllocator>& v)
  {
    s << indent << "x: ";
    Printer<double>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<double>::stream(s, indent + "  ", v.y);
    s << indent << "ek: ";
    Printer<double>::stream(s, indent + "  ", v.ek);
  }
};

} // namespace message_operations
} // namespace ros

#endif // HSR_HANDING_MESSAGE_FUZZYRESPONSE_H
