#include <stdio.h>

int main()
{
  printf("%6s\t\tprinting as decimal integer\n","%d");
  printf("%6s\t\tprinting as decimal integer, atleast 6 character wide\n","%6d");
  printf("%6s\t\tprinting as floating point\n","%f"); 
  printf("%6s\t\tprinting as floating point,atleast 6 character wide\n","%6d"); 
  printf("%6s\t\tprinting as floating point,2 character after the decimal point\n","%.2d"); 
  printf("%6s\t\tprinting as floating point,atleast 6 character wide,2 character after the decimal point\n","%6.2f"); 
}
