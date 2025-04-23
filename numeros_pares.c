#include <stdio.h>
int main()
{
   int numero, i, resultados;
   printf("Digite um numero:\n");
   scanf("%d", &numero);
   for(i=0; i<=numero; i+=2)
   {
   if(numero%2!=0)
   {
   resultados=(numero-1)-i;
   }
   else
   {
   resultados=numero-i;
   }
   printf("%d\n", resultados);
   }
   return 0;
}
