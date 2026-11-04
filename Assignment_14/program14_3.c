/*

  Q.write a program which accept number from user and display all its non factor .

*/

/////////////////////////////////////////////////////////////////////////////
//
//   Function name :nonfact
//   Description   :display non factors.
//   Input         :int
//   Output        :int
//   Author        :maruti kondiba waghmode
//   Date          :03-11-2026
//
//
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void nonfact(int ino)
{
  int icnt = 0;

  for (icnt = 1; icnt <= ino; icnt++)
  {
    if (ino % icnt != 0)
    {
      printf("%d\t", icnt);
    }
  }
}

int main()
{

  int ivalue = 0;

  printf("enter number:\n");
  scanf("%d", &ivalue);

  nonfact(ivalue);

  return EXIT_SUCCESS;
}