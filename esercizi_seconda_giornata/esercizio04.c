#include <stdio.h>
int main ()
{ 
    int eta;
    int eta_in_cui_diventa_maggiorenne_nel_tuo_paese;
    printf("inserisci la tua eta:");
    scanf("%i", &eta);
    printf("inserisci eta in cui diventa maggiorenne nel tuo paese");
    scanf("%i", &eta);
     if (eta >=  eta_in_cui_diventa_maggiorenne_nel_tuo_paese)
     {
         printf("puoi prendere la patente\n");
     }
    else{
        printf("non puoi prendere la patente\n");
    }
     return 0;
}

