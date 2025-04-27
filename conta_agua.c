#include <stdio.h>

int main()
{
   int consumo, total;
   printf("Digite o seu consumo em metros cúbicos:");
   scanf("%d", &consumo);
    if(consumo<10)
    total=7;
    else if(consumo>=11 && consumo<=30)
    total=7+1*(consumo-10);
    else if(consumo>=31 && consumo<=100)
    total=7+1*(20)+2*(consumo-30);
    else if(consumo>=101)
    total=7+1*(20)+2*(70)+5*(consumo-100);
        
   printf("O seu consumo foi %d reais por metros cúbicos", total);

    return 0;
}
