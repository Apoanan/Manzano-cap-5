#include<stdio.h>

long long fatorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * fatorial(n - 1);
}

int main() {
    int i, valor;
    float somatorio = 0;

    for (i = 0; i < 15; i++) {
        printf("Digite um valor inteiro: ");
        scanf("%d", &valor);
        somatorio += fatorial(valor);
    }

    printf("O somatório da fatorial de cada valor e: %.f\n", somatorio);

    return 0;
}
