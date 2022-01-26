#include <stdio.h>

int main()
{
    int x = 6;
    int y = 2;
    if (x%y==0)
    {
        printf("x è multiplo di y\n");
    }
    else if (x%y!=0)
    { 
        printf("x non è multiplo di y\n");
    }
    return (0);
}