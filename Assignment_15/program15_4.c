/*

  Q.write a program which accept three number from user and print its multiplication.


*/
/////////////////////////////////////////////////////////////////////////////
//   Function name :multiply
//   Description   :calculate multiplication of three numbers
//   Input         :int,int,int
//   Output        :int
//   Author        :maruti kondiba waghmode
//   Date          :04-11-2026
//
//
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int multiplay(int ino1, int ino2, int ino3)
{
  int ires = 1;

  if (ino1 == 0 && ino2 == 0 && ino3 == 0)
  {
    return;
  }

  if (ino1 != 0)
  {
    ires = ires * ino1;
  }
  if (ino2 != 0)
  {
    ires = ires * ino2;
  }
  if (ino3 != 0)
  {
    ires = ires * ino3;
  }

  return ires;
}

int main()
{

  int ivalue1 = 0, ivalue2 = 0, ivalue3 = 0;
  int iret = 0;

  printf("enter three numbers\n");
  scanf("%d %d %d", &ivalue1, &ivalue2, &ivalue3);

  iret = multiplay(ivalue1, ivalue2, ivalue3);

  printf("multiplication is %d\n", iret);

  return EXIT_SUCCESS;
}