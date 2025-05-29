#include <stdio.h>
int main()
{
    int n, i=1, x;
    printf("Digite um número: ");
    scanf("%d", &n);
    x=n+2;
    while(i<=100)
    {
        x%n==2;
        printf("%d\n", x);
        x+=n;
        i++;
    }
    
    return 0;
}
