#include <stdio.h>

int main()
{
    float celsius;
    float kelvin;
    float fahrenheit;
    printf("inserisci la temperatura");
    scanf("%f", &celsius);
    if (celsius < -273.15)
{
     printf("errore\n");
     return -1;
}
     fahrenheit = (9/5) * celsius +32;
     printf("fahrenheit: %f\n", fahrenheit);
     kelvin = celsius + 273.15;
     printf("kelvin: %f\n", kelvin);
     return 0;
}     

