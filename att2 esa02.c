#include <stdio.h>

double potenciacao(double base, int expoente) {
    if (expoente == 0) {
        return 1;
    } else if (expoente > 0) {
        double resultado = 1;
        for (int i = 0; i < expoente; ++i) {
            resultado *= base;
        }
        return resultado;
    } else {
        // Caso o expoente seja negativo, a lógica seria ajustada
        // para calcular a potência inversa.
        return 1.0 / potenciacao(base, -expoente);
    }
}

int main() {
    double base;
    int expoente;

    printf("Digite a base: ");
    scanf("%lf", &base);

    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    double resultado = potenciacao(base, expoente);

    printf("%lf elevado a %d é igual a %lf\n", base, expoente, resultado);

    return 0;
}