#include <stdio.h>

int main ()
{
    int x;
    int y;
    int z;

    scanf("%i", &x);
    scanf("%i", &y);
    scanf("%i", &z);

    int d = x-y;
    int s = y-z;

    if(d==s)
    {
     printf("i numeri sono in successione aritmetica");
    }
    else 
    {
        printf("i numeri non sono in successione aritmetica");
      
    }
    
    
    return (0);
}