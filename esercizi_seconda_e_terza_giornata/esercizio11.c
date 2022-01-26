#include <stdio.h>

int main()
{
    int x = 1969;
    int annodinascita;
    int ris;
    printf("inserisci l'anno di nascita: ");
    scanf("%i", &annodinascita);
    if (annodinascita == x)
    {
        printf("l'utente è nato nell'anno in cui l'uomo è andato sulla luna\n");
    }
    else if (annodinascita>x) 
    {
        printf("l'utente è nato dopo");
    }
    else if (annodinascita<x) 
    {
        printf("l'utente è nato prima");
    }
}

//aiuto