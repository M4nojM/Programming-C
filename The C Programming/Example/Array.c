#include <stdio.h>

int main()
{
  int ch, i, blank, other;
  int digit[10];

  blank = other = 0;
  for (i = 0; i < 10; i++)
    digit[i] = 0;

  i = 0;
  while ((ch = getchar()) != EOF) 
    if (ch >= '0' && ch <= '9'){
      digit[i] = ch - '0';
      i++;   
    }
    else if ( ch == ' ' || ch == '\n' || ch == '\t')
      ++blank;
    else
      ++other;
    
  printf("digits =");
  for(i = 0; i < 10; i++)
    printf("%d ", digit[i]);
  printf(", spaces = %d, other = %d\n", blank - 1, other);
}
