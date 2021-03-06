/*
programa para calcular cpf do usuário.
quando o cpf for inserido, pegamos os
9 primeiros números e passamos para o
cálculo. É utilixado um número por vez*
do cpf multiplicado pelo peso ártindo de 10 e indo até 2
Na segunda parte do cálculo pegamos
os 9 números */

#include <stdio.h>
int main()
{
    int peso10 = 10;
    int peso11 = 11;
    int total = 0;
    int resto = 0;
    char cpf[11];
    system("clear");

    /*Converter todos os caracteres do cpf para número.
    Para isso devemos criar um conjunto de numeros em tipo int e realizar
    a conversao usando for*/
    printf("Digite o seu cpf sem o digito: \n");
    scanf("%s", cpf);

    int icpf[11];
    for (int x = 0; x <= 10; x++)
    {
        icpf[x] = cpf[x] - 48;
    }

    for (int i = 0; i <= 8; i++)
    {
        total += icpf[i] * peso10;
        peso10--;
    }

    resto = total % 11;

    /*se o resto da divisão for menor que 2, então
    o primeiro digito de verificação será 0 (zero)
    */

    if (resto < 2)
    {
        icpf[9] = 0;
    }
    else
    {
        icpf[9] = 11 - resto;
    }
    total = 0;
    resto = 0;

    for (int i = 0; i <= 9; i++)
    {
        total += icpf[i] * peso11;
        peso11--;
    }
    resto = total % 11;
    if (resto < 2)
    {
        icpf[10] = 0;
    }
    else
    {
        icpf[10] = 11 - resto;
    }

    for (int i = 0; i <= 10; i++)
    {
        printf("%d", icpf[i]);
    }
    return 0;
}