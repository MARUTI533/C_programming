/*
  Q.write a program which accept string from user and convert that string into lower case.

*/
/////////////////////////////////////////////////////////////////////////////
//   Function name :strlwrx
//   Description   :convert string to lower case
//   Input         :char[]
//   Output        :void
//   Author        :maruti kondiba waghmode
//   Date          :25-11-2026
//
//
///////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

void strlwrx(char *str)
{
  while (*str)
  {
    if (*str >= 'A' && *str <= 'Z')
    {
      *str = *str + 32;
    }
    str++;
  }
}

int main()
{
  char arr[20];

  printf("Enter a string: ");
  scanf("%[^\n]s", arr);

  strlwrx(arr);

  printf("modified string: %s\n", arr);

  return EXIT_SUCCESS;
}