/*

  Q.write a program which accept distance in kilometre and convert it into meter.

*/
//////////////////////////////////////////////////////////////////////////////
//
//   Function name :KMtometer
//   Description   :conver the KM into meter
//   Input         :int
//   Output        :int
//   Author        :maruti kondiba waghmode
//   Date          :01-11-2026
//
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int KMtometer(int ino)
{
  int icnt = 1000;
  int ires = 0;

  ires = icnt * ino;

  return ires;
}

int main()
{
  int ivalue = 0;
  int iret = 0;

  printf("enter the number:\n");
  scanf("%d", &ivalue);

  iret = KMtometer(ivalue);

  printf("value in INR is: %d ", iret);

  return EXIT_SUCCESS;
}