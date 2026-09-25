#include <stdio.h>

int main () {
    float tf, E, X, Y;
    scanf("%f %f", &tf, &E);

    X = (5 * (tf - 32)) / 9;
    Y = E * 25.4;

    printf("O VALOR EM CELSIUS = %.2f\n", X);
    printf("A QUANTIDADEDE CHUVA E = %.2f\n", Y);
}