/*

  Q.write a program which accept name from user and print that name.

*/

/////////////////////////////////////////////////////////////////////////////
//
//   Function name :-
//   Description   :accept name from user.
//   Input         :string
//   Output        :string
//   Author        :maruti kondiba waghmode
//   Date          :04-11-2026
//
//
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int main()
{

  char name[30];
  printf("please enter full name:\n");
  scanf("%[^'\n']s", name);

  printf("your name is: \n%s", name);

  return EXIT_SUCCESS;
}