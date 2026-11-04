/*

  Q.writer program which accept number from user and return the count of even digit.

*/
/////////////////////////////////////////////////////////////////////////////
//
//   Function name :counteven
//   Description   :count even number.
//   Input         :int
//   Output        :int
//   Author        :maruti kondiba waghmode
//   Date          :03-11-2026
//
//
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int counteven(int ino)
{
  int idigit = 0;
  int icount = 0;

  while (ino != 0)
  {
    idigit = ino % 10;
    if (idigit % 2 == 0)
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

  iret = counteven(ivalue);

  printf("count of even number is:%d\n", iret);

  return EXIT_SUCCESS;
}