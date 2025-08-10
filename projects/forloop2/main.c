/* For loop example number 2.
 */
#include <stdio.h>

#define NTIMES 5

int main(int argc, char *argv[]) {
  int i, j;
  for (i = 0; i < NTIMES; i++) {
    for (j = 0; j < i; j++) {
      printf("i=%d,j=%d  ", i, j);
    }
    printf("\n");
  }
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
