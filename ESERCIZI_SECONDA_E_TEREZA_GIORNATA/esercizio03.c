#include <stdio.h>
int main() 

{
        int eta;
        printf ("Inserisci la tua eta");
        scanf("%i", &eta);
        if (eta >= 18)
        {
            printf("Sei maggiorenne\n");
        }
        else{
            printf("Sei minorenne");
        }
        return 0;
    
}