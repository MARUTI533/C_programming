/*
    Q.Accept character from user. and check whether it is special symbol or not().
*/
////////////////////////////////////////////////////////////////////////////
//   Function name :checkSpecialSymbol
//   Description   :check if a character is a special symbol
//   Input         :char
//   Output        :char
//   Author        :maruti kondiba waghmode
//   Date          :26-11-2026
//
//
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL checkSpecialSymbol(char ch)
{
  if ((ch >= 33 && ch <= 47) || (ch >= 58 && ch <= 64) || (ch >= 91 && ch <= 96) || (ch >= 123 && ch <= 126))
  {
    return TRUE; // Character is a special symbol
  }
  else
  {
    return FALSE; // Character is not a special symbol
  }
}

int main()
{
  char ch = '\0';
  BOOL isSpecialSymbol = FALSE;

  printf("Enter a character: ");
  scanf(" %c", &ch);

  isSpecialSymbol = checkSpecialSymbol(ch);

  if (isSpecialSymbol == TRUE)
  {
    printf("true.\n");
  }
  else
  {
    printf("false.\n");
  }
  return EXIT_SUCCESS;
}
