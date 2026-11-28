/*
    Q.Write a program which aceept string from user and check whether it contains vowels in it or not.
*/
////////////////////////////////////////////////////////////////////////////
//   Function name :chkvowel
//   Description   :check waither it contains vowels in it or not
//   Input         :char*
//   Output        :int
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

BOOL chkvowel(char str[])
{
  int i = 0;
  while (str[i] != '\0')
  {
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
    {
      return true;
    }
    i++;
  }
  return false;
}

int main()
{
  char arr[100];

  BOOL bret = false;

  printf("Enter a string: ");
  scanf("%[^\n]", arr);

  bret = chkvowel(arr);

  if (bret == true)
  {
    printf("containes vowel\n");
  }
  else
  {
    printf("thare is no vowel\n");
  }

  return EXIT_SUCCESS;
}
