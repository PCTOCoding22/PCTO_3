#include <stdio.h>

int main()
{
    int a = 8;
    int b = 8;
    int c = 17;
    if ((a!=b) && (b!=c) && (a!=c))
    {
        printf("il triangolo è scaleno\n");
    }
    else if ((a==b) || (b==c) || (c==a) && (a!=b) || (b!=c) || (c!=a))
    {
        printf("il triangolo è isoscele\n");
    }
    else
    {
        printf("il triangolo è equilatero\n");
    }
}