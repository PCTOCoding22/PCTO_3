#include <stdio.h>

int main()
{
    int x;
    int y;
    int z;
    printf("inserisci tre le lungehzze dei lati di un triangolo;");
    scanf("%i", &x);
    scanf("%i", &y);
    scanf("%i", &z);
    if (z==y!=x || x==y!=z || x==z!=y)
    {
       printf("é un triangolo isoscle");
    }
    else if (z==y && x==y && x==z)
    {
       printf("é un triangolo equilatero");
    }
    else if (z!=y && y!=x && z!=x)
    {
       printf("é un triangolo scaleno");
    }
    return (0);
}