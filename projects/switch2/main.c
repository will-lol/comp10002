/* Switch statement example 2.
 */
#include <stdio.h>

int main(int argc, char *argv[]) {
  int i, x;
  for (i = 1; i <= 10; i++) {
    x = i;
    switch (x) {
    case 1:
      x += 4;
    case 4:
    case 7:
      x += 2;
      break;
    case 3:
    case 9:
      x += 3;
    default:
      x += 8;
    }
    printf("i=%2d, x=%2d\n", i, x);
  }
  return 0;
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
