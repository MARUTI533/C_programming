/*

    Q.accept number of rows and number of columns from user and display below pattern.

    output:

*/

/////////////////////////////////////////////////////////////////////////////
//   Function name :pattern
//   Description   :display the pattern based on the number of rows and columns.
//   Input         :int, int
//   Output        :void
//   Author        :maruti kondiba waghmode
//   Date          :24-11-2026
//
//
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void pattern(int irows, int icol)
{
  int i = 0, j = 0;

  for (i = 1; i <= irows; i++)
  {
    for (j = 1; j <= icol; j++)
    {
      if (i == 1 || i == irows)
      {
        printf("%d ", j);
      }
      else if (j == 1 || j == icol || j == i)
      {
        printf("%d ", j);
      }
      else
      {
        printf("  ");
      }
    }
    printf("\n");

    if (i > 1 && i < irows - 1)
    {
      printf("\n");
    }
  }
}

int main()
{
  int ivalue1 = 0, ivalue2 = 0;

  printf("enter number of rows and columns\n");

  scanf("%d %d", &ivalue1, &ivalue2);

  pattern(ivalue1, ivalue2);

  return EXIT_SUCCESS;
}