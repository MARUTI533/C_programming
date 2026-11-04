/*

  Q.write a program which accept number from user and display its digits in revers order.

*/
//////////////////////////////////////////////////////////////////////////////
//
//   Function name :displaydigit
//   Description   :displya digit in reverse order
//   Input         :int
//   Output        :int
//   Author        :maruti kondiba waghmode
//   Date          :03-11-2026
//
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void displaydigit(int ino)
{

  int idigit = 0;

  if (ino < 0)
  {
    ino = -ino;
  }

  while (ino != 0)
  {
    idigit = ino % 10;
    printf("%d\n", idigit);
    ino = ino / 10;
  }
}

int main()
{
  int ivalue = 0;

  printf("enter number:\n");
  scanf("%d", &ivalue);

  displaydigit(ivalue);

  return EXIT_SUCCESS;
}