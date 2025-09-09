#include <stdio.h>

int main() {
    int n = 0, i = 0;
    long long fatorial = 1;

    printf("Digite um numero inteiro entre 0 e 6: ");
    scanf("%d", &n);

    if (n < 0 || n > 6) {
        printf("Erro: o numero deve estar entre 0 e 6.\n");
        return 1;
    }

    for (i = 1; i <= n; i++) {
        fatorial *= i;
    }

    printf("%d! = %lld\n", n, fatorial);

    return 0;
}
