#include <stdio.h>
float conv(float x);
float reciproque(float x);
int main() {
  float x;
  int a;
  printf("this is a temp conversion software \n");
  while (1) {
    printf("press 1 for celsius to fehrenheit and 2 for the inverse \n");
    scanf("%d", &a);
    if (a == 2) {
      scanf("%f", &x);
      printf("%.3f \n", reciproque(x));
    } else if (a == 1) {
      scanf("%f", &x);
      printf("%.3f \n", conv(x));
    } else {
      continue;
    }
  }
}

float conv(float x) { return x * 1.4 + 32; }
float reciproque(float x) { return (x - 32) * 5 / 9; }
