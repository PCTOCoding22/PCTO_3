#include <stdio.h>

int main()
{
    int x = 0;
    int risultato = 0;
    while(x <= 100)
{
    x = x + 2;
    risultato = risultato + x; 
}
printf("il risultato di tutti i numeri pari fino a 100 è: %i\n", risultato);
return (0); 
} 
