#include <stdio.h>

int main()
{
    int x = 18;
    int eta;
    printf("inserisci la tua eta: ");
    scanf("%i",&eta);    
    if( x >= 18)
    {
        printf("utente è maggiorenne\n");
    } 
    else
    {
        printf("utente è minorenne\n");
    }
    return (0);                                       
}