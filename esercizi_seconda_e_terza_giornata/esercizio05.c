#include <stdio.h>

int main ()
{
	int x;
    int y;
    int z;

    scanf("%d", &x);
    scanf("%d", &y);

    z = x % y;

    if (x>=y && z==0)
    {
        printf("%d è multiplo di %d\n", x, y);
    }
    else
    {
        printf("%d non è miltiplo di %d\n", x, y);
    }

	return 0;
}