#include <stdio.h>
int main() {
  int x, S = 0;
  printf("enter the value of x :");
  scanf("%d", &x);
  printf("the value of x is: %d \n", x);
  if (x < 0) {
    x *= (-1);
  }
  while (x > 0) {
    S += (x % 10);
    x /= 10;
  }
  printf("the Sum is %d \n", S);
  return 0;
}
