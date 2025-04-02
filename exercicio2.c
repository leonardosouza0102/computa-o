#include<stdio.h>
int main()
{
    int hora, min;
    float seg;

    printf("Digite hora, minuto e segundo:");
    scanf("%d %d %f", &hora, &min, &seg);
    if(hora>1 && min>15);
    {
        printf("quantidade de segundos: %f\n", (hora*3600)+(min*60)+seg);
    }

    else
    {

        printf("quantidade de minutos: %f\n",(hora*60)+min+(seg\60.0));
    }



    return 0;
}
