/*

  Q.write a program which accept range from user and display all even number is between that range.

*/

//////////////////////////////////////////////////////////////////////////////
//
//   Function name :rangedisplayeven
//   Description   :find the range between two numbers and display even numbers
//   Input         :int,int
//   Output        :int
//   Author        :maruti kondiba waghmode
//   Date          :02-11-2026
//
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void rangedisplayeven(int istart, int iend)
{
  int icnt = 0;

  if (istart > iend)
  {
    printf("this is invalid value\n");
  }

  for (icnt = istart; icnt <= iend; icnt++)
  {
    if (icnt % 2 == 0)
    {
      printf("%d\t", icnt);
    }
  }
}

int main()
{
  int ivalue1 = 0, ivalue2 = 0;

  printf("enter starting poinr:\n");
  scanf("%d", &ivalue1);

  printf("enter starting poinr:\n");
  scanf("%d", &ivalue2);

  rangedisplayeven(ivalue1, ivalue2);

  return EXIT_SUCCESS;
}