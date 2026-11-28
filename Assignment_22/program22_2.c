/*

    Q.accept number from user and display below pattern.

    output: 5      #       4       #       3       #       2       #     1        #

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

  for (icnt = ino; icnt >= 1; icnt--)
  {
    printf("%d \t#\t", icnt);
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