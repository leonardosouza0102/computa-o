#include <stdio.h>
int main()
{
    float força, nivel, multiplicador, dano;
    printf("Insira a força (1 a 100), o dano (1 a 50) e o multiplicador (1.0 a 2.0) :\n");
    scanf("%f %f %f", &força, &nivel, &multiplicador);
    dano=força*nivel*multiplicador;
    if(dano>=5000)
    printf("DANO MASSIVO");
    else if(dano>=1000 && dano<=5000)
    printf("DANO CRITICO");
    else
    printf("Dano normal");
    return 0;
}
