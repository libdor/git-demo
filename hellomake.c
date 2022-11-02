#include "hellomake.h"
#include "eightqueens.h"

int main()
{
  // call a function in another file
  myPrintHelloMake();
  myPrintLoop();
  myPrintFibonacci();

  // print eight queens
  myPrintQueens();

  return(0);
}
