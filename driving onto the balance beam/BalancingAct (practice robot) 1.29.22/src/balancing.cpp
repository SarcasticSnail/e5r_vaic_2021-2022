#include "vex.h"
using namespace vex;

void printPitch(){
  while(true){
    Brain.Screen.printAt(10, 200, "%f", fabric.pitch());
  }
}

void balance( double speed ){

  fabric.calibrate();
  while(fabric.isCalibrating());
  thread t1(printPitch);

  wheels.spin(forward, speed, vex::velocityUnits::pct);

  //not yet on ramp
  Brain.Screen.print("not on ramp...");
  while (fabric.pitch() < 3){}
  Brain.Screen.print("on ramp...");
  //ok it's on the ramp
  while (fabric.pitch() > 3){}
  Brain.Screen.print("stable...");
  //yay its steady & balancing
  wheels.stop(brake);

}