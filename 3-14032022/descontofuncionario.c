#include<stdio.h>
#define LIMITE 5000.00

int main ()

float salarioFuncionario;
printf("Digite o salário do funcionário e tecle enter!\n");
scanf("%f", &salarioFuncionario);

if (salarioFuncionario > LIMITE){
printf("O funcionário terá o desconto de %2.f\n", (salarioFuncionario*0.05));
printf("O valor final é %2.f\n", salarioFuncionario - (salarioFuncionario*0.05));
}
else{
printf("O funcionário não terá desconto!\n");

}
return 0;
}

