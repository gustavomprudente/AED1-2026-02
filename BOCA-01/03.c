#include <stdio.h>

int main() {
    int N, N1, N2, resultado;
    char C;

    scanf("%d %d %c %d", &N, &N1, &C, &N2);

    if (C == '+') {
        resultado = N1 + N2;
    } else {
        resultado = N1 * N2;
    }

    if (resultado > N) {
        printf("overflow");
    } else {
        printf("no overflow");
    }

    return 0;
}                      