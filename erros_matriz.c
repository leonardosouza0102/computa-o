//NÃO FAZER COM FUNÇÃO, COMPLICA DEMAIS
// PRIMEIRA
#include <stdio.h>
void matriz(int *tam1, int *tam2, int m[*tam1][*tam2], int *y, int *x)
{
    int i;
    srand(time(NULL));
    *tam1=rand()%11;
    *tam2=rand()%11;
    m[*tam1][*tam2];
    for(i=0; i<=*tam1;i++)
    {
         int *y=rand()%101;
    }
     for(i=0; i<=*tam2;i++)
    {
         int *x=rand()%101;
    }
}
int main()
{
    int tam1, tam2;
    int m[tam1][tam2], y, x, i, j;
    matriz(&tam1, &tam2, m[tam1][tam2], &y, &x);
    for(i=0;i<tam1;i++)
    {
       for(j=0;j<tam2;j++)
       {
         printf("%d \n", m[y][x]);
       }
    }   
    return 0;
}
//SEGUNDA
#include <stdio.h>
void matriz(int *tam1, int *tam2, int m[*tam1][*tam2], int *y, int *x)
{
    int j;
    int i;
    srand(time(NULL));
    *tam1=rand()%11;
    *tam2=rand()%11;
    for(i=0; i<*tam1; i++)
     {
        for(j=0; j<*tam2; j++)
        {
        *y=rand()%101;
        *x=rand()%101;
         printf("%d\n", m[*y][*x]);
        { 
     }
}
int main()
{
    int tam1, tam2;
    int m[tam1][tam2], y, x;
    matriz(&tam1, &tam2, m[tam1][tam2], &y, &x);
    return 0;
}

