/*
    Q.Accept character from user. and display its ASCII value in decimal ,octal and hexadecimal format.
*/
////////////////////////////////////////////////////////////////////////////
//   Function name :displayASCII
//   Description   :display ASCII value of a character in different formats
//   Input         :char
//   Output        :char
//   Author        :maruti kondiba waghmode
//   Date          :26-11-2026
//
//
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void displayASCII(char ch)
{
  printf("Decimal: %d\n", ch);
  printf("Octal: %o\n", ch);
  printf("Hexadecimal: %X\n", ch);
}

int main()
{
  char ch = '\0';

  printf("Enter a character: ");
  scanf(" %c", &ch);

  displayASCII(ch);

  return EXIT_SUCCESS;
}
