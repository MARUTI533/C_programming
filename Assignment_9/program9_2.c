/*

  Q.accept amount in us doller and return its corresponding value in indian currency consider 1$ as 70 rupees.

*/
//////////////////////////////////////////////////////////////////////////////
//
//   Function name :dollertoinr
//   Description   :conver the doller value into INR
//   Input         :int
//   Output        :int
//   Author        :maruti kondiba waghmode
//   Date          :31-10-2026
//
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int dollertoinr(int ino)
{
  int icnt = 70;
  int ires = 0;

  ires = icnt * ino;

  return ires;
}

int main()
{
  int ivalue = 0;
  int iret = 0;

  printf("enter the number:\n");
  scanf("%d", &ivalue);

  iret = dollertoinr(ivalue);

  printf("value in INR is: %d ", iret);

  return EXIT_SUCCESS;
}