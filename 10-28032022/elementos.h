/*
Este arquivo foi nomeado com a extensão 
.h(header->cabeçalho "biblioteca"). Assim podemos criar algumas
funções e/ou estruturas compartilhadas, sendo possivel ser
utilizadas por diversos programas
todas as vezes que esta biblioteca for usada, é importante realizar 
a sua inclusão no código que irá utiliza-la.
*/

#include<stdio.h>
#include<stdlib.h>

void separador() {
    printf("\n");
    for(int i = 0 ; i <= 100 ; i++){
        printf("#");
    }
    printf("\n");
}
void quebrarLinha(int qtdVezes){
    for(int i = 1 ; i <= qtdVezes ; i++ ){
        printf("\n");
    }
}


