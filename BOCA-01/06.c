#include <stdio.h>

int main () {
    int N, K;

    while (1) {
        scanf("%d %d", &N, &K);

        if (( N >= 1 && N <=1000) && (K >= 1 && K <= 20)) {
            break;
        }
        printf("erro nos dados, tentee novamente.\n");
    }

    int contagem[K];
    for (int i = 0; i < K; i++) {
        contagem[i] = 0;
    }

    int vetor[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &vetor[i]);
        contagem[vetor[i]-1]++;
    }

    int menor = contagem[0];
    for (int i = 1; i < K; i++) {
        if (menor > contagem[i]) {
            menor = contagem[i];
        }
    }

    printf("%d", menor);
    return 0;
}