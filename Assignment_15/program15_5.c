/*

  Q.write a program which accept total marks and obtained marks from user and calculate percentage.


*/
/////////////////////////////////////////////////////////////////////////////
//   Function name :calculatePercentage
//   Description   :calculate percentage of obtained marks out of total marks
//   Input         :int,int
//   Output        :float
//   Author        :maruti kondiba waghmode
//   Date          :04-11-2026
//
//
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

float percentage(int ino1, int ino2)
{
  float fres = 0;

  fres = ((float)ino2 / (float)ino1 * 100);

  return fres;
}

int main()
{

  int ivalue1 = 0, ivalue2 = 0;
  float fret = 0.0f;

  printf("enter total marks\n");
  scanf("%d", &ivalue1);

  printf("enter obtained marks\n");
  scanf("%d", &ivalue2);

  fret = percentage(ivalue1, ivalue2);

  printf("percentage is %.2f%%\n", fret);

  return EXIT_SUCCESS;
}