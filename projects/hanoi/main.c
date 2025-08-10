/* Recursive divide and conquer approach to the
   towers of Hanoi problem.
*/
#include <stdio.h>
#include <stdlib.h>

void hanoi(char from, char via, char to, int n);

int main(int argc, char *argv[]) {
  int n;
  if (argc > 1) {
    n = atoi(argv[1]);
  } else {
    printf("Usage: %s n\n", argv[0]);
    exit(EXIT_FAILURE);
  }

  hanoi('A', 'B', 'C', n);
  return 0;
}

void hanoi(char from, char via, char to, int n) {
  int i;
  if (n <= 0) {
    return;
  }
  hanoi(from, to, via, n - 1);
  for (i = 1; i < n; i++) {
    printf("    ");
  }
  printf("Move a disk from %c to %c\n", from, to);
  hanoi(via, from, to, n - 1);
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
