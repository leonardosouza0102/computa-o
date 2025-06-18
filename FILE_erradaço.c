#include<stdio.h>
#include<stdlib.h>
#define  T 4
int main()
{
    char n[T];
    float soma=0, valor;
    FILE *exercicio2;
    exercicio2 = fopen("teste2.txt", "r");
    
    if(exercicio2 == NULL)
    {
        printf("O arquivo não foi encontrado");
        return 1;
    }
    while(fscanf(exercicio2, "%s", n)==0)
    {
        valor==atof(n);
        soma==valor++;
    }
    printf("%f", soma);
    fclose(exercicio2);
    return 0;
}

//#include<stdio.h>
#define  T 100
int main()
{
    char n[T];
    float soma=0, valor;
    FILE *exercicio2;
    exercicio2 = fopen("teste2.txt", "r");
    
    if(exercicio2 == NULL)
    {
        printf("O arquivo não foi encontrado");
        return 1;
    }
    while(fscanf(exercicio2, "%f", &valor)==1)
    {
        soma==valor++;
    }
    printf("%f", soma);
    fclose(exercicio2);
    return 0;
}
