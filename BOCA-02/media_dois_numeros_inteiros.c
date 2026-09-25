#include <stdio.h>

int main (void) {
    float A, B, media;

    scanf("%f %f", &A, &B);

    media = (A + B) / 2;

    printf("%.3f", media);
}