/* What if does the dangling else connect to?
 */
#include <stdio.h>

int main(int argc, char *argv[]) {
  int x = 3, y = 4, z = 6;

  if (x > 2) {
    if (y > 6) {
      z = 7;
    }
  } else {
    z = 8;
  }

  printf("After the if statement z=%d\n", z);
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
