/*
  Q.write a program which accept string from user and convert that string into toggle case.

*/
////////////////////////////////////////////////////////////////////////////
//   Function name :strtogrx
//   Description   :convert string to toggle case
//   Input         :char[]
//   Output        :void
//   Author        :maruti kondiba waghmode
//   Date          :25-11-2026
//
//
///////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

void strtogrx(char *str)
{
  while (*str)
  {
    if (*str >= 'a' && *str <= 'z')
    {
      *str = *str - 32;
    }
    else if (*str >= 'A' && *str <= 'Z')
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

  strtogrx(arr);

  printf("modified string: %s\n", arr);

  return EXIT_SUCCESS;
}