/*

    Q.accept number from user and display below pattern.

    output: 1       *       2       *       3       *       4       *     5        *
*/

/////////////////////////////////////////////////////////////////////////////
//   Function name :pattern
//   Description   :display pattern
//   Input         :int
//   Output        :void
//   Author        :maruti kondiba waghmode
//   Date          :25-11-2026
//
//
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void pattern(int ino)
{
  int icnt = 0;

  for (icnt = 1; icnt <= ino; icnt++)
  {
    printf("%d \t*\t", icnt);
  }
}

int main()
{
  int ivalue = 0;

  printf("enter number of elements\n");

  scanf("%d", &ivalue);

  pattern(ivalue);

  return EXIT_SUCCESS;
}