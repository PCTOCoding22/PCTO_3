#include <stdio.h>

int main()
{
    float C;
    float K;
    float F;
    printf("inserisci la temperatura");
    scanf("%f", &C);
    if (C < -273.15)
    {
        printf ("errore\n");
        return -1;
    }
    F = (9/5) * C +32;
    printf("f: %f\n" , F);
    K = C + 273.15;
    printf("k: %f/n" , K);
    return 0;
}
      
        
