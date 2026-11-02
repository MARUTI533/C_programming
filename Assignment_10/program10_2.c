/*

  Q.write a program which accept width & height of rectangle from user and calculate its area. (area=width*height)

*/
//////////////////////////////////////////////////////////////////////////////
//
//   Function name :rectarea
//   Description   :calculate the area of rectangle
//   Input         :float,float
//   Output        :double
//   Author        :maruti kondiba waghmode
//   Date          :31-10-2026
//
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

double rectarea(float fwidth, float fheight)
{
  float farea = 0.0f;

  farea = fwidth * fheight;

  return farea;
}

int main()
{
  float fvalue1 = 0.0f, fvalue2 = 0.0f;
  double dret = 0.0;

  printf("enter width:");
  scanf("%f", &fvalue1);

  printf("enter height:");
  scanf("%f", &fvalue2);

  dret = rectarea(fvalue1, fvalue2);

  printf("circle of area is: %.3lf\n", dret);

  return EXIT_SUCCESS;
}