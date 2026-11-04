/*

  Q.writer program which accept number from user and return the count of digit in between 3 and 7.

*/

/////////////////////////////////////////////////////////////////////////////
//
//   Function name :countrange.
//   Description   :count range number.
//   Input         :int
//   Output        :int
//   Author        :maruti kondiba waghmode
//   Date          :03-11-2026
//
//
//////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int countrange(int ino)
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
    if ((idigit > 3) && (idigit < 7))
    {
      icount++;
    }
    ino = ino / 10;
  }
  return icount++;
}

int main()
{
  int ivalue = 0;
  int iret = 0;

  printf("enter number:\n");
  scanf("%d", &ivalue);

  iret = countrange(ivalue);

  printf("count of range number is:%d\n", iret);

  return EXIT_SUCCESS;
}