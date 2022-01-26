#include <stdio.h>
int main ()
{
int eta;
int eta_in_cui_diventa_maggiorenne_nel_suo_paese;
printf("inserisci la tua eta:");
scanf ("%i", &eta);
printf("inserisci l'eta in cui si diventa maggiorenni nel tuo paese\n");
scanf ("%i", &eta_in_cui_diventa_maggiorenne_nel_suo_paese);
if (eta>=eta_in_cui_diventa_maggiorenne_nel_suo_paese)
{
    printf("puoi prendere la patente nel tuo paese\n");
}
else{
    printf("non puoi prendere la patente nel tuo paese\n");
}
    return 0;
}