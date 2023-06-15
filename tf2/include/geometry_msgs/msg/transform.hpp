#ifndef _TF2_INCLUDE_GEOMETRY_MSGS_MSG_TRANSFORM_H_
#define _TF2_INCLUDE_GEOMETRY_MSGS_MSG_TRANSFORM_H_

namespace geometry_msgs
{
namespace msg
{
    struct Vector3 {
        float x;
        float y;
        float z;
    };

    struct Quaternion {
        float x;
        float y;
        float z;
        float w;
    };

    struct Transform {
        Vector3 translation;
        Quaternion rotation;
    };
} // namespace msg
}  // namespace geometry_msgs

#endif /* _TF2_INCLUDE_GEOMETRY_MSGS_MSG_TRANSFORM_H_ */
