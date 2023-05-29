#include <stdio.h>

#define UPPER 300
#define LOWER 0
#define STEP  20

int printFahren2Celsius (int upperf, int lowerf, int stepf);

int main()
{
  int celsius;
  printFahren2Celsius (UPPER,LOWER,STEP);
}

int printFahren2Celsius (int upperf,int lowerf,int stepf)
{
  int celsius;
  for (float fahren = upperf; fahren >= lowerf; fahren -= stepf){
    celsius = (fahren - 32) * (5.0 / 9.0);
    printf ("Fahrenheit: %6.1f \t Celsius: %3d\n", fahren, celsius);
  }
}
