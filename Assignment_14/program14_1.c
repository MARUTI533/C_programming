/*

  Q.write a program which aceept number from user and display its multiplication of factor.

*/

/////////////////////////////////////////////////////////////////////////////
//
//   Function name :multifact
//   Description   :multiplication of factor.
//   Input         :int
//   Output        :int
//   Author        :maruti kondiba waghmode
//   Date          :03-11-2026
//
//
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int multifact(int ino)
{
  int icnt = 0;
  int iret = 1;

  for (icnt = 1; icnt <= ino / 2; icnt++)
  {
    if (ino % icnt == 0)
    {
      iret = iret * icnt;
    }
  }
  return iret;
}

int main()
{
  int ivalue = 0;
  int ires = 0;

  printf("enter number:\n");
  scanf("%d", &ivalue);

  ires = multifact(ivalue);

  printf("%d\n", ires);

  return EXIT_SUCCESS;
}