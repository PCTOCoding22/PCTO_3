#include <stdio.h>

int main ()
{
	int x;
    int y;
    int z;

    scanf("%i",&x);
    scanf("%i",&y);
    scanf("%i",&z);

    if(x==y && y==z && z==x)
    {
        printf("il triangolo è equilatero"); 
    }
    else if(x==y && y!=z)
    {
         printf("il triangolo è isoscele");
    }
    else 
    {
        printf("il triangolo è scaleno");
    }
    return (0);
}