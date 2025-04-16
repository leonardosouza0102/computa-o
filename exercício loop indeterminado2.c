#include<stdio.h>
int main()
{
    int i=1, n, maior=0;
    printf("Digite um Número:");
    scanf("%d",&n);
    while(n>=0)
    {
        if(n>maior)
        {
          n=maior
            printf("Digite um Número:");
         scanf("%d",&n);
        }      
        else
        {
         printf("Digite um número:");
         scanf("%d", &n);
        }
    }
   printf("%d", maior);
   return 0;
}
