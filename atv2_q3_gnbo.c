#include <stdio.h>

int main() {
    int n;
    
    while (scanf("%d", &n) && n != 0) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1, m = 0; j <= i; j++, m--) {
                if (j == 1) {
                    printf("%3d", i + m);
                } else {
                    printf(" %3d", i + m);
            }}
            for (int j = 2; j <= n - i + 1; j++) {
                printf(" %3d", j);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}