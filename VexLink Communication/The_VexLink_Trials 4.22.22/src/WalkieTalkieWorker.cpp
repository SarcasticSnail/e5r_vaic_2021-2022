#include "vex.h"
using namespace vex;
//worker


void recieve_message(uint8_t *buffer, int32_t length){
  printf("recieve_message: %ld bytes were receine\n", length);
  for(int i = 0; i < length; i++){
    printf("%02X ", buffer[i]);
  }
  printf("\n");
}