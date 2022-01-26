#include <stdio.h>

int main()
{
    int eta;
    printf("inserisci la tua età: ");
    scanf("%i", &eta);
    if (eta >= 18)
    {
        printf("puoi prendere la patente in italia ");
    }
    else
    {
        printf("non puoi prendere la patente in italia ");
    }
    return 0;
}