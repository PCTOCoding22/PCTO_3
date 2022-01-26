#include <stdio.h>

int main ()
{
    int x;
    int y;
    scanf("%i", &x);
    scanf("%i", &y);
    int z;
    z=x%y;

    if (z==0 && x>=y)
    {
        printf("è multiplo\n");
    } 
    else
    {
        printf("non è multiplo\n");
    }    
    return (0);
} 


    