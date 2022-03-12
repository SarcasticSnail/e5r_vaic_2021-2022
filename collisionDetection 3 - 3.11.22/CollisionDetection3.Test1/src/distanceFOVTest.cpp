#include "vex.h"
using namespace vex;

void showDetection(){
  Brain.Screen.setPenColor(purple);
  Brain.Screen.printAt(10, 30, "Object Dist: %f", wavy.objectDistance(distanceUnits::mm));
  Brain.Screen.printAt(10, 50, "Object color: %f", allSeeing.hue());
  //optical sensor tree value (yellow) is range 50-70 (use little to no brightness or else colors get washed out)
  //range for distance sensor is ~130-150mm
}

void tooClose(){
  Brain.Screen.setPenColor(orange);
  if (wavy.objectDistance(distanceUnits::mm) < 130 && allSeeing.hue() > 48 && allSeeing.hue() < 70){
    Brain.Screen.printAt(10, 70, "it's a tree go get it!!!!!!!!!!!!!!!!!!!!!!!!!!");
  } else if (wavy.objectDistance(distanceUnits::mm) < 130){
    Brain.Screen.printAt(10, 70, "woah you're kinda close, back up buddy..................");
  } else {
    Brain.Screen.printAt(10, 70, "i'm not seeing anything nearby.........................");
  }
}