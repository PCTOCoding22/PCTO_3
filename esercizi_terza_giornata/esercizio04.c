#include <stdio.h>

int main()
{
    int eta;
    printf("inserisci età in cui puoi prendere la patente nel tuo stato");
    scanf("%i" , &eta);
    int x;
    printf(" inserisci la tua età");
    scanf("%i" , &x);
    if( x >= eta)
    {
        printf("utente può prendere la patente nel suo stato\n");
    }
else
     {
         printf("utente non può prendere la patente nel suo stato\n");
     }   
     return(0);


}