#include <stdio.h>

int main () {
    float salario_mínimo, quantidade_de_kW_gasta, valor_a_ser_pago, Custo_por_kW;
    scanf("%f %f", &salario_mínimo, &quantidade_de_kW_gasta);
    Custo_por_kW = salario_mínimo*70/10000;
    valor_a_ser_pago = quantidade_de_kW_gasta * Custo_por_kW;

    printf("Custo por kW:R$ %.2f\nCusto do consumo:R$ %.2f\nCusto com desconto:R$%.2f", Custo_por_kW, valor_a_ser_pago, valor_a_ser_pago*0.9);
}