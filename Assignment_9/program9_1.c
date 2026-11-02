/*

  Q.write a program which accept number from user and display bellow pattern.

*/
//////////////////////////////////////////////////////////////////////////////
//
//   Function name :display
//   Description   :pritn pattern
//   Input         :int
//   Output        :int
//   Author        :maruti kondiba waghmode
//   Date          :31-10-2026
//
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void display(int ino)
{
  int icnt = 0;

  if (ino < 0)
  {
    ino = -ino;
  }

  for (icnt = 1; icnt <= ino; icnt++)
  {
    printf("*\t");
  }
  for (icnt = 1; icnt <= ino; icnt++)
  {
    printf("#\t");
  }
}

int main()
{
  int ivalue = 0;

  printf("enter the number:\n");
  scanf("%d", &ivalue);

  display(ivalue);

  return EXIT_SUCCESS;
}