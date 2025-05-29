#include<stdio.h>
#define T 100
int main()
{
   int i;
   char string[T];
   char a='a';
   char e='e';
   char I='I';
   char o='o';
   char u='u';
   printf("Digite uma string: ");
   fgets(string, T, stdin);
   for(i=0; string[i]; i++)
   {
       if(string[i] == a)
       {
           printf("a:");
           while(string[i])
           {
               i++;
               printf("*");
           }
           printf("(%d)", i);
       }
       else
       {
           break;
       }
       if(string[i] == e)
       {
           printf("e:");
           while(string[i])
           {
               i++;
               printf("*");
           }
           printf("(%d)", i);
       }
       else
       {
           break;
       }
       if(string[i] == I)
       {
           printf("I:");
           while(string[i])
           {
               i++;
               printf("*");
           }
           printf("(%d)", i);
       }
       else
       {
           break;
       }
        if(string[i] == o)
       {
           printf("o:");
           while(string[i])
           {
               i++;
               printf("*");
           }
           printf("(%d)", i);
       }
       else
       {
           break;
       }
       if(string[i] == u)
       {
           printf("u:");
           while(string[i])
           {
               i++;
               printf("*");
           }
           printf("(%d)", i);
       }
       else
       break;
   }
   return 0;
}
