/*

  Q.write program which accept number from user and display its table reverse order.
*/

///////////////////////////////////////////////////////////////////////////////
//
//   Function name :table
//   Description   :accept numbre from user and print that number table in reverse order.
//   Input         :int
//   Output        :int
//   Author        :maruti kondiba waghmode
//   Date          :31-10-2026
//
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void tablerev(int ino)
{
  int icnt = 0;
  int itable = 0;

  if (ino < 0)
  {
    ino = -ino;
  }

  for (icnt = 10; icnt >= 1; icnt--)
  {
    itable = icnt * ino;
    printf("%d\t", itable);
  }
}

int main()
{

  int ivalue = 0;

  printf("enter the value:\n");
  scanf("%d", &ivalue);

  tablerev(ivalue);

  return EXIT_SUCCESS;
}