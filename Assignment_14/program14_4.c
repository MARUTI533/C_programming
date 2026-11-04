/*

  Q.write a program which accept number from user and display all its non factor .

*/

/////////////////////////////////////////////////////////////////////////////
//
//   Function name :sumnonfact
//   Description   :display non factors summation.
//   Input         :int
//   Output        :int
//   Author        :maruti kondiba waghmode
//   Date          :04-11-2026
//
//
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int sumnonfact(int ino)
{
  int icnt = 0;
  int isum = 0;

  for (icnt = 1; icnt <= ino; icnt++)
  {
    if (ino % icnt != 0)
    {
      isum = isum + icnt;
    }
  }
  return isum;
}

int main()
{

  int ivalue = 0;
  int ires = 0;

  printf("enter number:\n");
  scanf("%d", &ivalue);

  ires = sumnonfact(ivalue);

  printf("%d", ires);

  return EXIT_SUCCESS;
}