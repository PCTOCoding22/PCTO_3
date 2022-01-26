#include<stdio.h>

int main()
{
    int x;
    int y;
    int z;

    scanf("%i", &x);
    scanf("%i", &y);

    z = x % y;
    if(x>=y && z==0)
    {
        printf("%i è multiplo d %i", x, y);
    }
    else{
        printf("%i non è multiplo di %i", x, y);
    }
    return 0;
}