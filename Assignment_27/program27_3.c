/*
    Q.Write a program which aceept string from user and return difference between frequency of small character and frequency of capital character.
*/
////////////////////////////////////////////////////////////////////////////
//   Function name :diffFrequency
//   Description   :return difference between frequency of small and capital characters
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

int diffFrequency(char *str)
{
  int smallCount = 0;
  int capitalCount = 0;

  // filter

  if (str == NULL)
  {
    return -1;
  }

  while (*str != '\0')
  {
    if (*str >= 'a' && *str <= 'z')
    {
      smallCount++;
    }
    else if (*str >= 'A' && *str <= 'Z')
    {
      capitalCount++;
    }
    str++;
  }
  return smallCount - capitalCount;
}

int main()
{
  char str[100];
  int diff = 0;

  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);

  diff = diffFrequency(str);

  printf("Difference between frequency of small and capital characters: %d\n", diff);

  return EXIT_SUCCESS;
}
