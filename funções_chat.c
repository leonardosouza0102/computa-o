#include <stdio.h>
void determinaValores (int a, int b, int c, int n)
{
    for(a=0; a<=n; a++)
    {
         for(b=0; b<=n; b++)
         {
             for(c=0; c<=n; c++)
             {
                if(a+b+c==n)
                printf("%d + %d + %d = %d\n", a, b, c, n);
             }
         }
    }
}
int main ()
{
    int a=0, b=0, c=0, n;
    printf("Digite um número:");
    scanf("%d", &n);
    determinaValores(a, b, c, n);
    return 0;
}
