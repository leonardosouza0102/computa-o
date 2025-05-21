#include <stdio.h>
int main()
{
    int j, i, y, x, tam1, tam2, m[tam1][tam2];
    srand(time(NULL));
    tam1=rand()%11;
    tam2=rand()%11;
    for(i=0; i<tam1; i++)
    {
        for(j=0; j<tam2; j++)
       {
        y=rand()%101;
        x=rand()%101;
         printf("%d ", m[y][x]);
       }
        
    }
    return 0;
}

