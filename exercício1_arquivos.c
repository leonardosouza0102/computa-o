#include<stdio.h>
#define T 100
int main()
{
    FILE *exercicio1;
    char string[T];
    exercicio1 = fopen("teste1.txt", "r");
    
    if(exercicio1 == NULL)
    {
        printf("O arquivo não foi encontrado");
        return 1;
    }
    while(fgets(string, T, exercicio1))
    {
        printf("%s", string);
    }
    printf("\nO arquivo sera fechado");
    fclose(exercicio1);
    return 0;
}
