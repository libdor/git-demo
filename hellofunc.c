#include <stdio.h>

#include "hellomake.h"

void myPrintHelloMake(void)
{

  printf("Hello makefiles!\n");

}

void myPrintLoop(void)
{
  int i;

  for (i = 0; i < 20; i++)
  {
    printf("%d ", i);
  }
}