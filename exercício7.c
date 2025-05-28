#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    #define n 10
    int m1[n][n], m2[n][n], i, j, x;
    srand(time(NULL));
    printf("(0) Criar duas matrizes 10x10 com valores inteiros\n(1) Imprimir as matrizes originais\n(2) Somar as duas matrizes e imprimir o resultado\n(3) Subtrair a primeira matriz da segunda e imprimir o resultado\n(4) Multiplicar uma constante à primeira matriz e imprimir o resultado\n ");
    scanf("%d", &x);
    if(x==0)
    {
        for(i=0; i<n; i++)
        {
           for(j=0; j<n; j++)
               m1[i][j]=rand()%100;
        }
        for(i=0; i<n; i++)
        {
           for(j=0; j<n; j++)
               m2[i][j]=rand()%100;
        }
        printf("Escolha de 0 a 4: ");
        scanf("%d", &x);
    }
    else
    {
        printf("primeiro o 0\n");
        printf("Escolha de 0 a 4: ");
        scanf("%d", &x);
    }
    if(x==1)
    {
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                printf("%d ", m1[i][j]);
            }
            printf("\n");
        }
         printf("\n");
         for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                printf("%d ", m2[i][j]);
            }
            printf("\n");
        }
        printf("Escolha de 0 a 4: ");
        scanf("%d", &x);
    }
    else
    {
        printf("depois o 1\n");
        printf("Escolha de 0 a 4: ");
        scanf("%d", &x);
    }
    if(x==2)
    {
         for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                printf("%d ", m1[i][j]+m2[i][j]);
            }
            printf("\n");
        }
        printf("Escolha de 0 a 4: ");
        scanf("%d", &x);
    }
    else
    {
        printf("depois o 2\n");
        printf("Escolha de 0 a 4: ");
        scanf("%d", &x);
    }
    if(x==3)
    {
         for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                printf("%d ", m1[i][j]-m2[i][j]);
            }
            printf("\n");
        }
        printf("Escolha de 0 a 4: ");
        scanf("%d", &x);
    }
    else
    {
        printf("depois o 3\n");
        printf("Escolha de 0 a 4: ");
        scanf("%d", &x);
    }
    if(x==4)
    {
        int k;
        k=rand()%100;
         for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                printf("%d ", k*m1[i][j]);
            }
            printf("\n");
        }
       return 0;
    }
    else
    {
        printf("Por fim, o 4\n");
        printf("Escolha de 0 a 4: ");
        scanf("%d", &x);
    }
    if(x>4 && x<0)
    {
         printf("Apenas números do 0 ao 4\n");
         printf("Escolha de 0 a 4: ");
         scanf("%d", &x);
    }
    else
    {
     printf("Escolha de 0 a 4: ");
     scanf("%d", &x);
    }
    return 0;
}    
