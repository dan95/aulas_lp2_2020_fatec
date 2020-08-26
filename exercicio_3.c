#include <stdio.h>

int main()
{
	float celsius, fahrenheit;

	printf("Digite a temperatura em Fahrenheit:\n");
	scanf("%f", &fahrenheit);

	celsius = ((fahrenheit-32) * 5) / 9;
	printf("\n Temperatura em Celsius: %.2f", celsius);

	return 0;
}
