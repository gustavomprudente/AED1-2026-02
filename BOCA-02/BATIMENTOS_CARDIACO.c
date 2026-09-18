#include <stdio.h>

int main () {
    int idade;
    float X;

    scanf("%d", &idade);

    X = idade * (365.25*24.0*60.0*60.0);

    printf("O CORACAO BATEU %.2f VEZES", X);
    return 0;
}