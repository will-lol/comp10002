/* Show use of the functions fopen, fwrite, and fread.
 */
#include <assert.h>
#include <stdio.h>

#define SIZE 7
#define FILENAME "temp.dat"

void print_doubles(double *A, int n);

int main(int argc, char *argv[]) {
  double A[SIZE];
  FILE *fp;
  int i;
  /* initialize the array with some values */
  for (i = 0; i < SIZE; i++) {
    A[i] = 1.2345 * i + 0.6789;
  }
  print_doubles(A, SIZE);
  /* open the file for writing */
  fp = fopen(FILENAME, "w");
  assert(fp != NULL);
  /* write the whole array in one operation */
  i = fwrite(A, sizeof(*A), SIZE, fp);
  assert(i == SIZE);
  /* clear the array */
  for (i = 0; i < SIZE; i++) {
    A[i] = 0.0;
  }
  print_doubles(A, SIZE);
  /* open the file for  reading */
  fp = freopen(FILENAME, "r", fp);
  assert(fp != NULL);
  /* read the array  back*/
  i = fread(A, sizeof(*A), SIZE, fp);
  assert(i == SIZE);
  print_doubles(A, SIZE);
  fclose(fp);
  return 0;
}

void print_doubles(double *A, int n) {
  int i;
  for (i = 0; i < n; i++) {
    printf("%7.3f", A[i]);
  }
  printf("\n");
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
