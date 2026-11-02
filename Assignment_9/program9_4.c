/*

  Q.write a program to find odd factorial of given number.
*/
//////////////////////////////////////////////////////////////////////////////
//
//   Function name :oddfactorial
//   Description   :find the odd factorial and multiplay this number.
//   Input         :int
//   Output        :int
//   Author        :maruti kondiba waghmode
//   Date          :31-10-2026
//
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int oddfactorial(int ino)
{
  int icnt = 0;
  int ires = 0;

  ires = 1;

  if (ino < 0)
  {
    ino = -ino;
  }

  for (icnt = 1; icnt <= ino; icnt = icnt + 2)
  {
    ires = ires * icnt;
  }
  return ires;
}

int main()
{
  int ivalue = 0;
  int iret = 0;

  printf("enter the number:\n");
  scanf("%d", &ivalue);

  iret = oddfactorial(ivalue);

  printf("odd factorial of number is: %d ", iret);

  return EXIT_SUCCESS;
}