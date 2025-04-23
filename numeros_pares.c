#include <stdio.h>
int main()
{
    int numero, i, resultados;
    printf("Digite um numero:\n");
    scanf("%d", &numero);
    for(i=0; i<=numero; i+=2)
    {
       resultados=i;
        printf("%d\n", resultados);
    }
    return 0;
}
