/*

  Q.accept single digit number from user and print it into word.
*/

///////////////////////////////////////////////////////////////////////////////
//
//   Function name :display
//   Description   :accept one digit number and print in words.
//   Input         :int
//   Output        :int
//   Author        :maruti kondiba waghmode
//   Date          :31-10-2026
//
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void display(int ino)
{
  if (ino < 0)
  {
    ino = -ino;
  }

  if (ino == 1)
  {
    printf("one\n");
  }
  else if (ino == 2)
  {
    printf("two\n");
  }
  else if (ino == 3)
  {
    printf("three\n");
  }
  else if (ino == 4)
  {
    printf("four\n");
  }
  else if (ino == 5)
  {
    printf("five\n");
  }
  else if (ino == 6)
  {
    printf("six\n");
  }
  else if (ino == 7)
  {
    printf("seven\n");
  }
  else if (ino == 8)
  {
    printf("eight\n");
  }
  else if (ino == 9)
  {
    printf("nine\n");
  }

  else if (ino >= 10)
  {
    printf("invalid number\n");
  }
}

int main()
{

  int ivalue = 0;

  printf("enter the value:\n");
  scanf("%d", &ivalue);

  display(ivalue);

  return EXIT_SUCCESS;
}