#include <stdio.h>
#include <math.h>
float arredonda(float x, float y)
{
    if(y>=0)
    return x=round(y);
    else
    return x=round(y*(-1));
}
int main()
{
    float valor, arredondado;
    printf("Digite um valor: ");
    scanf("%f", &valor);
    if(valor>=0)
    printf("O valor arredondado é: %.1f", arredonda(arredondado, valor));
    else
    {
    printf("O valor arredondado é: -%.1f", arredonda(arredondado, valor));
    }
}
