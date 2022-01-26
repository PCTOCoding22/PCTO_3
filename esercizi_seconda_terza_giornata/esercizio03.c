#include <stdio.h>

int main()
{
    int eta;
    printf("inserisci la tua eta");
    scanf("%i" , &eta);
    if (eta >= 18)
    {
        printf("Sei maggiorenne/n");
    }
    else{ 
        printf("Sei minorenne/n");
    }
    return 0;
}

