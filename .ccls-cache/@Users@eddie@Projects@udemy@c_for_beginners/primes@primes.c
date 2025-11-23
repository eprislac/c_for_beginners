#include<stdio.h>
#include<stdlib.h>

int main () {
  printf("Prime numbers between 0 and 100 are:\n");
  printf("1 2 ");
  for ( int i = 1; i < 100; i = i + 2 ) {
    int is_prime = 1;
    for ( int j = 2; j <= i / 2; j++ ) {
      if (i % j == 0) {
        is_prime = 0;
        break;
      }
    }
    if (is_prime && i > 1) {
      printf("%d ", i);
    }
  }
  printf("\n");
  return 0;
}
