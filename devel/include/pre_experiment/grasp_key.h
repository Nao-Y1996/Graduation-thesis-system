// Generated by gencpp from file pre_experiment/grasp_key.msg
// DO NOT EDIT!


#ifndef PRE_EXPERIMENT_MESSAGE_GRASP_KEY_H
#define PRE_EXPERIMENT_MESSAGE_GRASP_KEY_H


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
struct grasp_key_
{
  typedef grasp_key_<ContainerAllocator> Type;

  grasp_key_()
    : grasp_key()  {
    }
  grasp_key_(const ContainerAllocator& _alloc)
    : grasp_key(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _grasp_key_type;
  _grasp_key_type grasp_key;





  typedef boost::shared_ptr< ::pre_experiment::grasp_key_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pre_experiment::grasp_key_<ContainerAllocator> const> ConstPtr;

}; // struct grasp_key_

typedef ::pre_experiment::grasp_key_<std::allocator<void> > grasp_key;

typedef boost::shared_ptr< ::pre_experiment::grasp_key > grasp_keyPtr;
typedef boost::shared_ptr< ::pre_experiment::grasp_key const> grasp_keyConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pre_experiment::grasp_key_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pre_experiment::grasp_key_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::pre_experiment::grasp_key_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pre_experiment::grasp_key_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pre_experiment::grasp_key_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pre_experiment::grasp_key_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pre_experiment::grasp_key_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pre_experiment::grasp_key_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pre_experiment::grasp_key_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3833578282f3854b4d750588d5638a4c";
  }

  static const char* value(const ::pre_experiment::grasp_key_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3833578282f3854bULL;
  static const uint64_t static_value2 = 0x4d750588d5638a4cULL;
};

template<class ContainerAllocator>
struct DataType< ::pre_experiment::grasp_key_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pre_experiment/grasp_key";
  }

  static const char* value(const ::pre_experiment::grasp_key_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pre_experiment::grasp_key_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string grasp_key\n\
";
  }

  static const char* value(const ::pre_experiment::grasp_key_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pre_experiment::grasp_key_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.grasp_key);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct grasp_key_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pre_experiment::grasp_key_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pre_experiment::grasp_key_<ContainerAllocator>& v)
  {
    s << indent << "grasp_key: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.grasp_key);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PRE_EXPERIMENT_MESSAGE_GRASP_KEY_H
