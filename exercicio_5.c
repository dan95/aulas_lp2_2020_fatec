#include <stdio.h>

int main()
{
    float distancia, litrosConsumo, consumoMedio;

    printf("Digite a distância percorrida em Km:\n");
    scanf("%f", &distancia);

    printf("Digite a quantidade de litros de combustível consumidos:\n");
    scanf("%f", &litrosConsumo);

    consumoMedio = distancia / litrosConsumo;

    printf("Consumo médio: %.3f L/Km", consumoMedio);

    return 0;
}
