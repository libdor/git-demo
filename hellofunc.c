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

  for (i = 0; i < 20; i++)
  {
    printf("%d ", i);
  }

  printf("\n");
}

void myPrintFibonacci(void)
{
  int i, n = 15;

  // initialize first and second terms
  int t1 = 0, t2 = 1;

  // initialize the next term (3rd term)
  int nextTerm = t1 + t2;

  // print the first two terms t1 and t2
  printf("Fibonacci Series: %d, %d, ", t1, t2);

  // print 3rd to nth terms
  for (i = 3; i <= n; ++i) {
    printf("%d, ", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }
}
