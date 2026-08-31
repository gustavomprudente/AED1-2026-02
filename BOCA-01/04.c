#include <stdio.h>

int verificar_palindromo(int A) {
    int inv, d1, d2, d3, d4;
    
    d1 = A/1000; d2 = (A/100)%10; d3 = (A/10) % 10; d4 = (A%10);
    inv = d1+(d2*10)+(d3*100)+(d4*1000);
    
    if (A == inv) {
        return 0;
    } else {
        return -1;
    }
}

int main () {
    int N; 
    scanf("%d", &N);
    int numeros[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &numeros[i]);
    }
    for (int i = 0; i < N; i++) {

        if (verificar_palindromo(numeros[i]) == 0) {
            printf("yes ");
        } else {
            printf("no ");
        }
    }
    return 0;
}