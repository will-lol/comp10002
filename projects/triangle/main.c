/* Calculate triangle numbers using recursion and iteration.
 */

#include <stdio.h>

int t_itr(int);
int t_rec(int);

int main(int argc, char *argv[]) {
  int n;
  printf("Enter n: ");
  scanf("%d", &n);
  printf("t_itr(%d) = %d\n", n, t_itr(n));
  printf("t_rec(%d) = %d\n", n, t_rec(n));
  return 0;
}

/* Calculate the n'th triangle number using iteration. */
int t_itr(int n) {
  int sum, i;
  sum = 0;
  for (i = 1; i <= n; i++) {
    sum += i;
  }
  return sum;
}

/* Calculate the n'th triangle number using recursion. */
int t_rec(int n) {
  if (n == 0) {
    return 0;
  } else {
    return n + t_rec(n - 1);
  }
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
