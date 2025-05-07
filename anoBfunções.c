#include <stdio.h>
int Bissexto(int ano)
{
    if(ano%4==0&&(ano%100!=0||ano%400==0))
    return 1;
    else
    return 0;
}
int main()
{
    int data;
     printf("Digite um ano: ");
     scanf("%d", &data);
     if(Bissexto(data)==1)
     printf("O ano eh bissexto :%d", Bissexto(data));
     else
     printf("O ano não eh bissexto");
     return 0;
}
