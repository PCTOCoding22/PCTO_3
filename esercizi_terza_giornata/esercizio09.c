#include <stdio.h>

int main()
{
    int x = 3;
    int y = 5;
    int z = 10;
    if ( x < y+z || y < x+z || z < x+y)
    {
        printf(" sono le lunghezze dei lati di un triangolo:\n");
    }
    else
    {
        printf(" non sono le lunghezze dei lati di un triangolo\n");
    }
    return(0);
}