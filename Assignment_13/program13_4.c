/*

  Q.writer program which accept number from user and return multiplication of all digit.

*/

/////////////////////////////////////////////////////////////////////////////
//
//   Function name :multidigits.
//   Description   :multiplication of digit.
//   Input         :int
//   Output        :int
//   Author        :maruti kondiba waghmode
//   Date          :03-11-2026
//
//
//////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int multidigits(int ino)
{
  int idigit = 0;
  int icount = 1;

  if (ino < 0)
  {
    ino = -ino;
  }

  while (ino != 0)
  {
    idigit = ino % 10;

    if (idigit != 0)
    {
      icount = icount * idigit;
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

  iret = multidigits(ivalue);

  printf("multiplication is:%d\n", iret);

  return EXIT_SUCCESS;
}