/*

  Q.write a program which accept redius of circle from user and calculate its area consider value of PI as 3.14 (area=PI*redius*redius).
*/
//////////////////////////////////////////////////////////////////////////////
//
//   Function name :circlearea
//   Description   :calculate the area of circle
//   Input         :float
//   Output        :double
//   Author        :maruti kondiba waghmode
//   Date          :31-10-2026
//
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

double circlearea(float fradius)
{
  float PI = 3.14f;
  double darea = 0.0;

  darea = PI * fradius * fradius;

  return darea;
}

int main()
{
  float fvalue = 0.0f;
  double dret = 0.0;

  printf("enter redius:");
  scanf("%f", &fvalue);

  dret = circlearea(fvalue);

  printf("circle of area is: %.4lf\n", dret);

  return EXIT_SUCCESS;
}