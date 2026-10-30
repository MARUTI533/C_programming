/*

  Q.write a program which accept number from user and print its numbers line .

*/

///////////////////////////////////////////////////////////////////////////////
//
//   Function name :Display
//   Description   :user can give the number 2 then output will be -2 -1 0 1 2
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

  for (icnt = -ino; icnt <= ino; icnt++)
  {

    printf("%d\t", icnt);
  }
}

int main()

{
  int ivalue = 0;

  printf("enter the value\n");
  scanf("%d", &ivalue);

  display(ivalue);

  return EXIT_SUCCESS;
}