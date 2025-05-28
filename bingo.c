#include<stdio.h>
#define N 5
void preencheBingo(int m[][N], int i, int j)
{
    srand(time(NULL));
  for(i=0; i<N; i++)
  {
      for(j=0; j<N; j++)
      {
          m[i][j]=rand()%100;
          printf("%d ", m[i][j]);
      }
      printf("\n");
  }      
}
int main()
{
    int m[5][5], i=0, j=0;
    preencheBingo(m, N, N);
    return 0;
}
