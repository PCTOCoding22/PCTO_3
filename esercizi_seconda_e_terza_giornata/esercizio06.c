#include <stdio.h>

int main()
{
    float tcelsius;
    float kelvin;
    float fahrenheit;
    printf("inserisci la temperatura: ");
    scanf("%f", &tcelsius);
    if (tcelsius < -273.15)
    {
        printf("errore");
        return -1;
    }
    fahrenheit = (9/5) * tcelsius + 32;
    printf("fahrenheit: %f\n", fahrenheit);
    kelvin = tcelsius + 273.15;
    printf("kelvin: %f\n", kelvin);
    return 0;
}