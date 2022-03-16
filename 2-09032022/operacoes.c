#include <stdio.h> //biblioteca standard input/output
int main()
{
    float g,t , somar, subtrair, divisao, multiplicacao;
       
       printf("Digite um número\n");
       scanf("%f" ,&g );
       
       printf("Digite outro número\n");
       scanf("%f",&t );
       
       multiplicacao= (g * t);
       divisao = (g / t); 
       somar= (g + t) ; 
       subtrair= (g - t);

       printf("O valor da multiplicação é %f\n", multiplicacao);
       printf("O valor da divisão é %f\n", divisao); 
       printf("O valor da soma é %f\n", somar);
       printf("O valor da subtração é %f\n", subtrair);

    
       return 0;
}


   
       
       
       

