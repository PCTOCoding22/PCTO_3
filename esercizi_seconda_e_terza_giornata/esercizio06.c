#include <stdio.h>

int main()
{
 float temperatura_celsius;
 float temperatura_fahrenheit; 
 float temperatura_kelvin;
 printf("inserire temperatura in °C(273.15)");
 scanf("%f", & temperatura_celsius);
 if(temperatura_celsius < 273.15);
 {
     printf("errore\n");
     return(-1);
 }
 temperatura_fahrenheit = (9/5) * temperatura_celsius + 32;
 printf ("%f", temperatura_fahrenheit);
 temperatura_kelvin = temperatura_celsius + 273.15;
 printf ("%f", temperatura_kelvin);
 return(0);
}

