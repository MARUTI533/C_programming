/*

    Q.accept number from user and display below pattern.

    output : A B C D E F G H I J

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
  char ch = 'A';

  for (icnt = 1, ch = 'A'; icnt <= ino; icnt++, ch++)
  {
    printf("%c\t", ch);
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