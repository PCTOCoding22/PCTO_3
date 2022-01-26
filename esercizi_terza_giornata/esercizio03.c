#include <stdio.h>

int main()
{
    int eta;
    printf("quanti anni hai?: ");
    scanf("%i", &eta);
    if (eta >= 18)
    {
       printf("sei maggiorenne\n");
    }
    else
    {
        printf("sei minorenne\n");
    }
    return 0;
    }