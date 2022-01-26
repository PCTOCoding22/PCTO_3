#include <stdio.h>

int main ()
{
    int x = 0;
    int ris = 0;

    while(x <= 100)
    {
          x = x +2; // x += 2
          ris = ris + x;
    }
    printf("risultato somma numeri pari fino a cento è: %i", ris);
    return (0);
 }
