#include <stdio.h>
int compareInt(int x, int y);
int main() {
  int x = 0, y = 0;
  printf("this is a number comparison program \n");
  while (1) {
    printf("\n");
    printf("enter x then enter y :");
    scanf("%d %d", &x, &y);
    printf("\n %d", compareInt(x, y));
  }
}
int compareInt(int x, int y) { return (x >= y) ? 1 : -1; }
