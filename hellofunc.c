#include <stdio.h>

#include "hellomake.h"

void myPrintHelloMake(void)
{

  printf("Hello makefiles!\n");

  return;
}

void myPrintLoop(void)
{
  int i;

  for (i = 0; i < 10; i++)
  {
    printf("%d ", i);
  }
}