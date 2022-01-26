#include <stdio.h>

int main ()
{
    int x = 3;
    int y = 6;
    int z = 9;
    if (z-y == y-x)
    {
        printf("sono in progressione aritmetica\n");
    }
    else if (z-y != y-x)
    {
        printf("non sono in progressione artimetica\n");
    }
    return (0);
}