#include <stdio.h>

int main()
{
  int c;

  while((c = getchar()) != EOF){
    if (c == '\t'){
      c = '\\';
      putchar(c);
      c = 't';
      putchar(c);
    }
    else
      putchar(c);
  }
}
