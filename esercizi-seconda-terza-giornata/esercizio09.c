#include <stdio.h>

int main ()
{
    int x=5;
    int y=5;
    int z=10;
    if ((x+y>z) ||(y+z>x) || (z+x>y))
    {
        printf("i tre numeri sono le lunghezze dei lati di un triangolo\n");
    }
    return (0);
}