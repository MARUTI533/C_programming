/*

    Q.write a program which accept number from user and print that number of $ & * on screen.


*/

//////////////////////////////////////////////////////////
//
//   Function name :pattern
//   Description   :print the pattern
//   Input         :int
//   Output        :int
//   Author        :maruti kondiba waghmode
//   Date          :31-10-2026
//
//
///////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void pattern(int ino)
{

  int icnt = 0;

  if (ino < 0)
  {
    ino = -ino;
  }

  for (icnt = 1; icnt <= ino; icnt++)
  {
    printf(" * "
           " $ ");
  }
}

int main()
{
  int ivalue = 0;

  printf("enter the value\n");
  scanf("%d", &ivalue);

  pattern(ivalue);

  EXIT_SUCCESS;
}