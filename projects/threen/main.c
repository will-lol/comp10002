/* Explore the 3n+1 problem.
 */
#include <stdio.h>
#include <stdlib.h>

#define PERLINE 8

int main(int argc, char *argv[]) {

  int n, cycles, max;

  printf("Enter starting value for n: ");
  if (scanf("%d", &n) != 1) {
    printf("Incorrect input\n");
    exit(EXIT_FAILURE);
  }
  /* a value for n has been read */
  max = n;
  cycles = 0;
  while (n > 1) {
    printf("%5d ", n);
    if (n % 2 == 0) {
      n = n / 2;
    } else {
      n = 3 * n + 1;
    }
    if (n > max) {
      max = n;
    }
    cycles += 1;
    if (cycles % PERLINE == 0) {
      printf("\n");
    }
  }
  printf("\n%d cycles consumed, maximum was %d\n", cycles, max);
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
