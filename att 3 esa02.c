#include <stdio.h>

unsigned long long calcularFatorial(int numero) {
    if (numero < 0) {
        // Não é possível calcular o fatorial de um número negativo
        return 0;
    } else if (numero == 0 || numero == 1) {
        // O fatorial de 0 e 1 é 1
        return 1;
    } else {
        // Calcula o fatorial usando um loop
        unsigned long long fatorial = 1;
        for (int i = 2; i <= numero; ++i) {
            fatorial *= i;
        }
        return fatorial;
    }
}

int main() {
    int numero;

    printf("Digite um número para calcular o fatorial: ");
    scanf("%d", &numero);

    unsigned long long resultado = calcularFatorial(numero);

    if (resultado != 0) {
        printf("O fatorial de %d é %llu\n", numero, resultado);
    } else {
        printf("Não é possível calcular o fatorial de um número negativo.\n");
    }

    return 0;
}