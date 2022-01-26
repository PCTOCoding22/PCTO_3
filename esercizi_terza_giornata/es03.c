#include <stdio.h>

int main()
{
    int eta;
    printf("inserisci la tua età:");
    scanf("%i", &eta);
    if (eta >= 18)
   {
        printf("L'utente è maggiorenne/n");
    }
    else{
        printf("L'utente è minorenne/n");
    }
    return (0);
}