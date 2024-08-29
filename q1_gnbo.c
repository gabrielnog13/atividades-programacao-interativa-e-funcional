#include <stdio.h>

int main(void) {
  int N;

  scanf("%d", &N);
  if (n == 0) {
    printf("E\n");
  } else if (N > 0 && N <= 35) {
    printf("D\n");
  } else if (N >= 36 && N <= 60) {
    printf("C\n");
  } else if (N >= 61 && N <= 85) {
    printf("B\n");
  } else {
    printf("A\n");
  }
  
  return 0;
}