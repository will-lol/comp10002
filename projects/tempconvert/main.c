#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  double degrees_farenheit;

  fprintf(stderr, "Enter temperature in degrees Farenheit: ");

  if (fscanf(stdin, "%lf", &degrees_farenheit) != 1) {
    fprintf(stderr, "Incorrect input");
    exit(EXIT_FAILURE);
  }

  double degrees_celsius = ((degrees_farenheit - 32) / 9.0) * 5.0;

  fprintf(stdout, "%lf\n", degrees_celsius);

  return 0;
}
