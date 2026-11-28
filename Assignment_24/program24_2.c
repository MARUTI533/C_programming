/*
    Q.Write a program which accept string from user and accept one character return frequency of that character from string.

*/
////////////////////////////////////////////////////////////////////////////
//   Function name :countchar
//   Description   :count frequency of a character in a string
//   Input         :char[], char
//   Output        :int
//   Author        :maruti kondiba waghmode
//   Date          :25-11-2026
//
//
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int countchar(char *str, char ch)
{
  int count = 0;
  while (*str != '\0')
  {
    if (*str == ch)
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
  char ch;
  int frequency;

  printf("Enter a string: ");
  scanf("%[^\n]s", arr);

  printf("Enter a character to search: ");
  scanf(" %c", &ch);

  frequency = countchar(arr, ch);

  printf("Frequency of '%c' in the string is: %d\n", ch, frequency);

  return EXIT_SUCCESS;
}