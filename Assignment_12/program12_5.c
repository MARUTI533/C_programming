/*

  Q.write a program which accept number from user and count frequency of such a digit are less than 6.

*/
/////////////////////////////////////////////////////////////////////////////
//
//   Function name :count
//   Description   :check frequency of such a digit is less than 6.
//   Input         :int
//   Output        :int
//   Author        :maruti kondiba waghmode
//   Date          :03-11-2026
//
//
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int count(int ino)
{

  int icnt = 0;
  int icount = 0;

  while (ino != 0)
  {
    icnt = ino % 10;

    if (icnt < 6)
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

  iret = count(ivalue);

  printf("%d\n", iret);

  return EXIT_SUCCESS;
}