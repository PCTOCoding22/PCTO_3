#include <stdio.h>

int main()
{
    int x = 4;
    int y = 8;
    int z = 12;
    if (z-y == y-x)
    {
    printf("sono in progressione aritmetica\n");
    }
    else if (z-y != y-x)
    {
        printf("non sono in successione aritmetica\n");
    }
    return(0);
}