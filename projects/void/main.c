/* Show the use of void parameter and return types.
 */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void fatal_error(void);
void print_double(double x);

int main(int argc, char *argv[]) {
  double x;
  while (scanf("%lf", &x) == 1) {
    if (x <= 0.0) {
      fatal_error();
    }
    print_double(x);
    print_double(log(x));
    putchar('\n');
  }
  return (0);
}

void fatal_error(void) {
  printf("Aaaarrrgggh, cannot recover, program abort\n");
  exit(EXIT_FAILURE);
}

void print_double(double x) { printf("%10.6f", x); }

/* =====================================================================
   Program written by Alistair Moffat, as an example for the book
   "Programming, Problem Solving, and Abstraction with C", Pearson
   Custom Books, Sydney, Australia, 2002; revised edition 2012,
   ISBN 9781486010974.

   See http://people.eng.unimelb.edu.au/ammoffat/ppsaa/ for further
   information.

   Prepared December 2012 for the Revised Edition.
   ================================================================== */
