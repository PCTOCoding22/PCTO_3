#include <stdio.h>

int main ()
{
	int x;
    int y;

    scanf("%d", &x);
    scanf("%d", &y);

    int z = x - y;
    
    if (z>0)
    {
        printf ("Puoi prendere la patente\n");
    }
    else
    {
        printf ("Non puoi prendere la patente\n");
    }
	return 0;
}