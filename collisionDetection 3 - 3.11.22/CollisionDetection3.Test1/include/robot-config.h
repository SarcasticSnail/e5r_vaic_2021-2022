using namespace vex;

extern brain Brain;

extern motor leftWeel;
extern motor rightWheel;
extern motor_group wheels;

extern inertial fabric;
extern distance wavy;
extern optical allSeeing;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 *
 * This should be called at the start of your int main function.
 */
void vexcodeInit(void);
