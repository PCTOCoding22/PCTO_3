#include <stdio.h>

int main ()
{
	int x = 0;
    int ris = 0;
    while (x<=100)
    {
        x = x + 2; // x+=2
        ris = ris + x;
    }
    printf("la somma di tutti i numeri pari è:%i/n", ris);

    
    return (0);
}