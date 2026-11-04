/*

  Q.writer program which accept number from user and return the count of odd digit.

*/
/////////////////////////////////////////////////////////////////////////////
//
//   Function name :countodd
//   Description   :count odd number.
//   Input         :int
//   Output        :int
//   Author        :maruti kondiba waghmode
//   Date          :03-11-2026
//
//
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int countodd(int ino)
{
  int idigit = 0;
  int icount = 0;

  if (ino < 0)
  {
    ino = -ino;
  }

  while (ino != 0)
  {
    idigit = ino % 10;
    if (idigit % 2 == 1)
    {
      icount++;
    }
    ino = ino / 10;
  }
  return icount;
}

int main()
{
  int ivalue = 0;
  int iret = 0;

  printf("enter number:\n");
  scanf("%d", &ivalue);

  iret = countodd(ivalue);

  printf("count of odd number is:%d\n", iret);

  return EXIT_SUCCESS;
}