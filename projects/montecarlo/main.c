/* Estimate area of a section of a circle using a
   Monte Carlo technique.
*/
#include <stdio.h>
#include <stdlib.h>

#define SEED 7716977

int inside(double, double);

int main(int argc, char *argv[]) {
  int num_in, steps, i;
  double x, y;
  srand(SEED);
  for (steps = 1; steps <= 1000000; steps = steps * 10) {
    num_in = 0;
    for (i = 0; i < steps; i++) {
      x = rand() / (1.0 + RAND_MAX);
      y = rand() / (1.0 + RAND_MAX);
      num_in = num_in + inside(x, y);
    }
    printf("steps = %7d, num_in = %8d, ratio = %.6f\n", steps, num_in,
           (double)num_in / steps);
  }
  return 0;
}

int inside(double x, double y) {
  return ((1 - x) <= y && x * x + y * y <= 1.0);
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
