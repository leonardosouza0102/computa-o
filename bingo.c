#include<stdio.h>
#define N 5
void preencheBingo(int m[][N], int i, int j)
{
    srand(time(NULL));
    for(i=0; i<N; i++)
      for(j=0; j<N; j++)
          m[i][j]=rand()%100;
}
void imprime( int m[][N], int i, int j)
{
     for(i=0; i<N; i++)
     {
        for(j=0; j<N; j++)
        {
            if(m[i][j]==m[i][j])
              printf("%d ", m[i][j]);
            else
              break;
        }
     printf("\n"); 
    }
    
}  
int main()
{
    int m[5][5], i=0, j=0;
    preencheBingo(m, N, N);
    imprime(m, N, N);
    return 0;
}
