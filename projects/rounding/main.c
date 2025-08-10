/* Show the effects of floating point rounding.
 */

#include <stdio.h>

int main(int argc, char *argv[]) {
  double x, y, z;
  x = 0.1;
  y = x + x + x + x + x + x + x + x + x + x;
  z = y - 1.0;
  printf("x=%23.20f\ny=%23.20f\nz=%23.20f\n", x, y, z);
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
