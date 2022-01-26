#include <stdio.h>

int main ()
{
    int x;
    int y;
    int z;
    printf("inserire tre numeri e vedere se posso essere considerati in progressione aritmetica");
    scanf("%i", &x);
    scanf("%i", &y);
    scanf("%i", &z);

    if (z-y == y-x)
    {
        printf(" i numeri sonon in  progressione aritmetica\n");
    }
    else (z-y != y-x);
    {
    printf("x y z non sono in progressione aritmeica\n");
    }
    return (0);
}