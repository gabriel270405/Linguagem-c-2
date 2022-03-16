#include <stdio.h>
int main()
{
    int a,b,c;

    printf("Digite um número");
    scanf("%d", &a);

    printf("Digite outro valor");
    scanf("%d", &b);

    c= a % b;

    printf("O resultado é %d\n", c);

    return 0;
}
