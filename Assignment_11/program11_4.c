/*

  Q.write a program which accept range from user and return addition of all     even number in between that range.

*/
//////////////////////////////////////////////////////////////////////////////
//
//   Function name :rangesumyeven
//   Description   :finding the range between two nambers in that enven numbers additon.
//   Input         :int,int
//   Output        :int
//   Author        :maruti kondiba waghmode
//   Date          :03-11-2026
//
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int rangesumeven(int istart, int iend)
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
    if ((icnt % 2) == 0)
    {
      iret = iret + icnt;
    }
  }
  return iret;
}

int main()
{
  int ivalue1 = 0, ivalue2 = 0;
  int ires = 0;

  printf("enter the starting point:\n");
  scanf("%d", &ivalue1);

  printf("enter the ending point:\n");
  scanf("%d", &ivalue2);

  ires = rangesumeven(ivalue1, ivalue2);

  printf("that is the range between two nambers in that enven numbers additon is: %d\n", ires);

  return EXIT_SUCCESS;
}