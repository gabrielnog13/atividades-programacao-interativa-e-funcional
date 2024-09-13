#include <stdio.h>

int soma(int a, int b){
    int s = a + b;
    return s;
}


int main(){
  int a, b, s;


  scanf("%d \n", &a );
  scanf("%d \n", &b);
  s = soma(a, b);

  printf("X = %d\n", s);


  return 0;
}