#include <stdio.h>

int main ()
{
	int x;
    int y;
    int z;

    scanf("%i", &x);
    scanf("%i", &y);
    scanf("%i", &z);

    int n = z + y;
    int m = x + z;
    int q = y + x;

    if(n>z && m>x && q>y)
    {
        printf("è un triangolo");
    
    }
    else 
    {
        printf("non è un triangolo");
    }

    return (0);
}