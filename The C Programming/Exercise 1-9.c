#include <stdio.h>

int main()
{
  int c, cprev;

  while((c = getchar()) != EOF){
    
    /* convert tabs into space */
    if (c == '\t') 
      c = ' ';
    /* putting value of c only if the current value and previous value not a space */
    if (!(cprev == ' ' && c ==' '))
      putchar(c);
    /* assigning value of c into cache variable */
    cprev = c;
  }
}                         
