#include <stdio.h>

int main ()
{
	int x;
    int y;
    
    scanf("%i", &x);
    scanf("%i", &y);

    int z = x-y;

    if (z>0)
    {
        printf("puoi prendere la patente");
    }
    else
    {
        printf("non puoi prendere la patente");
    }
    return (0);
}