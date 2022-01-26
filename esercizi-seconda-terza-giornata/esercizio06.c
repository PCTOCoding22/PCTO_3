#include <stdio.h>

int main()
{
    float temperatura_celsius;
    float temperatura_farheneit;
    float temperatura_kelvin;
    printf ("inserisci_una_temperatura_in_gradi celsius/n");
    scanf ("%f" , &temperatura_celsius );
    if (temperatura_celsius<0) {
    printf ("errore\n");
    return (-1);
    }
     temperatura_farheneit = (9/5)*temperatura_celsius+32;
    printf ("%f" , temperatura_farheneit);
    temperatura_kelvin=temperatura_celsius+273,15;
    printf ("%f", temperatura_kelvin);
    return (0) ;
}