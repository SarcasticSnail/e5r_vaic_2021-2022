/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\wazsu                                            */
/*    Created:      Wed Apr 06 2022                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"
using namespace vex;

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();

  //manager
  if(botType == 0){
    //start demo task
    thread t1(sendTask);

    //show link status
    while(1){
      Brain.Screen.printAt(10, 50, true, "Link: %s", LinkB.isLinked()? "ok ":"--");
      //allow other tasks to run, not important now but will be w/ other stuff in program
      this_thread::sleep_for(50);
    }
  }
  //worker
  else if (botType == 1){
    //register callback
    LinkB.received(recieve_message);
    
    //show link status
    while(1){
      Brain.Screen.printAt(10, 50, true, "Link: %s", LinkB.isLinked()? "ok ":"--");
      //allow other tasks to run, not important now but will be w/ other stuff in program
      this_thread::sleep_for(50);
    }

  }
  
}
