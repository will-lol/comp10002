/* Read a number and determine if it is prime.
 */
#include <stdio.h>

int isprime(int n);
int nextprime(int n);

int main(int argc, char *argv[]) {
  int n;
  printf("Enter a number n: ");
  if (scanf("%d", &n) != 1) {
    fprintf(stderr, "Incorrect input");
  }
  if (isprime(n)) {
    printf("%d is a prime number\n", n);
  } else {
    printf("%d is not a prime number\n", n);
  }
  printf("The next prime is : %d\n", nextprime(n));
  return 0;
}

/* Determine whether n is prime. */
int isprime(int n) {
  int divisor;
  if (n < 2) {
    return 0;
  }
  for (divisor = 2; divisor * divisor <= n; divisor++) {
    if (n % divisor == 0) {
      /* factor found, so can't be prime */
      return 0;
    }
  }
  /* no factors, so must be prime */
  return 1;
}

int nextprime(int n) {
  n = n + 1;
  while (!isprime(n)) {
    n = n + 1;
  }
  return n;
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
