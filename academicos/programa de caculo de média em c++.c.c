#include <stdio.h>

int main() {
    int n, i;
    double num, soma = 0.0, media;

    printf("Digite a quantidade de numeros: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%lf", &num);
        soma += num;
    }

    media = soma / n;
    printf("A media dos %d numeros e: %.2f\n", n, media);

}
