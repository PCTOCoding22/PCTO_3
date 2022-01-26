#include <stdio.h>

int main()
{
    int Celsius;
    printf("inserisci una temperatura in Celsius e te la calcoleremo in Kelvin e Fahrenheit");
    int Fahrenheit;
    int Kelvin;
    
    scanf("%i", &Celsius);

    if (Celsius < -273.15)
   {
        printf("nun se può fa/n");
        return (-1);
    }
    Fahrenheit = (9/5) * Celsius + 32;
    Kelvin = Celsius + 273.15;
    printf("La temperatura in fahrenheit è: %i/n" , Fahrenheit);
    printf(" e la temperatura in kelvin è: %i/n", Kelvin);
    return (0);
    }