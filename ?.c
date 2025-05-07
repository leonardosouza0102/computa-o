#include<stdio.h>
int main()
{
    int i=1, n;
    printf("Digite um número:");
    scanf("%d", &n);
          while(n>=0)
    {
        printf("%d\n", i);
        i++;
        scanf("%d", &n);
    }
    printf("%d", n);
    return 0;
}
