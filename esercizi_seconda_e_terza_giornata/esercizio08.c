#include <stdio.h>

int main ()
{
	int x;

    scanf("%i",&x);
    int c = x%4;
    int g = x%100;

    if(c==0 && g!=0)
    {
        printf("l'anno è bisestile");
    }
    else
    {
        printf("l'anno non è bisestile");

    }

    
    return (0);
}