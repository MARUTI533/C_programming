/*

  Q.write a program which accept N and print first 5 multiples of N.

*/

///////////////////////////////////////////////////////////////////////////////
//
//   Function name :multipdisplay
//   Description   :multiples of N numbers.
//   Input         :int
//   Output        :int
//   Author        :maruti kondiba waghmode
//   Date          :31-10-2026
//
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void multipledisplay(int ino)
{
  int icnt = 0;
  int imulti = 0;

  for (icnt = 1; icnt <= ino; icnt++)
  {
    imulti = icnt * ino;
    printf("%d\t", imulti);
  }
}

int main()
{
  int ivalue = 0;

  printf("enter the value\n");
  scanf("%d", &ivalue);

  multipledisplay(ivalue);

  return EXIT_SUCCESS;
}