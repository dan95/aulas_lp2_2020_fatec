#include <stdio.h>

int main()
{
    char caracter;
    int caracterTabelaAscii;
    printf("Digite o caracter desejado: \n");
    scanf("%c", &caracter);

    caracterTabelaAscii = (int)caracter;
    printf("Codigo ASCII decimal: %d\n", caracterTabelaAscii);
    printf("Codigo ASCII octal: %o\n", caracterTabelaAscii);
    printf("Codigo ASCII hexadecimal: %x", caracterTabelaAscii);

    return 0;
}
