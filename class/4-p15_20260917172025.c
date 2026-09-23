#include <stdio.h>

int main(void){
  float fahrenheit, celsius;
  
  printf("Enter Fahrenheit temperature: ");
  scanf("%f", &fahrenheit);
  celsius = 5 * (fahrenheit - 32) / 9;
  printf("Celsius equivalent: %.1f\n", celsius);

   return 0;
}
