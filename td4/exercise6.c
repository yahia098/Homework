#include <math.h>
#include <stdio.h>
#include <stdlib.h>
float Positive(float a, float b, float c) {
  if (a <= 0 || b <= 0 || c <= 0)
    return 0;
  else
    return 1;
}
int main(int argc, char *argv[]) {
  switch (argc) {
  case 1:
    printf("too little arguments\n");
    return 1;
    break;
  case 2:
    printf("too little arguments\n");
    return 1;
    break;
  case 3:
    printf("too little arguments\n");
    return 1;
    break;

  case 4:
    if (!Positive(atof(argv[1]), atof(argv[2]), atof(argv[3]))) {
      printf("some of the sides are of negative length! \n");
      return 3;
    }
    break;
  default:
    printf("too many arguments\n");
    return 2;
    break;
  }
  float S = (atof(argv[1]) + atof(argv[2]) + atof(argv[3])) / 2;
  float A =
      sqrt(S * (S - atof(argv[1])) * (S - atof(argv[2])) * (S - atof(argv[3])));
  printf("the area of the triangle is : %lf \n", A);
  return 0;
}
