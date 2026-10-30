/*

    Q.write a program which accept number from user and print numbers till that number.

*/

//////////////////////////////////////////////////////////
//
//   Function name :Display
//   Description   :print number till that number
//   Input         :int
//   Output        :int
//   Author        :maruti kondiba waghmode
//   Date          :31-10-2026
//
//
///////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void Display(int iNo)
{
  int iCnt = 0;

  if (iNo <= 0)
  {
    iNo = -iNo;
  }

  for (iCnt = 1; iCnt <= iNo; iCnt++)
  {
    printf("%d\t ", iCnt);
  }
}

int main()
{
  int ivalue = 0;

  printf("enter the number\n");
  scanf("%d", &ivalue);

  Display(ivalue);

  EXIT_SUCCESS;
}