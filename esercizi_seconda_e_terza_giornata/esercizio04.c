#include <stdio.h>

int main ()
{
    int eta;
    int eta_in_cui_diventa_maggiorenne_nel_suo_paese;
    printf("inserisci la tua età:");
    scanf("%i", &eta);
    printf("inserisci età in cui si diventa maggiorenne nel tuo paese");
    scanf("%i", &eta);
    if (eta >= eta_in_cui_diventa_maggiorenne_nel_suo_paese)
    {
        printf("sei maggiorenne nel tuo paese\n");
    } 
    else
    {
        printf("sei minorenne nel tuo paese\n");
    }
    return 0;
}   
    
