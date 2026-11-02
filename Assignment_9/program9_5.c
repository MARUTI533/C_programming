/*

  Q.write a program which return differane between even factorial and odd factorial.
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

int evenfactorial(int ino)
{
  int icnt = 0;
  int ires1 = 0;

  ires1 = 1;

  if (ino < 0)
  {
    ino = -ino;
  }

  for (icnt = 2; icnt <= ino; icnt = icnt + 2)
  {
    ires1 = ires1 * icnt;
  }
  return ires1;
}
int oddfactorial(int ino)
{
  int icnt = 0;
  int ires2 = 0;

  ires2 = 1;

  if (ino < 0)
  {
    ino = -ino;
  }

  for (icnt = 1; icnt <= ino; icnt = icnt + 2)
  {
    ires2 = ires2 * icnt;
  }
  return ires2;
}

int main()
{
  int ivalue = 0;
  int iret1 = 0;
  int iret2 = 0;
  int final = 0;

  printf("enter the number:\n");
  scanf("%d", &ivalue);

  iret1 = evenfactorial(ivalue);
  iret2 = oddfactorial(ivalue);

  final = iret1 - iret2;

  printf("even factorial is: %d\n", iret1);
  printf("odd factorial is: %d\n", iret2);
  printf("factorial differance is: %d\n", final);

  return EXIT_SUCCESS;
}