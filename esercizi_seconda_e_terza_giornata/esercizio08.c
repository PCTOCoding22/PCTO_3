#include <stdio.h>

int main ()
{
	int x;

    scanf("%d", &x);

    int n;
    int m;
    int s;

    n = x%4;
    m = x%100;
    s = x%400;

    if (n==0 && m!=0 || s==0)
    {
        printf("L'anno è bisestile\n");
    }
    else
    {
        printf("L'anno non è bisestile\n");
    }
	return 0;
}