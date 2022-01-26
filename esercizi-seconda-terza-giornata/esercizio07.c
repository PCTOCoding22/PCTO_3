#include <stdio.h>

int main()
{
    int x = 2;
    int y = 4;
    int z = 6;
    if (z-y==y-x)
    {
        printf("x y z sono in progressione aritmetica");
    }
    else if (z-y!=y-x)
    {
        printf("x y z non sono in progresione aritmetica");
    }
    return 0;
}