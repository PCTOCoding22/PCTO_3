#include <stdio.h>

int main()
{
    int x = 2;
    int a = 5;
    int y = 9;
    printf("inserire tre numeri e vedere se possono essere le lunghezze dei lati di un triangolo");
    scanf("%i", &x);
    scanf("%i", &a);
    scanf("%i", &y);

    if (x < a+y) || (a < x+y) || (y < x+a)
    {
        printf(" sono le lunghezze dei lati di un triangolo\n");
    }    
    else
    {
        printf("non sono le lunghezze dei lati di un triangolo\n");
    }    
    return (0);
}   