#include <stdio.h>

int inverter(A int) {
    int num, d1, d2, d3;
    d1 = A % 10;
    d2 = (A / 10) % 10;
    d3 = A / 100;
    num = (d1 * 100) + (d2 * 10) + (d3);
    return num;
}
int main () {
    int maior, n1, n2 int;

    scanf("%d %d", &n1, &n2);

    if (inverter(n1) > inverter(n2)) {
        print(n1)
    } else {
        print(n2)
    }
    return 0;
}