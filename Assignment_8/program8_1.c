/*

  Q.write a program which accept number from user and if number is less than 50 then print small, if it is grater than 50 and less than 100 then print medium, if it is grater than 100 then print large.

*/

///////////////////////////////////////////////////////////////////////////////
//
//   Function name :number
//   Description   :print the lavel of number.
//   Input         :int
//   Output        :int
//   Author        :maruti kondiba waghmode
//   Date          :31-10-2026
//
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void number(int ino)
{

  if (ino < 1)
  {
    printf("ivalid\n");
  }

  if (ino > 1 && ino <= 50)
  {
    printf("small\n");
  }

  else if (ino > 50 && ino <= 100)
  {
    printf("medium\n");
  }

  else if (ino > 100)
  {
    printf("large\n");
  }
}

int main()
{

  int ivalue = 0;

  printf("enter the value:\n");
  scanf("%d", &ivalue);

  number(ivalue);

  return EXIT_SUCCESS;
}