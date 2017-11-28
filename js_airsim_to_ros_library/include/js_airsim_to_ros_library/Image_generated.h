// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_IMAGE_AIRSIM_TO_ROS_H_
#define FLATBUFFERS_GENERATED_IMAGE_AIRSIM_TO_ROS_H_

#include "flatbuffers/flatbuffers.h"

#include "Header_generated.h"
#include "StereoImageType_generated.h"
#include "time_generated.h"

namespace airsim_to_ros {

struct Image;

struct Image FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_TYPE = 4,
    VT_HEADER = 6,
    VT_HEIGHT = 8,
    VT_WIDTH = 10,
    VT_ENCODING = 12,
    VT_IS_BIGENDIAN = 14,
    VT_STEP = 16,
    VT_DATA = 18
  };
  StereoImageType type() const {
    return static_cast<StereoImageType>(GetField<int8_t>(VT_TYPE, 0));
  }
  const Header *header() const {
    return GetPointer<const Header *>(VT_HEADER);
  }
  uint32_t height() const {
    return GetField<uint32_t>(VT_HEIGHT, 0);
  }
  uint32_t width() const {
    return GetField<uint32_t>(VT_WIDTH, 0);
  }
  const flatbuffers::String *encoding() const {
    return GetPointer<const flatbuffers::String *>(VT_ENCODING);
  }
  uint8_t is_bigendian() const {
    return GetField<uint8_t>(VT_IS_BIGENDIAN, 0);
  }
  uint32_t step() const {
    return GetField<uint32_t>(VT_STEP, 0);
  }
  const flatbuffers::Vector<uint8_t> *data() const {
    return GetPointer<const flatbuffers::Vector<uint8_t> *>(VT_DATA);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int8_t>(verifier, VT_TYPE) &&
           VerifyOffset(verifier, VT_HEADER) &&
           verifier.VerifyTable(header()) &&
           VerifyField<uint32_t>(verifier, VT_HEIGHT) &&
           VerifyField<uint32_t>(verifier, VT_WIDTH) &&
           VerifyOffset(verifier, VT_ENCODING) &&
           verifier.Verify(encoding()) &&
           VerifyField<uint8_t>(verifier, VT_IS_BIGENDIAN) &&
           VerifyField<uint32_t>(verifier, VT_STEP) &&
           VerifyOffset(verifier, VT_DATA) &&
           verifier.Verify(data()) &&
           verifier.EndTable();
  }
};

struct ImageBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_type(StereoImageType type) {
    fbb_.AddElement<int8_t>(Image::VT_TYPE, static_cast<int8_t>(type), 0);
  }
  void add_header(flatbuffers::Offset<Header> header) {
    fbb_.AddOffset(Image::VT_HEADER, header);
  }
  void add_height(uint32_t height) {
    fbb_.AddElement<uint32_t>(Image::VT_HEIGHT, height, 0);
  }
  void add_width(uint32_t width) {
    fbb_.AddElement<uint32_t>(Image::VT_WIDTH, width, 0);
  }
  void add_encoding(flatbuffers::Offset<flatbuffers::String> encoding) {
    fbb_.AddOffset(Image::VT_ENCODING, encoding);
  }
  void add_is_bigendian(uint8_t is_bigendian) {
    fbb_.AddElement<uint8_t>(Image::VT_IS_BIGENDIAN, is_bigendian, 0);
  }
  void add_step(uint32_t step) {
    fbb_.AddElement<uint32_t>(Image::VT_STEP, step, 0);
  }
  void add_data(flatbuffers::Offset<flatbuffers::Vector<uint8_t>> data) {
    fbb_.AddOffset(Image::VT_DATA, data);
  }
  explicit ImageBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ImageBuilder &operator=(const ImageBuilder &);
  flatbuffers::Offset<Image> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Image>(end);
    return o;
  }
};

inline flatbuffers::Offset<Image> CreateImage(
    flatbuffers::FlatBufferBuilder &_fbb,
    StereoImageType type = StereoImageType_Unknown,
    flatbuffers::Offset<Header> header = 0,
    uint32_t height = 0,
    uint32_t width = 0,
    flatbuffers::Offset<flatbuffers::String> encoding = 0,
    uint8_t is_bigendian = 0,
    uint32_t step = 0,
    flatbuffers::Offset<flatbuffers::Vector<uint8_t>> data = 0) {
  ImageBuilder builder_(_fbb);
  builder_.add_data(data);
  builder_.add_step(step);
  builder_.add_encoding(encoding);
  builder_.add_width(width);
  builder_.add_height(height);
  builder_.add_header(header);
  builder_.add_is_bigendian(is_bigendian);
  builder_.add_type(type);
  return builder_.Finish();
}

inline flatbuffers::Offset<Image> CreateImageDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    StereoImageType type = StereoImageType_Unknown,
    flatbuffers::Offset<Header> header = 0,
    uint32_t height = 0,
    uint32_t width = 0,
    const char *encoding = nullptr,
    uint8_t is_bigendian = 0,
    uint32_t step = 0,
    const std::vector<uint8_t> *data = nullptr) {
  return airsim_to_ros::CreateImage(
      _fbb,
      type,
      header,
      height,
      width,
      encoding ? _fbb.CreateString(encoding) : 0,
      is_bigendian,
      step,
      data ? _fbb.CreateVector<uint8_t>(*data) : 0);
}

inline const airsim_to_ros::Image *GetImage(const void *buf) {
  return flatbuffers::GetRoot<airsim_to_ros::Image>(buf);
}

inline bool VerifyImageBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<airsim_to_ros::Image>(nullptr);
}

inline void FinishImageBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<airsim_to_ros::Image> root) {
  fbb.Finish(root);
}

}  // namespace airsim_to_ros

#endif  // FLATBUFFERS_GENERATED_IMAGE_AIRSIM_TO_ROS_H_
