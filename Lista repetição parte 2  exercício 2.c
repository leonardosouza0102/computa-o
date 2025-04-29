#include <stdio.h>

int main()
{
	int i, positivos=0;
	float n, media=0, soma=0;
	printf("Digite um numero\n");
	scanf("%f", &n);
	for(i=0; n!=-1000; i++)
	{
	   if(n>0)
	   {
	        soma += n;
            positivos++;
	   }
	   else
	   break;
	   media=soma/i;
	   scanf("%f", &n);
	}
	printf("%d valores positivos\n", positivos);
	printf("Media: %.1f", media);
	return 0;
}
