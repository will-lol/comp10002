/* Show the use of math library functions and constants.
 */
#include <math.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  double x;
  printf("Enter a value for x: ");
  scanf("%lf", &x);
  printf("sin(x)  = %.15f\n", sin(x));
  printf("log(x)  = %.15f\n", log(x));
  printf("fabs(x) = %.15f\n", fabs(x));
  printf("sqrt(x) = %.15f\n", sqrt(x));
  printf("M_PI    = %.15f\n", M_PI);
  printf("M_SQRT2 = %.15f\n", M_SQRT2);
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
