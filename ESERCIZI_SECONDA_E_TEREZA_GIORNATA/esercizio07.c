#include <stdio.h>

int main ()
{
    int x= 8;
    int y= 16;
    int z= 24;
    if (z-y == y-x)
    {
        printf("sono in successione aritmetica \n");
        }
        else if(z-y != y-x)
        {
            printf("non sono in successione aritmetica\n");
            }
            return (0);
    }
