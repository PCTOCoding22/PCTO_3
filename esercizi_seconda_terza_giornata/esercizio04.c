#include <stdio.h>
int main()
{
    int eta;
    int eta_in_cui_diventi_maggiorenne_tuo_paese;
    printf("inserisci eta");
    scanf("%i" , &eta);
    printf("inserisci eta in cui diventi maggiorenne nel tuo paese: ");
    scanf("%i" , &eta);
    if(eta >= eta_in_cui_diventi_maggiorenne_tuo_paese)
    {
        printf("Puoi prendere la patente\n");
    }
    else{
        printf("Non puoi prendere la patente\n");
    }
    return 0;
}