#include <stdio.h>

int main()
{
    int i, j, n, m;
 
    printf("Digite dois números:");
    scanf("%d %d", &n, &m);
    for(i=1; i<=n; i++)
    {
    for(j=1; j<=m; j++)
    {
        printf("%d ", j*i);
    }
    printf("\n");
    }
   
    return 0;
}
