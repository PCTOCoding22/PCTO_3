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

    n = x - y;
    m = y - z;

    if (n==m)
    {
        printf("I numeri sono in progressione aritmetica\n");
    }
    else
    {
        printf("I numeri non sono in progressione aritmetica\n");
    }
	return 0;
}