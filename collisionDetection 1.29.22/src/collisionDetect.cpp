#include "vex.h"
using namespace vex;

int collisionCount = 0;

void collisionCallback(){
  collisionCount++;
  Brain.Screen.printAt(10, 20, "Collision!");
  wait(500, msec);
  Brain.Screen.clearScreen();
}

void printCollisionCount(){
  while(true){
    Brain.Screen.printAt(10, 40, "%d", collisionCount);
  }
}

void detectCollisions(void){
  fabric.calibrate();
  while(fabric.isCalibrating()){}
  thread t1(printCollisionCount);
  while(true){
    fabric.collision(collisionCallback(), );
  }
}