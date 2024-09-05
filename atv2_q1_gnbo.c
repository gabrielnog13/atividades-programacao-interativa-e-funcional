#include <stdio.h>

int main() {
    int T, N;
    scanf("%d", &T);

    for(int i = 0; i < T; i++) {
        unsigned long long fib = 0, x = 0, y = 1;

        scanf(" %d", &N);
        if(N == 0) {
            printf("Fib(%d) = %d\n", N, fib);
        }
        else if(N == 1) {
            fib = 1;
            printf("Fib(%d) = %d\n", N, fib);
        } else {
           for(int i = 2; i <= N; i++) {
               fib = x + y;
               x = y;
               y = fib;
           }
           printf("Fib(%d) = %llu\n",N,fib);
        }
    }

    return 0;
}