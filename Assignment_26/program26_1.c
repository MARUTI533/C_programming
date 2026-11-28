/*
    Q.write a program which display ASCII table. table conatains symbol, decimal, hexadecimal and octal representation of every member from 0 to 255.
*/
////////////////////////////////////////////////////////////////////////////
//   Function name :displayASCII
//   Description   :display ASCII table
//   Input         :void
//   Output        :void
//   Author        :maruti kondiba waghmode
//   Date          :26-11-2026
//
//
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void displayASCII()
{
  int i;
  printf("Symbol\tDecimal\tHexadecimal\tOctal\n");
  for (i = 0; i <= 255; i++)
  {
    printf("%c\t%d\t%x\t%o\n", i, i, i, i);
  }
}

int main()
{
  displayASCII();
  return EXIT_SUCCESS;
}
