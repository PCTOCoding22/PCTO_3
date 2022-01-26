#include <stdio.h>

int main ()
{
	int x;
    int y = 18;
    
    scanf("%d", &x);

    if (x>=y)
    {
        printf ("Sei maggiorenne\n");
    }
    else
    {
        printf ("Sei minorenne\n");
    }
	return 0;
}