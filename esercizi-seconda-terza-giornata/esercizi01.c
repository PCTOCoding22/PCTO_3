#include <stdio.h>

int main()
{
    int x = 0;
    int risultato = 0;

    while(x <= 100)
    {
        x = x + 2; // x+=2
        risultato = risultato + x;
    } 
    printf("il risultato è: %i", risultato);
    return (0);   
}