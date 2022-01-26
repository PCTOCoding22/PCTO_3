#include <stdio.h>

int main()
{
    int x = 4;
    int y = 6;
    int z = 8; 
    if (z-y == y-x)
    {
        printf(" x y z sono in progressione");
    }
    else if (z-y != y-x)
    {
        printf("x y z non sono in progrssione");
        return (0);
    }
}