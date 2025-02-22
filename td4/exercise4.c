#include <stdio.h>

// using the program arguments is easy so we will use a simple array
int main() {
  int A[1024];
  int i = 1;
  int Odd = 0;
  while (1) {
    printf("\nput the %dnth number :", i);
    scanf("%d", &A[i - 1]);
    if (A[i - 1] % 2 == 1) {
      Odd++;
    }
    if (A[i - 1] == 0) {
      break;
    }
    i++;
  }
  float Percentage = Odd / ((float)i) * 100;
  printf(
      "out of %d numbers there are %d Odd numbers with a percentage of %.2f \n",
      i, Odd, Percentage);
  return 0;
}
