#include <stdio.h>

int main ()
{
	int x;
    int y;
    int z;

    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    if (x<=0 || y<=0 || z<=0)
    {
        printf("Errore");
        return -1;
    }
    if (x==y && y==z && z==x)
    {
        printf("Il triangolo è equilatero\n");
    }
    else if (x==y && y!=z || y==z && z!=x || z==x && x!=y)
    {
        printf("Il triangolo è isosciele\n");
    }
    else
    {
        printf("Il traingolo è scaleno\n");
    }
	return 0;
}