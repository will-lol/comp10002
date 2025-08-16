#include <stdio.h>

double newton_raphson(double v, double x, int total_iterations, int i);
double cuberoot(double n);

int main(int argc, char *argv[]) {
  printf("The cube root of 5 is %f\n", cuberoot(5));
}

double cuberoot(double n) { return newton_raphson(n, 1.0, 25, 0); }

double newton_raphson(double v, double x, int total_iterations, int i) {
  if (i < total_iterations) {
    return newton_raphson(v, (2 * x + v / (x * x)) / 3, total_iterations,
                          i + 1);
  } else {
    return x;
  }
}
