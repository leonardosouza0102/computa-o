#include<stdio.h>
int main()
{
   int x=0, m[x][x], i, j;
   printf("Digite um número: ");
   scanf("%d", &x);
   for(i=1; i<=x; i++)
   {
       m[i][1]==1;
       for(j=1; j<=x; j++)
       {
         m[i][j]+m[i][j+1]==m[i+1][j+1];
         if(i<=j)
         {
           printf("%d", m[i][j]);
         }
         else
         break;
       }
      printf("\n");
   }
   return 0;
}
