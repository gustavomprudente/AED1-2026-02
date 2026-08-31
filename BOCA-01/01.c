#include <stdio.h>

int main () {

    int A;
    int passagem_cometa = 1986;
    
    scanf("%d", &A);
    
    if (A >= passagem_cometa) {
        while (A >= passagem_cometa) {
            passagem_cometa += 76;
        }
        printf("passagem: %d", passagem_cometa);
    } else {
        while (passagem_cometa - 76 > A) {
            passagem_cometa -= 76;
        }
        printf("passagem: %d", passagem_cometa);
    }
return 0;
}