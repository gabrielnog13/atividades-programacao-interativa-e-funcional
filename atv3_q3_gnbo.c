int rafael(int x, int y) {
    return (3 * x) * (3 * x) + y * y;
}

int beto(int x, int y) {
    return 2 * (x * x) + (5 * y) * (5 * y);
}

int carlos(int x, int y) {
    return -100 * x + y * y * y;
}

int main() {
    int n, x, y;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x, &y);

        int rr = rafael(x, y);
        int rb = beto(x, y);
        int rc = carlos(x, y);

        if (rr > rb && rr > rc) {
            printf("Rafael ganhou\n");
        } else if (rb > rr && rb > rc) {
            printf("Beto ganhou\n");
        } else {
            printf("Carlos ganhou\n");
        }
    }

    return 0;
}