#include<stdlib.h>
#include <stdio.h>
double F(int x);
int main(int argc, char * argv) {
  int x = 0;
  if (argc < 2) {
    printf("too little arguments \n");
    return 1;
  } else if (argc > 2) {
    printf("too many arguments \n");
    return 2;
  }
  x = atoi(argv[1]);
  printf("%.1f",F(x));
}
double F(int x) {
  double X = (double)x;
  return 12 * X * X * X + 4 * X + X / 2 + 1;
}
