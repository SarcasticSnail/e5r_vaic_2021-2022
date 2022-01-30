#include "vex.h"

using namespace vex;

// A global instance of brain used for printing to the V5 brain screen
brain Brain;

motor         leftWheel(PORT20, ratio18_1, false);
motor         rightWheel(PORT19, ratio18_1, true);
motor_group   wheels(leftWheel, rightWheel);

inertial      fabric(PORT12);



/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 *
 * This should be called at the start of your int main function.
 */
void vexcodeInit(void) {
  // Nothing to initialize
}