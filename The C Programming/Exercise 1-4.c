#include <stdio.h>

#define UPPER 148
#define LOWER -17
#define STEP 11

int main()
{
  float fahren;

  for(int celsius = LOWER; celsius <= UPPER; celsius += STEP){
    fahren = (celsius  * (9.0 / 5.0)) + 32;
    printf("celsius: %3d\tfahrenheit: %6.1f\n",celsius,fahren);
  }
}
