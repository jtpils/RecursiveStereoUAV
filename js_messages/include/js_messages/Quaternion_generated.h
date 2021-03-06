// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_QUATERNION_ROS_TO_AIRSIM_H_
#define FLATBUFFERS_GENERATED_QUATERNION_ROS_TO_AIRSIM_H_

#include "flatbuffers/flatbuffers.h"

namespace ros_to_airsim {

struct Quaternion;

MANUALLY_ALIGNED_STRUCT(8) Quaternion FLATBUFFERS_FINAL_CLASS {
 private:
  double x_;
  double y_;
  double z_;
  double w_;

 public:
  Quaternion() {
    memset(this, 0, sizeof(Quaternion));
  }
  Quaternion(double _x, double _y, double _z, double _w)
      : x_(flatbuffers::EndianScalar(_x)),
        y_(flatbuffers::EndianScalar(_y)),
        z_(flatbuffers::EndianScalar(_z)),
        w_(flatbuffers::EndianScalar(_w)) {
  }
  double x() const {
    return flatbuffers::EndianScalar(x_);
  }
  double y() const {
    return flatbuffers::EndianScalar(y_);
  }
  double z() const {
    return flatbuffers::EndianScalar(z_);
  }
  double w() const {
    return flatbuffers::EndianScalar(w_);
  }
};
STRUCT_END(Quaternion, 32);

}  // namespace ros_to_airsim

#endif  // FLATBUFFERS_GENERATED_QUATERNION_ROS_TO_AIRSIM_H_
