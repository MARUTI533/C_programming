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
  switch (ino)

  {
  case 0:
    printf("zero\n");
    break;

  case 1:
    printf("one\n");
    break;

  case 2:
    printf("two\n");
    break;

  case 3:
    printf("thtee\n");
    break;

  case 4:
    printf("four\n");
    break;

  case 5:
    printf("five\n");
    break;

  case 6:
    printf("six\n");
    break;

  case 7:
    printf("seven\n");
    break;

  case 8:
    printf("eight\n");
    break;

  case 9:
    printf("nine\n");
    break;

  default:
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