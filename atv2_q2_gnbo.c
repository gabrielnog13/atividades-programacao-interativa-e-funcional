#include<stdio.h>

int main() {

int i, j, L;
char T;
double M[12][12], soma, media;
soma = media = 0;
    scanf("%d", &L);
    scanf(" %c", &T);

    for(i=0; i<12; i++) {
        for(j=0; j<12; j++) {
            scanf("%lf", &M[i][j]);
            if(i==L) {
                if(T=='S') {
                    soma=soma+M[L][j];
                } else {
                    if(i==L) {
                        if(T=='M' && i==L) {
                            media=media+M[L][j];
                    }  }
                }
            }
        }
    }
    
    media=media/12;
    
    if(T=='S') {
        printf("%.1lf\n", soma);
    } else {
        if(T=='M') {
            printf("%.1lf\n", media);
        }
    }
}