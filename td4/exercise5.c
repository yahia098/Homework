#include <stdio.h>
#include <stdlib.h> //for the atoi() function
int sumsofcube(int x) {
  int S = 0, i;
  for (i = 0; i <= x; i++) {
    S += (i * i * i);
  }
  return S;
}
// this time no loop just give argument during declaration
int main(int argc, char *argv[]) {
  int x; // to put the value of argv into since it takes everything as a string
  if (argc < 2) {
    printf("too little arguments \n");
    return 1;
  } else if (argc > 2) {
    printf("too many arguments \n");
    return 2;
  }
  x = atoi(argv[1]);
  printf("the sum is %d \n", sumsofcube(x));

  return 0;
}
