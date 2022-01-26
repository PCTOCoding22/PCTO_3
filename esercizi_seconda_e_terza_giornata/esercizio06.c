#include<stdio.h>

int main()
{
    float C;
    scanf("%f", &C);
    float K;
    K=C+273.15;
    float F;
    float x;
    x= 9.0/5.0;
    F=( x*C ) + 32;
    if( F < -459.67 || K < 0){
        printf("errore");
    
    }
     else{ 
         printf("%f gradi celsius sono %f gradi Kelvin\n" ,C, K);
         printf("%f gradi celsius sono %f gradi farenheit", C, F);

     }
     return 0;
}