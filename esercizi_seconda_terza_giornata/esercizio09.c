#include <stdio.h>

int main()
{
    int a = 1;
    int b = 2;
    int c = 3;
    if ("a+b>c" || "b+c>a" || "c+a>b")
    {
        printf("sono lati di un triangolo");
    }
    else 
    {
        printf("non sono lati di un triangolo");
    }
    return 0;
}