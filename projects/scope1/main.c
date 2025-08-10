/* Show scope of declarations, example 1.
 */
#include <stdio.h>

void func(int x);

int main(int argc, char *argv[]) {
  int x = 3, z = 5;
  printf("main: x=%2d, z=%2d\n", x, z);
  func(x);
  printf("main: x=%2d, z=%2d\n", x, z);
  func(z);
  printf("main: x=%2d, z=%2d\n", x, z);
  return 0;
}

void func(int x) {
  int z = 7;
  x = x + 1;
  z = x + z + 1;
  printf("func: x=%2d, z=%2d\n", x, z);
}

/* =====================================================================
   Program written by Alistair Moffat, as an example for the book
   "Programming, Problem Solving, and Abstraction with C", Pearson
   Custom Books, Sydney, Australia, 2002; revised edition 2012,
   ISBN 9781486010974.

   See http://people.eng.unimelb.edu.au/ammoffat/ppsaa/ for further
   information.

   Prepared December 2012 for the Revised Edition.
   ================================================================== */
