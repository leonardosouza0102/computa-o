#include<stdio.h>
int main()
{
   int x, i, j;
   printf("Digite um número: ");
   scanf("%d", &x);
   int m[x][x];
   for(i=0; i<x; i++)
   {
       for(j=0; j<=i; j++)
       {
            if(j==0 || j==i)
            {
              printf("%d ", m[i][j]=1);
            }
            else
            {
              //m[i+1][j+1]=m[i][j]+m[i][j+1];
              m[i][j] = m[i-1][j-1] + m[i-1][j];
              printf("%d ", m[i][j]);
            }
       }
      printf("\n");
   }
   return 0;
}
