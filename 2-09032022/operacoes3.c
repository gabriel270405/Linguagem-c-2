#include<stdio.h>
int main()
{
    int distancia, tempo, resultado;

    printf("Digite a distância percorrida:\n");
    scanf("%d", &distancia);
    printf("Digite o tempo\n");
    scanf("%d", &tempo);
    resultado= distancia / tempo;
    printf("A velocidade média foi: %dkm/n\n", resultado);

    return 0;
}


