#include <stdio.h>

int main ()
{
	int n;
    int z;

    scanf("%i", &n);

    for(int cont = n-1; cont > 1; cont -=1) 
    {
        
        z= n%cont;
        if(z == 0)
        {
            printf("il numero non è primo\n");
            return 0;
        }

    }
        printf("il numero è primo\n");

    
    return (0);
}