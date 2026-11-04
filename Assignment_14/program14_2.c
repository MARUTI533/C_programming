/*

  Q.write a program which accept number from user and display its  factor in decreasing order.

*/

/////////////////////////////////////////////////////////////////////////////
//
//   Function name :factrev
//   Description   :reverse the factor.
//   Input         :int
//   Output        :int
//   Author        :maruti kondiba waghmode
//   Date          :03-11-2026
//
//
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void factrev(int ino)
{
  int icnt = 0;

  for (icnt = ino / 2; icnt >= 1; icnt--)
  {
    if (ino % icnt == 0)
    {
      printf("%d\t", icnt);
    }
  }
}

int main()
{

  int ivalue = 0;

  printf("enter number:\n");
  scanf("%d", &ivalue);

  factrev(ivalue);

  return EXIT_SUCCESS;
}