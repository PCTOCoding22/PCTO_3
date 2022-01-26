#include <stdio.h>

int main()
{
 float x;
printf(" inserisci la temperatura in celsius");
scanf("%f", &x );
if ( x< -273.15)
{
    printf("errore\n");
}
return (-1);
  float f;
  float k;
  f = (9/5)* x + 32;
  k = x + 273.15;
  printf("la temperatura in fahrenheit è: %f\n", f);
  printf("la temperatura in kelvin è:%f\n", k);
return (0);
}
