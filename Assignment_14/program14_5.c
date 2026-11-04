/*

  Q.write a program which accept number from user and return differamce between summation of all its factors and non factor.

*/

///////////////////////////////////////////////////////////////////////////////////
//
//   Function name :sumnonfact
//   Description   :differance between summation of all its factors and non factor.
//   Input         :int
//   Output        :int
//   Author        :maruti kondiba waghmode
//   Date          :04-11-2026
//
//
////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int factdiff(int ino)
{
  int icnt = 0;
  int isum1 = 0, isum2 = 0;

  for (icnt = 1; icnt <= ino / 2; icnt++)
  {
    if (ino % icnt == 0)
    {
      isum1 = isum1 + icnt;
    }
  }
  for (icnt = 1; icnt <= ino; icnt++)
  {
    if (ino % icnt != 0)
    {
      isum2 = isum2 + icnt;
    }
  }
  return isum1 - isum2;
}

int main()
{

  int ivalue = 0;
  int ires = 0;

  printf("enter number:\n");
  scanf("%d", &ivalue);

  ires = factdiff(ivalue);

  printf("%d", ires);

  return EXIT_SUCCESS;
}