/*
    Q.Accept character from user and check whether it is digit or not.
*/
////////////////////////////////////////////////////////////////////////////
//   Function name :chkdigit
//   Description   :check whether a character is a digit or not
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

BOOL chkDigit(char ch)
{
  if ((ch >= '0' && ch <= '9'))
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

  ret = chkDigit(arr);

  if (ret == true)
  {
    printf("The character is a digit.\n");
  }
  else
  {
    printf("The character is not a digit.\n");
  }

  return EXIT_SUCCESS;
}