#include <stdio.h>

int main()
{
    int n, i, proximo=0, a=0, b=1;
    printf("Digite um número não negativo\n");
    scanf("%d", &n);
    printf("0 1 ");
    for(i=0; i<n-2; i++)
    {
        proximo=a+b;
        printf("%d ", proximo);
        a=b;
        b=proximo;
    }
    
    return 0;
}
