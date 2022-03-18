#include <stdio.h>
int main() {

    int n;
    int mult;

    printf("Digite um número para ser multiplicado");
    scanf("%d", &n);

    for(mult = 1 ; mult <= 10 ; mult++){
        printf("%d x %d = %d\n", n,mult,(n*mult));

    
    }
return 0;
}
