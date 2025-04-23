#include <math.h>
#include <stdio.h>
int main()
{
    float altura, largura, area, litro;
    int LITRO;
    printf("Digite a altura e a largura da parede em metros: ");
    scanf("%f %f", &altura, &largura);
    area=altura*largura;
    litro=area/2;
    LITRO=ceil(litro);
    printf("Área da parede em metros quadrados: %f\n", area);
    printf("Quantidade de tinta em litros: %d", LITRO);

    return 0;
}
