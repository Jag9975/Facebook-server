#include "Core.h"

Core::Core(void)
{
  
}

Core::Core(std::string arg_host_url, std::string arg_vsID, std::string arg_class_id, std::string arg_object_id)
 : host_url { arg_host_url }, owner_vsID { arg_vsID }, class_id { arg_class_id }, 
   object_id { arg_object_id }
{
  
}
