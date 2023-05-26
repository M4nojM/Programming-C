#include <stdio.h>

#define UPPER 300
#define LOWER 0
#define STEP 20

int main()
{
  int celsius;
  
  for(float fahren = UPPER; fahren >= LOWER; fahren -= STEP){
    celsius = (fahren - 32) * (5.0 / 9.0);
    printf("fahrenheit: %3.1f \t celsius: %6d\n", fahren, celsius);
  }
}
