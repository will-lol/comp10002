/* Generate data for the linelength graph.
 */
#include <math.h>
#include <stdio.h>

#define START 0.0
#define STOP 10.0

double f(double);

double linelength(double, double, int);

int main(int argc, char *argv[]) {
  int steps;
  for (steps = 1; steps <= 10000000; steps = steps * 10) {
    printf("steps = %8d, line length = %.6f\n", steps,
           linelength(START, STOP, steps));
  }
  return 0;
}

double f(double x) { return sin(5 * x) + cos(10 * x) + x * x / 10; }

double linelength(double start, double stop, int steps) {
  double totlen = 0.0, x1, x2, fx1, fx2, dx, dy;
  int i;
  x1 = start;
  fx1 = f(x1);
  for (i = 1; i <= steps; i++) {
    x2 = start + (double)i * (stop - start) / steps;
    fx2 = f(x2);
    dx = x2 - x1;
    dy = fx2 - fx1;
    totlen = totlen + sqrt(dx * dx + dy * dy);
    x1 = x2;
    fx1 = fx2;
  }
  return totlen;
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
