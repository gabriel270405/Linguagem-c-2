#include<stdio.h>

int main()
{
    int opcao = 0;
    
    system("clear");//clear screen (limpar a tela)//
    printf("#########################################################");
    printf("\n#\t Programa para exibir salário\t\t\t#\n");
    printf("#########################################################");
    printf("\nEscolha um dos cargos abaixo digitando o número:\n");
    printf("\t1 - Diretor\n");
    printf("\t2 - Gerente\n");
    printf("\t3 - Analista\n");
    printf("\t4 - Assistente\n");
    printf("\t5 - Auxiliar\n");
    printf("----------------------------\n");

    scanf("%d", &opcao);
    
    
    
    
    
    
    switch(opcao){
            
            
            case 1:
            printf("O salário do diretor é R$ 15.000,00");
            break;
            
            case 2:
            printf("O salário do gerente é R$12.000,00");
            break;

            case 3:
            printf("O salário do analista é R$8.000,00");
            break;

            case 4:
            printf("O salário do assistente é R$4.000,00");
            break;

            case 5:
            printf("O salário do auxiliar é R$2.000,00");
            break;

            default:
            printf("Náo há salário");
            break;    
    
    }

    return 0;

}
    