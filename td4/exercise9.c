#include <stdio.h>
#include <stdlib.h>
float root(float A, float epsilon);
int main(int argc, char *argv[]) {
  printf("%lf\n", root(9, 0.002));
  return 0;
}

float root(float A, float epsilon) {
  int x_1 = A, x_2 = 0;
  while (abs(x_1 - x_2) > epsilon) {
    x_2 = (x_1 + A / x_1) / 2;
    x_1 = (x_2 + A / x_2) / 2;
  }
  return x_2;
}
