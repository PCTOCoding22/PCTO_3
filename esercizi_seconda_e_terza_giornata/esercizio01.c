#include <stdio.h>
int main()
{
    int x = 0;
    int ris = 0;
    while(x <= 100)
    {
        x = x + 2; // x+=2
        ris=ris+x; // ris+=x
        

    }
    printf("la somma di tutti i numeri pari fino a 100 è:%i",ris);
    return 0;
}






