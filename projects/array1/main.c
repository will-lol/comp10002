/* Use of arrays, example 1.
 */
#include <stdio.h>

#define N 5

int main(int argc, char *argv[]) {
  int A[N], i;
  for (i = 0; i < N; i++) {
    A[i] = i * (i + 1) / 2;
  }
  for (i = 0; i < N; i++) {
    printf("A[%d]=%d  ", i, A[i]);
  }
  printf("\n");
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
