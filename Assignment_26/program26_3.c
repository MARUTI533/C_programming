/*
    Q.Accept character from user. it is capital then display all the character from the input character till Z.if input character is small then print all the character in reverse order till A.in other cases return directly.
*/
////////////////////////////////////////////////////////////////////////////
//   Function name :display
//   Description   :display characters based on their case
//   Input         :char
//   Output        :char
//   Author        :maruti kondiba waghmode
//   Date          :26-11-2026
//
//
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

char display(char ch)
{
  char alpha = '\0';
  if (ch >= 'a' && ch <= 'z')
  {

    // Print characters from input to Z
    for (alpha = ch; alpha <= 'Z'; alpha++)
    {
      printf("%c ", alpha);
    }
    printf("\n");
  }
  else if (ch >= 'A' && ch <= 'Z')
  {
    // Print characters from input to A in reverse order
    for (alpha = ch; alpha >= 'A'; alpha--)
    {
      printf("%c ", alpha);
    }
    printf("\n");
  }
  else
  {
    return ch; // Return as is for non-alphabetic characters
  }
}

int main()
{
  char ch = '\0';
  printf("Enter a character: ");
  scanf(" %c", &ch);
  ch = display(ch);
  printf("Display character: %c\n", ch);
  return EXIT_SUCCESS;
}
