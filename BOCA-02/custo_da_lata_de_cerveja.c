#include <stdio.h>

int main() {
    double r, a, valor_do_custo_da_lata;
    const double PI = 3.14159;

    scanf("%lf %lf", &r, &a);

    valor_do_custo_da_lata = 100 * (2 * (PI * r * r) + (2 * PI * r * a));

    printf("O VALOR DO CUSTO E = %.2f\n", valor_do_custo_da_lata);

    return 0;
}
