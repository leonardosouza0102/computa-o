#include <stdio.h>

void converteHora (int totalseg, int *hora, int *min, int *seg)
{
    *hora=(totalseg/3600)-(totalseg%3600);
    *min=((totalseg%3600)/60)-((totalseg%3600)%60);
    *seg=(totalseg%3600)%60;
}
int main()
{
    int totalseg, hora, min, seg;
    printf("Digite o total de segundos: ");
    scanf("%d", &totalseg);
    converteHora(totalseg, &hora, &min, &seg);
    printf("%d:%d:%d", hora, min, seg);
    return 0;
}    
