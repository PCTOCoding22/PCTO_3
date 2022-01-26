#include <stdio.h>
int main ()
{
	int x; 
    int y;
    scanf("%i",&x);
    scanf("%i",&y);

    if(x>y)
    {
        printf("%i è maggiore di %i", x, y);

    }  
    else if (x<y)
    {
        printf("%i è minore di %i", x, y);
    }
    else 
    {
        printf("%i è uguale di %i", x, y);
    }
    return (0);
}