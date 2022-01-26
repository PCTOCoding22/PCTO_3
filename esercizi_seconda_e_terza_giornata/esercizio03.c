#include <stdio.h>

int main ()
{
    int x;
    int y = 18;

    scanf("%i", &x);
    
    if(x>=y)
    {
        printf("sei maggiorenne");
    }
    else
    {
        printf("sei minorenne");
    }

    
    return (0);
}