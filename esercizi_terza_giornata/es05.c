#include <stdio.h>

int main()
{
    int x;
    int y;
    printf("inserisci due numeri e ti diremo se il primo è un multiplo del secondo");
    scanf("%i", &x);
    scanf("%i", &y);
    int z;
    z=x%y;
    
    if (z==0 && x>=y)
   {
        printf("è multiplo/n");
    }
    else 
     {
        printf("non è multiplo/n");
    }
    return (0);
}