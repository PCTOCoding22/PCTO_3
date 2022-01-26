#include <stdio.h>

int main()
{
    int x;
    int y;
    int z;
    printf("inserisci tre numeri e ti diremo se possono essere considerati in progressione aritmetica;");
    scanf("%i", &x);
    scanf("%i", &y);
    scanf("%i", &z);
    int ris;
    ris=x-y;
    int ris1;
    ris1=y-z;

    if (ris==ris1)
    {
        printf("Sono in progressione aritmetica");
    }
    else if (ris != ris1)
    {
        printf("Non sono in progressione aritmetica, stacce zi.");
    }
    return (0);
}