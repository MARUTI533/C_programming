/*
    Q.Write a program which accept string from user and accept one character return index of first occurrence of that character from string.
*/
////////////////////////////////////////////////////////////////////////////
//   Function name :findindex
//   Description   :find index of first occurrence of a character in a string
//   Input         :char[], char
//   Output        :int
//   Author        :maruti kondiba waghmode
//   Date          :25-11-2026
//
//
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int findindex(char *str, char ch)
{
  int count = 0;
  while (*str != '\0')
  {
    if (*str == ch)
    {
      return count;
    }
    str++;
    count++;
  }
  return -1;
}

int main()
{
  char arr[20];
  char ch;
  int index;

  printf("Enter a string: ");
  scanf("%[^\n]s", arr);

  printf("Enter a character to search: ");
  scanf(" %c", &ch);

  index = findindex(arr, ch);

  if (index != -1)
  {
    printf("Index of first occurrence of '%c' in the string is: %d\n", ch, index);
  }
  else
  {
    printf("Character '%c' not found in the string.\n", ch);
  }

  return EXIT_SUCCESS;
}