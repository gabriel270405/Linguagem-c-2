#include<stdio.h>
#define a 100
int main()
{
    float valor, desconto, resultado;

    printf("Digite um valor\n");
    scanf("%f", &valor);

    printf("Digite a porcentagem do desconto\n");
    scanf("%f", &desconto);

    resultado= desconto / a;
    resultado= valor * resultado;
    
    printf("O valor é %f", resultado);

    return 0;
}
