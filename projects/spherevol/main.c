/* Calculate the volume of a sphere given its radius.
 */
#include <stdio.h>

#define PI 3.14159

int main(int argc, char *argv[]) {
  double radius, volume;
  printf("Enter sphere radius: ");
  scanf("%lf", &radius);
  volume = (4.0 * PI * radius * radius * radius) / 3.0;
  printf("When radius is %.2f meters, ", radius);
  printf("volume is %.2f cubic meters\n", volume);
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
