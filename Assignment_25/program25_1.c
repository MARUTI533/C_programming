/*
    Q.Accept character from user and check whether it is alphabet or not.
*/
////////////////////////////////////////////////////////////////////////////
//   Function name :chkalpha
//   Description   :check whether a character is an alphabet or not
//   Input         :char[], char
//   Output        :BOOL
//   Author        :maruti kondiba waghmode
//   Date          :26-11-2026
//
//
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0

typedef int BOOL;

BOOL chkalpha(char ch)
{
  if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
  {
    return true;
  }
  else
  {
    return false;
  }
}

int main()
{
  char arr = '\0';

  BOOL ret = false;

  printf("Enter a character: ");
  scanf(" %c", &arr);

  ret = chkalpha(arr);

  if (ret == true)
  {
    printf("The character is an alphabet.\n");
  }
  else
  {
    printf("The character is not an alphabet.\n");
  }

  return EXIT_SUCCESS;
}