/*

  Q.write a program which accept temperature in fahrenheit and convert it into celsius
*/
//////////////////////////////////////////////////////////////////////////////
//
//   Function name :FHtoCS
//   Description   :conver the FH into CS
//   Input         :float
//   Output        :double
//   Author        :maruti kondiba waghmode
//   Date          :01-11-2026
//
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

double FHtoCS(float ftemp)
{

  double dcs = 0;

  dcs = (ftemp - 32) * (5.0 / 9.0);

  return dcs;
}

int main()
{
  float fvalue = 0.0f;
  double dret = 0.0;

  printf("enter temperature in fahrenheit:\n");
  scanf("%f", &fvalue);

  dret = FHtoCS(fvalue);

  printf("value in celsius is: %lf ", dret);

  return EXIT_SUCCESS;
}