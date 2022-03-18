#include<stdio.h>
int main() 
{
  int a;
  int ano;  
  int qtd = 0;  
    
    for(ano = 1950; ano <= 2022; ano++){
        if( ano % 4 == 0){
    
        printf("%d é bissexto\n",ano);    
        qtd++;
    }
    }
        printf("Encontramos %d anos bissexto", qtd);    

  return 0; 
}