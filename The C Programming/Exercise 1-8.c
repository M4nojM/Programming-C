#include <stdio.h>

int main()
{
  int c,b,tb,nl;

  nl=tb=b=0;
  
  while((c = getchar()) != EOF){
    if (c == '\n')
      nl++;
    if(c == '\t')
      tb++;
    if(c == ' ')
      b++; 
  }
  printf("Blanks: %d \tTabs: %d \tNewlines: %d \n",b,tb,nl);
}
