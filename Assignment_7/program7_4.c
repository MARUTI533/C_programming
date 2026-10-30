/*

  Q.write a program which accepts N from user and print all odd number up to N.

*/

///////////////////////////////////////////////////////////////////////////////
//
//   Function name :oddisplay
//   Description   :print odd number
//   Input         :int
//   Output        :int
//   Author        :maruti kondiba waghmode
//   Date          :31-10-2026
//
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void odddisplay(int ino)
{
  int icnt = 0;

  for (icnt = 1; icnt <= ino; icnt++)
  {
    if ((icnt % 2) == 1)
    {
      printf("%d\t", icnt);
    }
  }
}

int main()
{
  int ivalue = 0;

  printf("enter the value\n");
  scanf("%d", &ivalue);

  odddisplay(ivalue);

  return EXIT_SUCCESS;
}