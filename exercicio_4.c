#include <stdio.h>
#define PI 3.1415

int main()
{
    float raio, perimetro, area;
    printf("Digite o raio da circunferência em metros: ", 136);
    scanf("%f", &raio);

    perimetro = 2 * PI * raio;
    area = 2 * PI * raio * raio;

    printf("Perímetro: %.2fm\n", perimetro);
    printf("Área: %.2fm²", area);
}
