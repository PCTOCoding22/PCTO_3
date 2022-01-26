#include <stdio.h>

int main()
{
    int x;
    int y;
    int z;
    printf("inserisci tre numeri e ti diremo se possono essere le lungehzze dei lati di un triangolo;");
    scanf("%i", &x);
    scanf("%i", &y);
    scanf("%i", &z);
    if (z+y>x || x+y>z || x+z>y)
    {
       printf("Sono lunghezze di un triangolo");
    }
    else
    {
       printf("non sono lunghezze di un triangolo");
    }
    return (0);
}