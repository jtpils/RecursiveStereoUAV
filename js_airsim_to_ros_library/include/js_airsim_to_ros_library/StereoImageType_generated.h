// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_STEREOIMAGETYPE_AIRSIM_TO_ROS_H_
#define FLATBUFFERS_GENERATED_STEREOIMAGETYPE_AIRSIM_TO_ROS_H_

#include "flatbuffers/flatbuffers.h"

namespace airsim_to_ros {

enum StereoImageType {
  StereoImageType_Unknown = 0,
  StereoImageType_LeftStereoImage = 1,
  StereoImageType_RightStereoImage = 2,
  StereoImageType_DepthPlannerImage = 3,
  StereoImageType_DepthPerspectiveImage = 4,
  StereoImageType_DepthVisImage = 5,
  StereoImageType_DisparityNormalizedImage = 6,
  StereoImageType_SegmentationImage = 7,
  StereoImageType_SurfaceNormalsImage = 8,
  StereoImageType_MIN = StereoImageType_Unknown,
  StereoImageType_MAX = StereoImageType_SurfaceNormalsImage
};

inline StereoImageType (&EnumValuesStereoImageType())[9] {
  static StereoImageType values[] = {
    StereoImageType_Unknown,
    StereoImageType_LeftStereoImage,
    StereoImageType_RightStereoImage,
    StereoImageType_DepthPlannerImage,
    StereoImageType_DepthPerspectiveImage,
    StereoImageType_DepthVisImage,
    StereoImageType_DisparityNormalizedImage,
    StereoImageType_SegmentationImage,
    StereoImageType_SurfaceNormalsImage
  };
  return values;
}

inline const char **EnumNamesStereoImageType() {
  static const char *names[] = {
    "Unknown",
    "LeftStereoImage",
    "RightStereoImage",
    "DepthPlannerImage",
    "DepthPerspectiveImage",
    "DepthVisImage",
    "DisparityNormalizedImage",
    "SegmentationImage",
    "SurfaceNormalsImage",
    nullptr
  };
  return names;
}

inline const char *EnumNameStereoImageType(StereoImageType e) {
  const size_t index = static_cast<int>(e);
  return EnumNamesStereoImageType()[index];
}

}  // namespace airsim_to_ros

#endif  // FLATBUFFERS_GENERATED_STEREOIMAGETYPE_AIRSIM_TO_ROS_H_