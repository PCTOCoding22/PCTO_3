#include <stdio.h>

int main()
{
    int maggiore_eta;
    int eta;
    printf("inserisci a quanti anni puoi prendere la patente nel tuo stato: ");
    scanf("%i", &maggiore_eta);
    printf("inserisci la tua età: ");
    scanf("%i", &eta);
    if (eta >= maggiore_eta)
    {
        printf("puoi prendere la patente nel tuo stato\n");
    }
    else if (eta < maggiore_eta)
    {
        printf("non puoi prendere la patente nel tuo stato\n");
    }
    return 0;
}