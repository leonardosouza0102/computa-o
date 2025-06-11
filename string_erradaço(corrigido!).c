#include<stdio.h>
#define T 100
int main()
{
   int j, xa=0, xe=0, xi=0, xo=0, xu=0;
   char string[T];
   char a='a';
   char A='A';
   char e='e';
   char E='E';
   char i='i';
   char I='I';
   char o='o';
   char O='O';
   char u='u';
   char U='U';
   printf("Digite uma string: ");
   fgets(string, T, stdin);
   for(j=0; string[j]; j++)
   {
       if(string[j] == a)
         xa++;
       else if(string[j] == e || string[j] == E)
         xe++;
       else if(string[j] == i || string[j] == I)
         xi++;
       else if(string[j] == o || string[j] == O)
         xo++;
       else if(string[j] == u || string[j] == U)
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
