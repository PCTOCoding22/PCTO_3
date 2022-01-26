#include <stdio.h>

int main()
{
    int anno;
    printf("inserisci un anno");
    scanf("%i", &anno);
    if((anno%4==0 && anno&100 !=0) || anno%100 == 0)
}