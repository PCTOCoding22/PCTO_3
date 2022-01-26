#include <stdio.h>

int main()
{
    int eta;
    printf("inserisci la tua età: ");
    scanf("%i",&eta);
    if(eta>=18)
    {
            printf("l'utente è maggiorenne\n");
    }
    else
    {
        printf("l'utente è minorenne\n");
    }

return (0);
}