#include <stdio.h>

int main()
{
    float Celsius;
    float Fahrenheit;
    float Kelvin;
    printf("L'utente inserisce temperatura in gradi Celsius: ");
    scanf("%f", &Celsius);
    if(Celsius < -273.15)
    {
        printf("il calcolatore segnala errore \n");
        return (-1);
    }
    Fahrenheit = (9/5) * Celsius + 32;
    Kelvin = Celsius + 273.15;
    printf("la temperatura in Fahrenheit è %f\n", Fahrenheit);
    printf("la temperatura in Kelvin è %f\n", Kelvin);
    return (0);
}