/*

  Q.write a program which accept range from user and return addition of all number in betwen that range.


*/

//////////////////////////////////////////////////////////////////////////////
//
//   Function name :rangesum
//   Description   :find the range between two numbers and perform addition of that numbers
//   Input         :int,int
//   Output        :int
//   Author        :maruti kondiba waghmode
//   Date          :02-11-2026
//
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int rangesum(int istart, int iend)
{

  int icnt = 0;
  int iret = 0;

  if (istart > iend || istart < 0 || iend < 0)
  {
    printf("invalid range\n");
    return;
  }

  for (icnt = istart; icnt <= iend; icnt++)
  {
    iret = iret + icnt;
  }

  return iret;
}

int main()
{
  int ivalue1 = 0, ivalue2 = 0;
  int ires = 0;

  printf("enter starting poinr:\n");
  scanf("%d", &ivalue1);

  printf("enter starting poinr:\n");
  scanf("%d", &ivalue2);

  ires = rangesum(ivalue1, ivalue2);

  printf("sum of range is: %d\n", ires);

  return EXIT_SUCCESS;
}