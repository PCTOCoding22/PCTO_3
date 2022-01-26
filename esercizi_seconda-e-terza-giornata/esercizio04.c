#include <stdio.h>
int main()
{  
     int eta;
     printf("inserisci età: ");
     scanf("%i", &eta);

     if(eta >= 18)
    { 
     printf("puoi prendere la patente in Italia\n");  
    }
    else
    {
        printf("non puoi prendere la patente in Italia\n");
    }
    return 0;
}