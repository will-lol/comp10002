/* Calculating cube roots using a converging approximation.
 */
#include <math.h>
#include <stdio.h>

double cube_root(double v);

int main(int argc, char *argv[]) {
  double val, croot;
  printf("Enter a value: ");
  while (scanf("%lf", &val) == 1) {
    croot = cube_root(val);
    printf("%16.9e, croot=%16.9e, ^3=%16.9e\n", val, croot,
           croot * croot * croot);
    printf("Enter a value: ");
  }
  return 0;
}
#if 0

double
cube_root(double v) {
	/* just return any old value at first... */
	return 1.0;
}
#endif

#define CUBE_LOWER 1e-6
#define CUBE_UPPER 1e+6
#define CUBE_ITERATIONS 25

/* Return an approximate cube root calculated
   by a converging iterative mechanism.
*/
double cube_root(double v) {
  double next = 1.0;
  int i;
  if (fabs(v) < CUBE_LOWER || fabs(v) > CUBE_UPPER) {
    printf("Warning: cube root may be inaccurate\n");
  }
  for (i = 0; i < CUBE_ITERATIONS; i++) {
    next = (2 * next + v / (next * next)) / 3;
  }
  return next;
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
