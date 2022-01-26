#include <stdio.h>

int main()
{
    int x = 2;
    int y = 4;
    int z = 6 ;
    if (z-y==y-x)
    {
        printf("x y z sono in progressione");
    }
    else if (z-y!=y-x)
    {
        printf("x y z non sono in progressione");
    }
    return 0;
}