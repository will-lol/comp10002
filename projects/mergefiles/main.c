/* Merge multiple files, all assumed to be sorted.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLINE 1024
#define MAXFILE 10

int main(int argc, char *argv[]) {
  FILE *fp[MAXFILE];
  char line[MAXFILE][MAXLINE + 2];
  int valid[MAXFILE], numvalid = 0;
  int i, first, next = 0;
  /* open each of the files */
  for (i = 1; i < argc; i++) {
    fp[i] = fopen(argv[i], "r");
    if (fp[i] == NULL) {
      fprintf(stderr, "Cannot open %s\n", argv[i]);
      exit(EXIT_FAILURE);
    }
    valid[i] = 1;
    numvalid += 1;
  }
  /* read the first line of each file */
  for (i = 1; i < argc; i++) {
    if (fgets(line[i], MAXLINE, fp[i]) == NULL) {
      valid[i] = 0;
      numvalid -= 1;
    }
  }
  while (numvalid) {
    /* find smallest current line */
    first = 1;
    for (i = 1; i < argc; i++) {
      if (valid[i]) {
        if (first) {
          next = i;
          first = 0;
        } else if (strcmp(line[i], line[next]) < 0) {
          next = i;
        }
      }
    }
    /* print out line[next], and try to replace it */
    printf("%s", line[next]);
    if (fgets(line[next], MAXLINE, fp[next]) == NULL) {
      valid[next] = 0;
      numvalid -= 1;
    }
  }
  /* finally, close all open files */
  for (i = 1; i < argc; i++) {
    fclose(fp[i]);
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
