/*
    Q.Accept character from user . if character is small display its corresponding capital character, and if it small then display its corresponding capital . in other cases display as it is.
*/
////////////////////////////////////////////////////////////////////////////
//   Function name :convertCase
//   Description   :convert case of a character
//   Input         :char
//   Output        :char
//   Author        :maruti kondiba waghmode
//   Date          :26-11-2026
//
//
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

char convertCase(char ch)
{
  if (ch >= 'a' && ch <= 'z')
  {
    return ch - 32; // Convert to uppercase
  }
  else if (ch >= 'A' && ch <= 'Z')
  {
    return ch + 32; // Convert to lowercase
  }
  else
  {
    return ch; // Return as is for non-alphabetic characters
  }
}

int main()
{
  char ch;
  printf("Enter a character: ");
  scanf(" %c", &ch);
  ch = convertCase(ch);
  printf("Converted character: %c\n", ch);
  return EXIT_SUCCESS;
}
