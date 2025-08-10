/* Cut out FORTRAN-style comments.
 */
#include <stdio.h>

int main(int argc, char *argv[]) {
  int ch, incomment = 0, newlinelast = 1;
  while ((ch = getchar()) != EOF) {
    if (ch == 'C' && newlinelast) {
      incomment = 1;
    }
    if (!incomment) {
      putchar(ch);
    }
    if (ch == '\n') {
      incomment = 0;
      newlinelast = 1;
    } else {
      newlinelast = 0;
    }
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
