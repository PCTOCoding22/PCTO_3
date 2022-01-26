#include <stdio.h>

int main ()
{
	int x = 1969;
    int y;

    scanf("%i", &y);
    
    int z = x - y;
    int q=y-x;

    if(y==x) 
    {
        printf("sei nato nel 1969");

    }
    else if (y<x )
    {
        printf("sei nato %i anni prima del 1969", z);

    }
    else
    {
        printf("sei nato %i anni dopo del 1969", q);
    }
    
    return (0);
}