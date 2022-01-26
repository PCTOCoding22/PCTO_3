#include <stdio.h>

int main ()
{
	int x;
    int y = 1969;

    scanf("%d", &x);

    int n;
    int m;

    n = x - y;
    m = y - x;

    if (x==y)
    {
        printf("Sei nato nel 1969");
    }
    else if (x<y)
    {
        printf("Sei nato %d anni prima del 1969\n", m);
    }
    else
    {
        printf("Sei nato %d anni dopo il 1969\n", n);
    }
	return 0;
}