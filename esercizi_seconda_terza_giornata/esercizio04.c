#include <stdio.h>

int main()
{
    int eta;
    int maggiore_eta;
    printf("inserisci a quanti anni si può prendere la patente nel tuo stato: ");
    scanf("%i", &maggiore_eta);
    printf("inserisci la tua età: ");
    scanf("%i", &eta);
    if (eta >= maggiore_eta)
    {
        printf("puoi porendere la patente nel tuo stato\n");
    }
    else if (eta < maggiore_eta)
    {
        printf("non puoi prendere la patente nel tuo stato\n");
    }
    return 0;
}
