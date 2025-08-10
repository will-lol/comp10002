#include <stdio.h>

#define PI 3.14159

int main(int argc, char *argv[]) {
  double radius, volume;

  printf("Enter sphere radius: ");
  scanf("%lf", &radius);
  volume = (4 / 3) * (PI * radius * radius * radius);

  printf("When radius is %.2f meters, ", radius);
  printf("volume is %.2f cubic meters\n", volume);

  return 0;
}
