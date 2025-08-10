/* Manipulate a two-dimensional array.
 */
#include <stdio.h>

#define ROWS 5
#define COLS 10

void assign_2d(int A[][COLS], int nrows);
void print_2d(int A[][COLS], int nrows);

int main(int argc, char *argv[]) {
  int Y[ROWS][COLS];
  assign_2d(Y, ROWS);
  print_2d(Y, ROWS);
  return 0;
}

void assign_2d(int A[][COLS], int nrows) {
  int i, j;
  for (i = 0; i < nrows; i++) {
    for (j = 0; j < COLS; j++) {
      A[i][j] = 100 + 10 * i + j;
    }
  }
}

void print_2d(int A[][COLS], int nrows) {
  int i, j;
  for (i = 0; i < nrows; i++) {
    for (j = 0; j < COLS; j++) {
      printf("%4d ", A[i][j]);
    }
    printf("\n");
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
