#include <stdio.h>

#define PI 3.14159

int main(int argc, char *argv[]) {
  double radius, volume;

  fprintf(stderr, "Enter sphere radius: ");

  if (fscanf(stdin, "%lf", &radius) != 1) {
    fprintf(stderr, "Wrong input!\n");
    return -1;
  }
  volume = (4.0 * PI * radius * radius * radius) / 3.0;

  fprintf(stdout, "%.2f\n", volume);

  return 0;
}
