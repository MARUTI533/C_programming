/*
    Q.Accept character from user and check whether it is small case or not.
*/
////////////////////////////////////////////////////////////////////////////
//   Function name :chkSmall
//   Description   :check whether a character is a small case letter or not
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

BOOL chkSmall(char ch)
{
  if ((ch >= 'a' && ch <= 'z'))
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

  ret = chkSmall(arr);

  if (ret == true)
  {
    printf("The character is a small case letter.\n");
  }
  else
  {
    printf("The character is not a small case letter.\n");
  }

  return EXIT_SUCCESS;
}