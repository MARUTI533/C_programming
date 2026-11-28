/*
    Q.Write a program which accept string from user and accept one character check whether that character is present in string or not.

*/
////////////////////////////////////////////////////////////////////////////
//   Function name :checkchar
//   Description   :check if a character is present in a string
//   Input         :char[], char
//   Output        :BOOL
//   Author        :maruti kondiba waghmode
//   Date          :25-11-2026
//
//
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL checkchar(char *str, char ch)
{
  while (*str != '\0')
  {
    if (*str == ch)
    {
      return TRUE;
    }
    str++;
  }
  return FALSE;
}

int main()
{
  char arr[20];
  char ch;
  BOOL result;

  printf("Enter a string: ");
  scanf("%[^\n]s", arr);

  printf("Enter a character to search: ");
  scanf(" %c", &ch);

  result = checkchar(arr, ch);

  if (result == TRUE)
  {
    printf("true.\n");
  }
  else
  {
    printf("false.\n");
  }

  return EXIT_SUCCESS;
}