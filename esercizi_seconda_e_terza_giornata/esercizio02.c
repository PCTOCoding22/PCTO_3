#include <stdio.h>

int main ()
{
	int x;
    int y;

    scanf("%d", &x);
    scanf("%d", &y);

    if (x>y)
    {
     printf ("%d è maggiore di %d\n", x, y);
    }
    else if (x<y)
    {
     printf ("%d è minore di %d\n", x, y);
    }
    else
    {
     printf ("%d è uguale a %d\n", x, y);
    }
	return 0;
}