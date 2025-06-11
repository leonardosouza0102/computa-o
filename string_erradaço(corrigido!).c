#include<stdio.h>
#define T 100
int main()
{
   int j, xa=0, xe=0, xi=0, xo=0, xu=0;
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
       else if(string[j] == e || string[j] == E)
         xe++;
       else if(string[j] == i )
         xi++;
       else if(string[j] == o)
         xo++;
       else if(string[j] == u)
         xu++;
   }
   if(xa > 0)
   {
       printf("a:");
       for(j=1; j<=xa; j++)
       {
           printf("*");
       }
       printf("(%d)\n", xa);  
   }
   if(xe > 0)
   {
       printf("e:");
       for(j=1; j<=xe; j++)
       {
           printf("*");
       }
       printf("(%d)\n", xe);  
   }
   if(xi > 0)
   {
       printf("i:");
       for(j=1; j<=xi; j++)
       {
           printf("*");
       }
       printf("(%d)\n", xi);  
   }
   if(xo > 0)
   {
       printf("o:");
       for(j=1; j<=xo; j++)
       {
           printf("*");
       }
       printf("(%d)\n", xo);  
   }
   if(xu > 0)
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
