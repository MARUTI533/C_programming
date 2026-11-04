/*

  Q.write a program which accept number from user and count frequency of 4 in it.

*/
/////////////////////////////////////////////////////////////////////////////
//
//   Function name :countfour
//   Description   :check frequency of 4 in it.
//   Input         :int
//   Output        :int
//   Author        :maruti kondiba waghmode
//   Date          :03-11-2026
//
//
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int countfour(int ino)
{

  int icnt = 0;
  int icount = 0;

  while (ino != 0)
  {
    icnt = ino % 10;

    if (icnt == 4)
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

  iret = countfour(ivalue);

  printf("%d\n", iret);

  return EXIT_SUCCESS;
}