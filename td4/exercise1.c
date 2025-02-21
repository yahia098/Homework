#include <stdio.h>
double F(int x);
int main() {
  int x = 0;
  while (1) {
    scanf("%d", &x);
    printf("%.1f \n", F(x));
  }
}
double F(int x) {
  double X = (double)x;
  return 12 * X * X * X + 4 * X + X / 2 + 1;
}
