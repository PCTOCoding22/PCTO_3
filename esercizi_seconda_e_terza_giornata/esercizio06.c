#include <stdio.h>
int main ()
{
    int Celsius;
    int Fahreneit;
    int Kelvin;
    printf("inseriscela temperatura in gradi celsius");
    scanf("%i" , & Celsius );

    if(Celsius < -273.15);
    {
        printf ("il calcolare segnala unerrore");
        return -1;
    }
    Fahreneit = (9/5) * Celsius + 32;
    Kelvin = Celsius + 273.15;
    printf ("la temperatura in fahreneit è%i\n", Fahreneit);
    printf("la temperatura in  kelvin è%i\n" , Kelvin);
    return (-1);
}