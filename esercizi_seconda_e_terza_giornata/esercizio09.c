#include <stdio.h>

int main ()
{
	int x;
    int y;
    int z;

    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    int n;
    int m;
    int s;

    n = x + y;
    m = y + z;
    s = z + x;

    if (n>z && m>x && s>y)
    {
        printf("%d, %d, %d possono essere i lati di un triangolo\n", x, y, z);
    }
    else
    {
        printf("%d, %d, %d non possono essere i lati di un triangolo\n", x, y, z);
    }


    return (0);
}