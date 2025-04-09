#include <stdio.h>
int main()
{
    float n1, n2, n3,
          media;
    printf("Digite as tres notas:");
    scanf("%f %f %f", &n1, &n2, &n3);
    media=(n1+n2+n2)/3;
    printf("Digite sua frequencia");
    scanf("%f", &n4);
    frequencia=(n4);
    if(media>8,0 && frequencia>=75)
      printf("Aprovado com Distinção");
    else if(media>=6,0 && frequencia>=75)
      printf("Aprovado Direto");
    else if(media>=4,0 && ffrequencia>=75 || media>=6,0 && frequencia<75 || media>=4,0 && frequencia>50 && frequencia<75)
      printf("Vai para a Final");
    else
        printf("Reprovado Direto");
    return 0;
}
