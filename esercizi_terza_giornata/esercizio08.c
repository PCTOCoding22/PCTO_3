#include <stdio.h>

int main()
{
    int x;
    printf("inserisci anno bisestile:");
    scanf("%i" , &x);
    if(( x % 4 == 0 && x % 100 != 0 )|| x % 400 == 0)
    { 
        printf("anno è bisestile\n");
     }
     else 
     {
         printf(" anno non è bisestile\n");
     }
return(0);
}