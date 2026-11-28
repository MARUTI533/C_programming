/*
    Q.Write a program which accept string from user and reverse that string in place.
*/
////////////////////////////////////////////////////////////////////////////
//   Function name :reversestring
//   Description   :reverse a string in place
//   Input         :char[]
//   Output        :void
//   Output        :int
//   Author        :maruti kondiba waghmode
//   Date          :25-11-2026
//
//
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void reversestring(char *str)
{
  char *start = str;
  char *end = str;

  // Move the end pointer to the last character of the string
  while (*end != '\0')
  {
    end++;
  }
  end--; // Move back to the last character

  // Swap characters from start and end until they meet in the middle
  while (start < end)
  {
    char temp = *start;
    *start = *end;
    *end = temp;

    start++;
    end--;
  }
}

int main()
{
  char arr[20];

  printf("Enter a string: ");
  scanf("%[^\n]s", arr);

  reversestring(arr);
  printf("Reversed string is: %s\n", arr);

  return EXIT_SUCCESS;
}