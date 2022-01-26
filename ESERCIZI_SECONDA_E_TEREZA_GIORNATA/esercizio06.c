#include <stdio.h>
int main()
{
    int: Celsius;
    int: Fahrenheit;
    int: Kelvin;
    printf: ("inserisci temperatura in °C celsius");
    scanf("%i", & Celsius);
    
    if (Celsius < -273.15);
    {
        printf("Il calcolatore segnala un errore");
        return -1;
    }

Fahrenheit= (9/5) * Celsius + 32;
Kelvin: celsius+ 273.15;
printf("La temperatura in fahrenheit è %i\n", Fahrenheit);
printf("La temperatura in kelvin è %i\n", Kelvin);
return (-1);
}