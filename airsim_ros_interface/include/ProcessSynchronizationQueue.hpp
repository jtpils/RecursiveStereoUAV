#ifndef PROCESSSYNCHRONIZATIONQUEUE_HPP_
#define PROCESSSYNCHRONIZATIONQUEUE_HPP_

#include <boost/interprocess/sync/interprocess_mutex.hpp>
#include <boost/interprocess/sync/interprocess_condition.hpp>

struct ImageMetaData
{
    ImageMetaData()
      :  image_is_bigendian_(false), header_frame_id_(""), image_encoding_("")
    {}
    
    std::uint8_t header_stamp_sec_;
    std::uint8_t header_stamp_nsec_;
    std::uint8_t header_seq_;
    std::string header_frame_id_;
    std::uint32_t image_height_;
    std::uint32_t image_width_;
    std::string image_encoding_;
    bool image_is_bigendian_;
    std::uint32_t image_step_;
};

struct ProcessSynchronizationQueue
{
   ProcessSynchronizationQueue()
      :  message_available_(false)
   {}

   //Mutex to protect access to the queue
   boost::interprocess::interprocess_mutex      mutex_;

   //Condition to wait when the queue is empty
   boost::interprocess::interprocess_condition  condition_empty_;

   //Condition to wait when the queue is full
   boost::interprocess::interprocess_condition  condition_full_;

   //Number of sub-messages to load
   std::uint8_t number_sub_messages_;

   //Is there any message
   bool message_available_;
   
   //Additional meta information on image
   ImageMetaData message_image_information_;
};

#endif // #ifndef PROCESSSYNCHRONIZATIONQUEUE_HPP_