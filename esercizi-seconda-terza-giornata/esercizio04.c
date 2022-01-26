#include <stdio.h>

int main()
{
    int patente;
    int eta;
    printf("inserisci a quanti anni puoi prendere la patente nel tuo Stato: ");
    scanf("%i", &patente);
    printf("inserisci la tua età: ");
    scanf("%i", &eta);
    if (eta >= patente)
    {
        printf("nel tuo Stato puoi prendere la patente\n");
    }
    else if (eta < patente)
    {
    printf("non puoi prendere la patente nel tuo Stato\n");
    }
    return (0);
}