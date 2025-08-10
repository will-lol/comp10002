/* A flawed if statement.
 */
#include <stdio.h>
#define MAX_CLASS_SIZE 50

int main(int argc, char *argv[]) {
  int class_size;
  printf("Enter class size: ");
  scanf("%d", &class_size);
  if (class_size >= MAX_CLASS_SIZE) {
    printf("Class is now full\n");
  } else {
    printf("More students can be accepted\n");
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
