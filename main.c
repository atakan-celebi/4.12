#include <stdio.h>

int main(void) {
    int n, N, a, b;
    printf("inserisci n che poi dovra' essere moltiplicato tra i multipli compresi a e b:");
    scanf("%d", &n);
    printf("inseri A e B dove A e' il piu piccolo tra i due:");
    scanf("%d %d", &a , &b);
    N = a;
    while (N <= b) {
        N++;
        printf("%d \n",n*N);
    }
}
