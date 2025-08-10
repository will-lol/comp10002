/* For loop example number 3.
 */
#include <stdio.h>

int main(int argc, char *argv[]) {
  int i;

  for (i = 3; i < 100000000; i *= 10) {
    printf("%8d x %-8d = %12d\n", i, i, i * i);
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
