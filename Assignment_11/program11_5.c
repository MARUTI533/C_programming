/*

  Q.write program which accept range from user and display all numbers in between that range.

*/

//////////////////////////////////////////////////////////////////////////////
//
//   Function name :rangedisplayrev
//   Description   :displaying the range of two numbers in reverce order.
//   Input         :int,int
//   Output        :int
//   Author        :maruti kondiba waghmode
//   Date          :03-11-2026
//
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void rangedisplayrev(int istart, int iend)
{
  int icnt = 0;

  if (istart > iend)
  {
    printf("this is invalid range\n");
  }

  for (icnt = iend; icnt >= istart; icnt--)
  {
    printf("%d\t", icnt);
  }
}

int main()
{
  int ivalue1 = 0, ivalue2 = 0;

  printf("enter starting point:\n");
  scanf("%d", &ivalue1);

  printf("enter ending point:\n");
  scanf("%d", &ivalue2);

  rangedisplayrev(ivalue1, ivalue2);

  return EXIT_SUCCESS;
}