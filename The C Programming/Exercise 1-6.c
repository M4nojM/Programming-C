#include <stdio.h>

/* The != has higher precedence than =   */

int main()
{
  int c;
  
  while(1){
    printf("The expression is: %d", getchar() != EOF);
  }
}
