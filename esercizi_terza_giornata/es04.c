#include <stdio.h>

int main()
{
    
    int eta;
    int etastato;
    printf("inserisci la tua età:");
    scanf("%i", &eta);
    scanf("%i", &etastato);
    if (eta >= etastato)
    
   {
        printf("Sei maggiorenne,e puoi avere la patente/n");
    }
    else{
        printf("Sei minorenne,e non puoi avere la patente/n");
    }
    return (0);
}