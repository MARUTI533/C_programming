/*
  Q.write a program which accept string from user and display only digits on that string.

*/
////////////////////////////////////////////////////////////////////////////
//   Function name :displaydigit
//   Description   :display only digits from string
//   Input         :char[]
//   Output        :void
//   Author        :maruti kondiba waghmode
//   Date          :25-11-2026
//
//
///////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

void displaydigit(char *str)
{
  while (*str)
  {
    if (*str >= '0' && *str <= '9')
    {
      printf("%c", *str);
    }
    str++;
  }
}

int main()
{
  char arr[20];

  printf("Enter a string: ");
  scanf("%[^\n]s", arr);

  displaydigit(arr);

  return EXIT_SUCCESS;
}