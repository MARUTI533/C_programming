/*

  Q.write a program which accept two number from user and check whether that number are equal or not.

*/
/////////////////////////////////////////////////////////////////////////////
//
//   Function name :chkequal
//   Description   :check number is equal or not
//   Input         :int,int
//   Output        :int
//   Author        :maruti kondiba waghmode
//   Date          :04-11-2026
//
//
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

typedef BOOL;
#define true 1
#define false 0

BOOL chkgrater(int ino1, int ino2)
{

  if (ino1 == ino2)
  {
    return true;
  }
  else
  {
    return false;
  }
}

int main()
{

  int ivalue1 = 0, ivalue2 = 0;
  BOOL bret = false;

  printf("enter two numbers\n");
  scanf("%d %d", &ivalue1, &ivalue2);

  bret = chkgrater(ivalue1, ivalue2);

  if (bret == true)
  {
    printf("Equal\n");
  }
  else
  {
    printf("Not Equal \n");
  }

  return EXIT_SUCCESS;
}