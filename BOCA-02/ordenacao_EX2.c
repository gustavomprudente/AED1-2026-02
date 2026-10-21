#include <stdio.h> 

void Separar(int A[], int T, int Impar[], int Par[], int lenPar, int lenImpar) {
    for (int i = 0; i < T; i++) {
        if (A[i]%2 == 0) {
            Par[lenPar] = A[i];
            lenPar++;
        } else {
            Impar[lenImpar] = A[i];
            lenImpar++;
        }
    }
}

void Ordenar(int ParOuImpar[], int len) {
    for (int i = 0; ; i++) {
        int trocou = 0;
        for (int j = 0; j < len-1; i++) {
            if (ParOuImpar[j] > ParOuImpar[j+1]) {
                int temp = ParOuImpar[j];
                ParOuImpar[j] = ParOuImpar[j+1];
                ParOuImpar[j+1] = temp;
                trocou = 1;
            }
        }

        if (trocou == 0) {
            return;
        } 
    }
}

void Inverter()

int main (void) {
    int n;

    scanf("%d", &n);

    int nums[n], Par[n], Impar[n];
    int lenPar = 0, lenImpar = 0;
    
    for (int i = 0; i < n; i++) {
        scanf("%d", nums[i]);
    }
    Separar(nums, n, Impar, Par, lenPar, lenImpar);
    Ordenar(Par, lenPar);
    Ordenar(Impar, lenImpar)
    Inverter(Impar; lenImpar);

    for (int i = 0; i < lenPar; i++) {
        printf("%d ", Par[i]);
    }
    puts("");
    for (int i = 0; i < lenImpar; i++) {
        printf("%d ", Impar[i]);
    }

    return 0;
}