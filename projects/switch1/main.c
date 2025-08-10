/* Switch statement example 1.
 */
#include <stdio.h>

int main(int argc, char *argv[]) {
  int month, length_of_month, year = 2002;
  ;
  for (month = 1; month <= 12; month++) {
    switch (month) {
    case 2:
      length_of_month =
          28 + (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
      break;
    case 4:
    case 6:
    case 9:
    case 11:
      length_of_month = 30;
      break;
    default:
      length_of_month = 31;
      break;
    }
    printf("month=%2d, length_of_month=%2d\n", month, length_of_month);
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
