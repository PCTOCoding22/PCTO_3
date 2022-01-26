#include <stdio.h>

int main()
{
    int x = 5;
    int y = 16;
    int z = 22;
    if ((x!=y) && (y!=z) && (z!=x))
    {
        printf("il triangolo è scaleno\n");
    }
    else if ((x==y) || (y==z) || (z==x) && (x!=y) || (y!=z) || (z!=x))
    {
        printf("il triangolo è isoscele\n");
    }
    else 
    {
        printf("il triangolo è equilatero\n");
    }
    return 0;
}