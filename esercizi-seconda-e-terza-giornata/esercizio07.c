#include <stdio.h>

int main()
{
    int x = 2;
    int y = 4;
    int z = 6;
    if (z-y==y-x)
    {
        printf("i tre numeri sono in progressione aritmetica\n");
    }
    else if (z-y!=y-x)
    {
        printf("i tre numeri non sono in progressione aritmetica\n");
    }
    return (0);
}