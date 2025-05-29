#include<stdio.h>
#define T 100
int main()
{
   int j, contaa, contae, contai, contao, contau;
   char string[T];
   char a='a';
   char e='e';
   char i='i';
   char o='o';
   char u='u';
   printf("Digite uma string: ");
   fgets(string, T, stdin);
   for(j=0; string[j]; j++)
   {
       if(string[j] == a)
       {
           contaa++;
           printf("a:");
           for(j=1; string[j]; j++)
           {
               printf("*");
           }
           printf("(%d)\n", contaa);
       }
       else if(string[j] == e)
       {
           printf("e:");
           for(j=1; string[j]; j++)
           {
               j++;
               printf("*");
           }
           printf("(%d)\n", j);
       }
   }
   return 0;
}
