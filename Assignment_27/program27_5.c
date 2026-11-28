/*
    Q.Write a program which aceept string from user and display it inn reverse order
*/
////////////////////////////////////////////////////////////////////////////
//   Function name :reverse
//   Description   :display the string in reverse order
//   Input         :char*
//   Output        :int
//   Author        :maruti kondiba waghmode
//   Date          :26-11-2026
//
//
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void Reverse(char str[])
{
  int i = 0;

  while (str[i] != '\0')
  {
    i++;
  }

  i--;

  while (i >= 0)
  {
    printf("%c", str[i]);
    i--;
  }
}

int main()
{
  char arr[100];

  printf("Enter a string: ");
  scanf(" %[^\n]", arr);

  printf("Reverse string is: ");

  Reverse(arr);

  printf("\n");

  return EXIT_SUCCESS;
}
