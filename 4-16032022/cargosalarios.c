#include <stdio.h>
int main() 
{


char cargo[15] = "";

printf("Digite o cargo e tecle ENTER\n");
scanf("%s",cargo);

if(strcmp (cargo,"diretor")==0){
    printf("O salário do diretor é 15,000");
}

else if(strcmp (cargo,"gerente")==0){
    printf("O salário do gerente é 12,000");
}

else if(strcmp(cargo,"analista")==0){
    printf("O salário do analista é 8,000");
}

else if (strcmp(cargo,"assistente")==0){
    printf("O salário do assistente é 4,000");
}

else if(strcmp(cargo,"auxiliar")==0){
    printf("O salário do auxiliar é 2,000");
}
else{
    printf("Não há salário");
}
return 0;
}

