/*
    Q.Accept division of student from user and depends on the division display exam timing. there 4 division in school as A,B,C,D. Exam of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM.(Application should be case insensitive)
*/
////////////////////////////////////////////////////////////////////////////
//   Function name :displaySchedule
//   Description   :display exam schedule based on division
//   Input         :char[], char
//   Output        :BOOL
//   Author        :maruti kondiba waghmode
//   Date          :26-11-2026
//
//
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int displaySchedule(char ch)
{
  switch (ch)
  {
  case 'A':
  case 'a':
    printf("Exam for division A is at 7 AM.\n");
    break;
  case 'B':
  case 'b':
    printf("Exam for division B is at 8.30 AM.\n");
    break;
  case 'C':
  case 'c':
    printf("Exam for division C is at 9.20 AM.\n");
    break;
  case 'D':
  case 'd':
    printf("Exam for division D is at 10.30 AM.\n");
    break;
  }
  return 1;
}

int main()
{
  char arr = '\0';

  int ret = 0;

  printf("Enter a character: ");
  scanf(" %c", &arr);

  ret = displaySchedule(arr);

  if (ret == 1)
  {
    printf("Exam schedule displayed.\n");
  }
  else
  {
    printf("Invalid division entered.\n");
  }

  return EXIT_SUCCESS;
}