/*

  Q.writer program which accept number from user and return difference between summation of even digit and summation of odd digit.

*/

/////////////////////////////////////////////////////////////////////////////
//
//   Function name :counteven,countodd.
//   Description   :diff.
//   Input         :int
//   Output        :int
//   Author        :maruti kondiba waghmode
//   Date          :03-11-2026
//
//
//////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int counteven(int ino1)
{
  int idigit = 0;
  int isum = 0;

  if (ino1 < 0)
  {
    ino1 = -ino1;
  }

  while (ino1 != 0)
  {
    idigit = ino1 % 10;
    if (idigit % 2 == 0)
    {
      isum = isum + idigit;
    }
    ino1 = ino1 / 10;
  }
  return isum;
}

int countodd(int ino2)
{
  int idigit1 = 0;
  int isum1 = 0;

  if (ino2 < 0)
  {
    ino2 = -ino2;
  }

  while (ino2 != 0)
  {
    idigit1 = ino2 % 10;
    if (idigit1 % 2 == 1)
    {
      isum1 = isum1 + idigit1;
    }
    ino2 = ino2 / 10;
  }
  return isum1;
}

int main()
{
  int ivalue = 0;
  int iret1 = 0;
  int iret2 = 0;
  int ires = 0;

  printf("enter number:\n");
  scanf("%d", &ivalue);

  iret1 = counteven(ivalue);
  iret2 = countodd(ivalue);

  ires = iret1 - iret2;

  printf("differance is:%d\n", ires);

  return EXIT_SUCCESS;
}