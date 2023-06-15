#ifndef _TF2_INCLUDE_GEOMETRY_MSGS_MSG_TRANSFORM_STAMPED_H_
#define _TF2_INCLUDE_GEOMETRY_MSGS_MSG_TRANSFORM_STAMPED_H_

#include <string>
#include "geometry_msgs/msg/transform.hpp"
#include "geometry_msgs/msg/time.hpp"

namespace geometry_msgs
{
namespace msg
{

    struct Header {
        uint32_t seq;
        Time stamp;
        std::string frame_id;
    };

    struct TransformStamped {
        std::string child_frame_id;
        Transform transform;
        Header header;    
    };
} // namespace msg
}  // namespace geometry_msgs

#endif /* _TF2_INCLUDE_GEOMETRY_MSGS_MSG_TRANSFORM_STAMPED_H_ */
