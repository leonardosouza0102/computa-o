#include <stdio.h>

int main()
{
    int base, início, fim, i, múltiplo=0, soma=0;
    printf("Digite um número base, o início do intervalo e seu fim:");
    scanf("%d %d %d", &base, &início, &fim);
    for(i=1; múltiplo<=fim; i++)
    {
        múltiplo=base*i;
        if(múltiplo>fim)
        break;
        if(múltiplo>=início)
        soma+=múltiplo;
    }
    printf("A soma dos múltiplos de %d de %d até %d é igual a %d", base, início, fim, soma);
    return 0;
}
