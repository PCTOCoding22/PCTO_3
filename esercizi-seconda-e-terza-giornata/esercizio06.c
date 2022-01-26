#include <stdio.h>

int main()
{
    float temperaturacelsius;
    float temperaturakelvin;
    float temperaturafahrenheit;
    printf("inserisci una temperaturacelsius: ");
    scanf("%f", &temperaturacelsius);
    if (temperaturacelsius < -273.15)
    {
        printf("errore\n");
        return -1;
    }
    temperaturafahrenheit = (9/5) * temperaturacelsius + 32;
    printf("temperaturafahrenheit: %f\n", temperaturafahrenheit);
    temperaturakelvin = temperaturacelsius + 273,15;
    printf("temperaturakelvin: %f\n", temperaturakelvin);
    return (0);
}
