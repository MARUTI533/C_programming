/*
    Q.Write a program which aceept string from user and count number of captital characters.
*/
////////////////////////////////////////////////////////////////////////////
//   Function name :countCapital
//   Description   :count capital characters in a string
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

int countCapital(char *str)
{
  int count = 0;

  // filter

  if (str == NULL)
  {
    return -1;
  }

  while (*str != '\0')
  {
    if (*str >= 'A' && *str <= 'Z')
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

  capitalCount = countCapital(str);

  printf("Number of capital characters: %d\n", capitalCount);

  return EXIT_SUCCESS;
}
