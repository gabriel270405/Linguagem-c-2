#include <stdio.h>
#define PI 3.14159

int main()
{
    float raio, area;
    printf("Digite o valor do raio do círculo, e ENTER\n");
    scanf("%f", &raio);
    printf("Raio digitado é %12.2f\n", raio);
    area= PI * raio * raio;
    printf("Area do círculo com raio %f é %f\n", raio, area);
    return 0;
}