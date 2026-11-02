/*

  Q.write a program which accept area in squre feet and convert it into square meter
*/
//////////////////////////////////////////////////////////////////////////////
//
//   Function name :squremeter
//   Description   :conver the feet into meter
//   Input         :int
//   Output        :double
//   Author        :maruti kondiba waghmode
//   Date          :01-11-2026
//
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

double squaremeter(int ino)
{
  double dcnt = 0.092903;
  double dres = 0;

  dres = dcnt * ino;

  return dres;
}

int main()
{
  int ivalue = 0;
  double dret = 0;

  printf("enter the number:\n");
  scanf("%d", &ivalue);

  dret = squaremeter(ivalue);

  printf("in square meter: %.6lf ", dret);

  return EXIT_SUCCESS;
}