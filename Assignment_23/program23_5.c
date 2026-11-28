/*
  Q.write a program which accept string from user and count number of white spaces from that string.
*/
////////////////////////////////////////////////////////////////////////////
//   Function name :countwhitespace
//   Description   :count number of white spaces in a string
//   Input         :char[]
//   Output        :int
//   Author        :maruti kondiba waghmode
//   Date          :25-11-2026
//
//
///////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

int countwhitespace(char *str)
{
  int count = 0;
  while (*str)
  {
    if (*str == ' ')
    {
      count++;
    }
    str++;
  }
  return count;
}

int main()
{
  char arr[20];
  int result;

  printf("Enter a string: ");
  scanf("%[^\n]s", arr);

  result = countwhitespace(arr);

  printf("Number of white spaces: %d\n", result);

  return EXIT_SUCCESS;
}
