/*
    Q.Accept character from user and check whether it is capital letter or not.
*/
////////////////////////////////////////////////////////////////////////////
//   Function name :chkcapital
//   Description   :check whether a character is a capital letter or not
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

BOOL chkCapital(char ch)
{
  if ((ch >= 'A' && ch <= 'Z'))
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

  ret = chkCapital(arr);

  if (ret == true)
  {
    printf("The character is a capital letter.\n");
  }
  else
  {
    printf("The character is not a capital letter.\n");
  }

  return EXIT_SUCCESS;
}