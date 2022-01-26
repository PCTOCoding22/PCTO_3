#include <stdio.h>

int main()
{
    int x = 4;
    int y = 7;
    int z = 10;
    if ((x+y>z) || (y+z>x) || (z+x>y))
    {
        printf("le lunghezze sono i lati di un triangolo\n");
    }
    else
    {
        printf("le lunghezze non sono i lati di un triangolo\n");
    }
    return 0;
}