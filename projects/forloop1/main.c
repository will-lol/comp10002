/* For loop example number 1.
 */
#include <stdio.h>

#define NUM_LINES 5

int main(int argc, char *argv[]) {
  int i;
  for (i = 1; i <= NUM_LINES; i = i + 1) {
    printf("%4d%10d\n", i, i * (i + 1) / 2);
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
