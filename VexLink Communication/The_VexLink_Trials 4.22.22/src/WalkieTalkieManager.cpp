#include "vex.h"
using namespace vex;
//manager

int sendTask(){
  //wait for link
  while(!LinkB.isLinked()){
    this_thread::sleep_for(50);
  }

  uint8_t buffer[] = {0, 1, 2, 3, 4, 5, 6, 7};

  //semd demo message
  while(1){
    LinkB.send(buffer, sizeof(buffer));
    buffer[0]++;
    this_thread::sleep_for(500);
  }

  return 0;
}