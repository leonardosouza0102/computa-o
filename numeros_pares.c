#include <stdio.h>
int main()
{
    int numero, i, resultados;
    printf("Digite um numero:\n");
    scanf("%d", &numero);
    for(i=0; i<=numero; i+=2)
    {
        if(numero%2!=0)
        {
            resultados=i;
        }
        else
        {
            resultados=i;
        }
        printf("%d\n", resultados);
    }
    return 0;
}
