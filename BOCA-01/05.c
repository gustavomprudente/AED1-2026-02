#include <stdio.h>

void converter(int A) {
    char resultado[100];
    int i = 0;

    while (A > 0) {
        int resto = A % 4;

        if (resto == 0) {
            resultado[i] = 'A';
        } else if (resto == 1) {
            resultado[i] = 'C';
        } else if (resto == 2) {
            resultado[i] = 'G';
        } else {
            resultado[i] = 'T';
        }

        i++;
        A = A / 4;
    }

    for (i = i - 1; i >= 0; i--) {
        printf("%c", resultado[i]);
    }

    printf("\n");
}

int main() {
    int N;

    scanf("%d", &N);

    int numeros[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &numeros[i]);
    }

    for (int i = 0; i < N; i++) {
        converter(numeros[i]);
    }

    return 0;
}
