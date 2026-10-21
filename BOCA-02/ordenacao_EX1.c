#include <stdio.h>


int Ordenar(int A[], int l) {
    int trocas = 0, trocou;
    for (int i = 0; ; i++) {
        trocou = trocas;
        for (int j = 0; j < l-1; j++) {
            if (A[j] > A[j+1]) {
                int temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                
                trocas++;
            }
        }

        if (trocou == trocas) {
            return trocas;
        }
    }
}


int main (void) {
    int n, L;

    scanf("%d", &n);

    int numero_ideal_de_trocas[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &L); 
        int posicao[L];

        for (int j = 0; j < L; j++) {
            scanf("%d", &posicao[j]);
        }
        numero_ideal_de_trocas[i] = Ordenar(posicao, L);
    }

    printf("\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", numero_ideal_de_trocas[i]);
    }
    
    return 0; 
}