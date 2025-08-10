/* Another dodgy guard in an if statement.
 */
#include <stdio.h>

int main(int argc, char *argv[]) {
  int x = 3, y = 4, z = 6;
  if (x < y < z)
    z = z + 1;
  if (z > y > x)
    z = z + 2;
  printf("After the two if statements z=%d\n", z);
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
