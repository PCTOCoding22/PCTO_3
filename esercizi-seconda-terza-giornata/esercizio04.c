#include <stdio.h>

int main()
{
    int eta;
    printf("inserisci a quanti anni puoi prendere la patente nel tuo stato ");
    scanf("%i", &eta);
    int patente;
    printf("inserisci la tua eta");
    scanf("%i", &patente);
    if (patente >= eta) {
        printf("puoi prendere la patente\n");
    }
    else{
        printf("non puoi prendere la patente\n");
    }
    return 0;
}