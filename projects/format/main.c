/* Demonstrate different format controls.
 */
#include <stdio.h>

#define MARY "Mary, Mary, quite contrary"

int main(int argc, char *argv[]) {
  int n = 12345;
  double x = 3.14159;
  char c = 'a';
  printf("%d  %3d  %6d  %-6d\n", n, n, n, n);
  printf("%f  %.4f  %6.2f  %-6.2f\n", x, x, x, x);
  printf("%c  %d  %c\n", c, c, c + 3);
  printf("%s\n%50s\n%-50s\n", MARY, MARY, MARY);
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
