//
//  main.c
//  Triangle
//
//  Created by Josiah Mory on 4/8/17.
//  Copyright © 2017 kickinbahk Productions. All rights reserved.
//

#include <stdio.h>

float remainingAngle(float angle1, float angle2) {
  float totalOfAngles = 180.0;
  float twoAnglesCombined = angle1 + angle2;
  float remainder = totalOfAngles - twoAnglesCombined;
  return remainder;
}

int main(int argc, const char * argv[]) {
  float angleA = 30.0;
  float angleB = 60.0;
  float angleC = remainingAngle(angleA, angleB);
  printf("The third angle is %.2f.\n", angleC);
  return 0;
}
