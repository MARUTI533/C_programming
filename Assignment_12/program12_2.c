/*

  Q.write a program which accept number from user and check whether it contains 0 in it or not.

*/
/////////////////////////////////////////////////////////////////////////////
//
//   Function name :chkzero
//   Description   :accept number from user and check check this number contains 0 or not
//   Input         :int
//   Output        :int
//   Author        :maruti kondiba waghmode
//   Date          :03-11-2026
//
//
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL chkzero(int ino)
{

  int icnt = 0;

  while (ino != 0)
  {
    icnt = ino % 10;

    if (icnt == 0)
    {
      return TRUE;
    }
    ino = ino / 10;
  }
  return FALSE;
}

int main()
{
  int ivalue = 0;
  BOOL bret = FALSE;

  printf("enter number:\n");
  scanf("%d", &ivalue);

  bret = chkzero(ivalue);

  if (bret == TRUE)
  {
    printf("it contsins zero\n");
  }
  else
  {
    printf("thair is no zero\n");
  }

  return EXIT_SUCCESS;
}