/*

  Q.write a program to find factorial of given number.
*/

///////////////////////////////////////////////////////////////////////////////
//
//   Function name :factorial
//   Description   :print the factorial number.
//   Input         :int
//   Output        :int
//   Author        :maruti kondiba waghmode
//   Date          :31-10-2026
//
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int factorial(int ino)
{

  int icnt = 0;
  int ifact = 0;

  if (ino < 0)
  {
    ino = -ino;
  }

  for (icnt = 1, ifact = 1; icnt <= ino; icnt++)
  {
    ifact = ifact * icnt;
  }
  return ifact;
}

int main()
{

  int ivalue = 0;
  int iret = 0;

  printf("enter the value:\n");
  scanf("%d", &ivalue);

  iret = factorial(ivalue);

  printf("%d", iret);

  return EXIT_SUCCESS;
}