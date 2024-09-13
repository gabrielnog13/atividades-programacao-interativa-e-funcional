#include <stdio.h>

long long int fatorial(int num) {
    long long int resultado = 1;
    for (int i = 1; i <= num; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int m, n;

      while (scanf("%d %d", &m, &n) != EOF) {
    long long int somaFatoriais = fatorial(m) + fatorial(n);
            printf("%lld\n", somaFatoriais);
        }
    
    return 0;

}