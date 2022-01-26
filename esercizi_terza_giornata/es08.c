#include <stdio.h>

int main()
{
    int anno;
    printf("Inserisci un anno e ti diremo se è n'anno bisestile,fallito");
    scanf("%i", &anno);
    
    if (anno % 4 == 0 && anno % 100 !=0 || anno % 400 ==0)
    {
    printf("è un anno bisestile");
    }
    else
    {
    printf("non è un anno bisestile");
    }
    return (0);
}