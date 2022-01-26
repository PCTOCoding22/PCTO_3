#include <stdio.h>

int main()
{
    int x;
    int y;
    int z;
    printf("inserire tre numeri e vedere se possono essere considerati in progressione aritmetica");
    scanf("%i", &x);
    scanf("%i", &y);
    scanf("%i", &z);

    if (z-y == y-x)
    {
        printf(" i numeri sono in progressione aritmetica\n");
    }   
    else if (z-y != y-x)
    {
        printf(" z y x non sono in progressione aritmetica\n");
    }  
    return (0);
}    
        