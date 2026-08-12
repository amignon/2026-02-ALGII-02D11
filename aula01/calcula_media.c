#include <stdio.h>

int main() {
    float n1;
    float n2;

    printf("Informe o primeiro numero: ");
    scanf("%f", &n1);
    printf("Informe o segundo número: ");
    scanf("%f", &n2);

    float media = (n1 + n2) / 2;

    printf("Media = %.2f\n", media);

    return 0;
}