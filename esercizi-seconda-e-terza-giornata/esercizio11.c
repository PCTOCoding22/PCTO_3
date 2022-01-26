#include <stdio.h>

int main()
{
    int ris;
    int x = 1969;
    int annodinascita;
    printf("inserisci l'anno di nascita: ");
    scanf("%i", &annodinascita);
    if (annodinascita==x)
    {
        printf("l'utente è nato nel 1969\n");
    }
    else if ((annodinascita>x) && (annodinascita-x));
    {
        printf("l'utente è nato dopo del 1969\n");
    }
    else if ((annodinascita<x) && (x-annodinascita));
    {
        printf("l'utente è nato prima il 1969\n");
    }
    return (0);
}