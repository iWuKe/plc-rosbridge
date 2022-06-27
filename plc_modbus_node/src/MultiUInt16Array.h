// Generated by gencpp from file plc_modbus_node/MultiUInt16Array.msg
// DO NOT EDIT!


#ifndef PLC_MODBUS_NODE_MESSAGE_MULTIUINT16ARRAY_H
#define PLC_MODBUS_NODE_MESSAGE_MULTIUINT16ARRAY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <plc_modbus_node/UInt16Array.h>

namespace plc_modbus_node
{
template <class ContainerAllocator>
struct MultiUInt16Array_
{
  typedef MultiUInt16Array_<ContainerAllocator> Type;

  MultiUInt16Array_()
    : arrays()  {
    }
  MultiUInt16Array_(const ContainerAllocator& _alloc)
    : arrays(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::plc_modbus_node::UInt16Array_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::plc_modbus_node::UInt16Array_<ContainerAllocator> >::other >  _arrays_type;
  _arrays_type arrays;





  typedef boost::shared_ptr< ::plc_modbus_node::MultiUInt16Array_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::plc_modbus_node::MultiUInt16Array_<ContainerAllocator> const> ConstPtr;

}; // struct MultiUInt16Array_

typedef ::plc_modbus_node::MultiUInt16Array_<std::allocator<void> > MultiUInt16Array;

typedef boost::shared_ptr< ::plc_modbus_node::MultiUInt16Array > MultiUInt16ArrayPtr;
typedef boost::shared_ptr< ::plc_modbus_node::MultiUInt16Array const> MultiUInt16ArrayConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::plc_modbus_node::MultiUInt16Array_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::plc_modbus_node::MultiUInt16Array_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::plc_modbus_node::MultiUInt16Array_<ContainerAllocator1> & lhs, const ::plc_modbus_node::MultiUInt16Array_<ContainerAllocator2> & rhs)
{
  return lhs.arrays == rhs.arrays;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::plc_modbus_node::MultiUInt16Array_<ContainerAllocator1> & lhs, const ::plc_modbus_node::MultiUInt16Array_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace plc_modbus_node

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::plc_modbus_node::MultiUInt16Array_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::plc_modbus_node::MultiUInt16Array_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::plc_modbus_node::MultiUInt16Array_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::plc_modbus_node::MultiUInt16Array_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::plc_modbus_node::MultiUInt16Array_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::plc_modbus_node::MultiUInt16Array_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::plc_modbus_node::MultiUInt16Array_<ContainerAllocator> >
{
  static const char* value()
  {
    return "808dfe8d9a59d1b92f6b155e3e122fb8";
  }

  static const char* value(const ::plc_modbus_node::MultiUInt16Array_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x808dfe8d9a59d1b9ULL;
  static const uint64_t static_value2 = 0x2f6b155e3e122fb8ULL;
};

template<class ContainerAllocator>
struct DataType< ::plc_modbus_node::MultiUInt16Array_<ContainerAllocator> >
{
  static const char* value()
  {
    return "plc_modbus_node/MultiUInt16Array";
  }

  static const char* value(const ::plc_modbus_node::MultiUInt16Array_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::plc_modbus_node::MultiUInt16Array_<ContainerAllocator> >
{
  static const char* value()
  {
    return "UInt16Array[] arrays\n"
"================================================================================\n"
"MSG: plc_modbus_node/UInt16Array\n"
"string name\n"
"uint16[] data\n"
;
  }

  static const char* value(const ::plc_modbus_node::MultiUInt16Array_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::plc_modbus_node::MultiUInt16Array_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.arrays);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MultiUInt16Array_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::plc_modbus_node::MultiUInt16Array_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::plc_modbus_node::MultiUInt16Array_<ContainerAllocator>& v)
  {
    s << indent << "arrays[]" << std::endl;
    for (size_t i = 0; i < v.arrays.size(); ++i)
    {
      s << indent << "  arrays[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::plc_modbus_node::UInt16Array_<ContainerAllocator> >::stream(s, indent + "    ", v.arrays[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // PLC_MODBUS_NODE_MESSAGE_MULTIUINT16ARRAY_H
