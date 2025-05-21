//PRIMEIRO
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
        printf("\n");
    }
    return 0;
}

//SEGUNDO
#include <stdio.h>
int main()
{
    int j, i, y, x, m[5][5], x2, y2;
    srand(time(NULL));
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
       {
           int y=rand()%101;
           int x=rand()%101;
         printf("%d ", m[y][x]);
       }
        printf("\n");
    }
     printf("\n");
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
       {
           int y=rand()%101;
           int x=rand()%101;
         printf("%d ", m[x][y]);
       }
        printf("\n");
    }
    
    return 0;
}



