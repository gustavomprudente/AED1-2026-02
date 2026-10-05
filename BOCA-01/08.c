#include <stdio.h>
#include <math.h>

int e_primo(unsigned long long A) {

    if (A < 2) {
        return 0;
    }

    for (unsigned long long i = 2; i <= sqrt(A); i++) {
        if (A%i == 0) {
            return 0;
        }
    }
    return 1;
}

int main (void) {
    int N;

    scanf("%d", &N);

    unsigned long long numeros[N];
    for (int i = 0; i < N; i++) {
        scanf("%llu", &numeros[i]);
    }

    for (int i = 0; i < N; i++) {
        if (e_primo(numeros[i]) == 1) {
            printf("primo\n");
        } else {
            printf("composto\n");
        }
    }
}