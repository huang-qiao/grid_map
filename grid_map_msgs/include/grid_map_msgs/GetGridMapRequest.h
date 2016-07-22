// Generated by gencpp from file grid_map_msgs/GetGridMapRequest.msg
// DO NOT EDIT!


#ifndef GRID_MAP_MSGS_MESSAGE_GETGRIDMAPREQUEST_H
#define GRID_MAP_MSGS_MESSAGE_GETGRIDMAPREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace grid_map_msgs
{
template <class ContainerAllocator>
struct GetGridMapRequest_
{
  typedef GetGridMapRequest_<ContainerAllocator> Type;

  GetGridMapRequest_()
    : frame_id()
    , position_x(0.0)
    , position_y(0.0)
    , length_x(0.0)
    , length_y(0.0)
    , layers()  {
    }
  GetGridMapRequest_(const ContainerAllocator& _alloc)
    : frame_id(_alloc)
    , position_x(0.0)
    , position_y(0.0)
    , length_x(0.0)
    , length_y(0.0)
    , layers(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _frame_id_type;
  _frame_id_type frame_id;

   typedef double _position_x_type;
  _position_x_type position_x;

   typedef double _position_y_type;
  _position_y_type position_y;

   typedef double _length_x_type;
  _length_x_type length_x;

   typedef double _length_y_type;
  _length_y_type length_y;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _layers_type;
  _layers_type layers;




  typedef boost::shared_ptr< ::grid_map_msgs::GetGridMapRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::grid_map_msgs::GetGridMapRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GetGridMapRequest_

typedef ::grid_map_msgs::GetGridMapRequest_<std::allocator<void> > GetGridMapRequest;

typedef boost::shared_ptr< ::grid_map_msgs::GetGridMapRequest > GetGridMapRequestPtr;
typedef boost::shared_ptr< ::grid_map_msgs::GetGridMapRequest const> GetGridMapRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::grid_map_msgs::GetGridMapRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::grid_map_msgs::GetGridMapRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace grid_map_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'grid_map_msgs': ['/media/robot/RobotVisionLib/ext/shared/catkin_ws/src/grid_map/grid_map_msgs/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::grid_map_msgs::GetGridMapRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::grid_map_msgs::GetGridMapRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::grid_map_msgs::GetGridMapRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::grid_map_msgs::GetGridMapRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::grid_map_msgs::GetGridMapRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::grid_map_msgs::GetGridMapRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::grid_map_msgs::GetGridMapRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b6b21ecd617fdfa7f32e8c349cec3c2e";
  }

  static const char* value(const ::grid_map_msgs::GetGridMapRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb6b21ecd617fdfa7ULL;
  static const uint64_t static_value2 = 0xf32e8c349cec3c2eULL;
};

template<class ContainerAllocator>
struct DataType< ::grid_map_msgs::GetGridMapRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "grid_map_msgs/GetGridMapRequest";
  }

  static const char* value(const ::grid_map_msgs::GetGridMapRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::grid_map_msgs::GetGridMapRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
string frame_id\n\
\n\
\n\
float64 position_x\n\
\n\
\n\
float64 position_y\n\
\n\
\n\
float64 length_x\n\
\n\
\n\
float64 length_y\n\
\n\
\n\
string[] layers\n\
\n\
";
  }

  static const char* value(const ::grid_map_msgs::GetGridMapRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::grid_map_msgs::GetGridMapRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.frame_id);
      stream.next(m.position_x);
      stream.next(m.position_y);
      stream.next(m.length_x);
      stream.next(m.length_y);
      stream.next(m.layers);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct GetGridMapRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::grid_map_msgs::GetGridMapRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::grid_map_msgs::GetGridMapRequest_<ContainerAllocator>& v)
  {
    s << indent << "frame_id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.frame_id);
    s << indent << "position_x: ";
    Printer<double>::stream(s, indent + "  ", v.position_x);
    s << indent << "position_y: ";
    Printer<double>::stream(s, indent + "  ", v.position_y);
    s << indent << "length_x: ";
    Printer<double>::stream(s, indent + "  ", v.length_x);
    s << indent << "length_y: ";
    Printer<double>::stream(s, indent + "  ", v.length_y);
    s << indent << "layers[]" << std::endl;
    for (size_t i = 0; i < v.layers.size(); ++i)
    {
      s << indent << "  layers[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.layers[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // GRID_MAP_MSGS_MESSAGE_GETGRIDMAPREQUEST_H
