#include <stdio.h>

int main ()
{
    int Celsius;
    int Fahrenheit;
    int Kelvin;
    printf("l'utente inserisce temperatura in gradi Celsius");
    scanf("%i", &Celsius);

    if (Celsius < -273.15)
    {
        printf("il calcolatrore segnala errore");
        return -1;
    }     
    Fahrenheit = (9/5) * Celsius + 32;
    Kelvin = Celsius + 273.15;
    printf("la temperatura in Fahrenheit è %i\n", Fahrenheit);
    printf("la temperatura in Kelvin è %i\n", Kelvin);
    return (-1);
}      