#include<stdio.h>
#define T 100
int main()
{
   int j, xa, xe, xi, xo, xu;
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
         xa++;
       else if(string[j] == e)
         xe++;
       else if(string[j] == i)
         xi++;
       else if(string[j] == o)
         xo++;
       else if(string[j] == u)
         xu++;
   }
   if(string[j] == a)
   {
       printf("a:");
       for(j=1; j<=xa; j++)
       {
           printf("*");
       }
       printf("(%d)\n", xa);  
   }
   else if(string[j] == e)
   {
       printf("e:");
       for(j=1; j<=xe; j++)
       {
           printf("*");
       }
       printf("(%d)\n", xe);  
   }
   else if(string[j] == i)
   {
       printf("i:");
       for(j=1; j<=xi; j++)
       {
           printf("*");
       }
       printf("(%d)\n", xi);  
   }
    else if(string[j] == o)
   {
       printf("o:");
       for(j=1; j<=xo; j++)
       {
           printf("*");
       }
       printf("(%d)\n", xo);  
   }
   else if(string[j] == u)
   {
       printf("u:");
       for(j=1; j<=xu; j++)
       {
           printf("*");
       }
       printf("(%d)\n", xu);  
   }
    return 0;
}
