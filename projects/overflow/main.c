/* Show the effects of integer overflow.
 */

#include <stdio.h>

int main(int argc, char *argv[]) {
  int big, bp1, bt2, bp1t2;
  big = 2147483647;
  bp1 = big + 1;
  bt2 = big * 2;
  bp1t2 = bp1 * 2;
  printf("big=%d, bp1=%d, bt2=%d, bp1t2=%d\n", big, bp1, bt2, bp1t2);
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
