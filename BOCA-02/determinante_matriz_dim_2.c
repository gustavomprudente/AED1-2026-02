#include <stdio.h>

int main (void) {
    float a, b, c, d, det;

    scanf("%f %f %f %f", &a, &b, &c, &d);

    det = (a * d) - (b * c);

    printf("O VALOR DO DETERMINANTE E = %.2f\n", det);
}