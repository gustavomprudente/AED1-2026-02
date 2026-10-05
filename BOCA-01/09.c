```c
#include <stdio.h>
#include <string.h>

int main (void) {
    int t, i, j, dezena;

    scanf("%d", &t);

    char numero[t*2][41];
    for (i = 0; i < t*2; i++) {
        scanf("%s", numero[i]);
    }

    for (i = 0; i < t; i += 2) {
        int n = 0;
        for (j = strlen(numero[i]-1); j > 1; j--) {
            int resultado["K"];
            if (numero[i] * numero[i+1] + resto > 10) {
                resultado[n] = ((numero[i] * numero[i+1]) % 10) + (dezena * 10)
                dezena = (numero[i] * numero[i+1]) / 10
            } else {
                dezena = 0;
                resultado[n]
            }
            n++
        }
    }
}
por enquanto, pra armazenar os números e tentar multiplicar cada um deles tá certo? como uso o len. o que coloco em "K"?