#include <math.h>
#include <stdio.h>
double casasDecimais (double x)
{
    if(x>=0 && x<0.50)
      return x-(round(x));
    else if(x>=0 && x>=0.50)
      return x-(ceil(x-1));
    else if(x<0 && x>-0.50)
      return x-(round(x));
    else if(x<0 && x<=-0.50)
      return x-(ceil(x));
}
int main()
{
    double número;
    printf("Digite um número em ponto flutuante: ");
    scanf("%lf", &número);
    printf("As casas decimais são: %f", casasDecimais(número));
    return 0;
}
