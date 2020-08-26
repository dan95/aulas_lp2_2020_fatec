#include <stdio.h>

int main()
{
    float altura, peso, imc;
    printf("Digite sua altura em m: \n");
    scanf("%f", &altura);

    printf("Digite seu peso em Kg: \n");
    scanf("%f", &peso);

    imc = peso / (altura * altura);

    printf("IMC calculado: %.2f", imc);

    return 0;
}
