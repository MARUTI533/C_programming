/*

  Q.write a program which accept one number from user and check whether that number is grater than 100 or not.

*/
/////////////////////////////////////////////////////////////////////////////
//
//   Function name :chkgreater
//   Description   :check the number is greater than 100 or not.
//   Input         :int
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

BOOL chkgrater(int ino)
{

  if (ino > 100)
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

  int ivalue = 0;
  BOOL bret = false;

  printf("enter the number\n");
  scanf("%d", &ivalue);

  bret = chkgrater(ivalue);

  if (bret == true)
  {
    printf("Greater\n");
  }
  else
  {
    printf("Smaller\n");
  }

  return EXIT_SUCCESS;
}