#include <stdio.h>

int main()
{ 
    int eta;
    int patente;
    printf("inserisci a quanti anni puoi prendere la patente in Italia: ");
    scanf("%i", &patente);
    printf("inserisci la tua eta: ");
    scanf("%i", &eta);
    if (eta >= 18)
    {
        printf("puoi prendere la patente in Italia\n");
    }
    else if (eta < 18)
    {
        printf("non puoi prendere la patente in Italia\n");
    }
    return (0);
}