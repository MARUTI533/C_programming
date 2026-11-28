/*
    Q.Write a program which aceept string from user and count number of small characters.
*/
////////////////////////////////////////////////////////////////////////////
//   Function name :countSmall
//   Description   :count small characters in a string
//   Input         :char*
//   Output        :int
//   Author        :maruti kondiba waghmode
//   Date          :26-11-2026
//
//
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int countSmall(char *str)
{
  int count = 0;

  // filter

  if (str == NULL)
  {
    return -1;
  }

  while (*str != '\0')
  {
    if (*str >= 'a' && *str <= 'z')
    {
      count++;
    }
    str++;
  }
  return count;
}

int main()
{
  char str[100];
  int capitalCount = 0;

  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);

  capitalCount = countSmall(str);

  printf("Number of small characters: %d\n", capitalCount);

  return EXIT_SUCCESS;
}
