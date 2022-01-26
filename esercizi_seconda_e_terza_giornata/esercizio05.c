#include <stdio.h>

int main ()
{
    int x = 10;
    int y = 5;
    if (x%y == 0)
    {
        printf("x è multiplo di y\n");
    }
    else if (x%y != 0)
    {
        printf("x non è multiplo di y\n");
    }
    return 0;
}