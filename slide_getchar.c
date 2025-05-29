#include<stdio.h>
int main ()
{
  char c;

  while (1)
{
    c = getchar ();
    if (c != '\n')
    printf ("Digitou '%c' (ASCII %d)\n", c, c);
}

  return (0);
}
