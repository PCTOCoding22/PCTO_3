#include <stdio.h>

int main()
{
    int anno;
    printf("inserire anno e verificare se è bisestile");
    scanf("%i", &anno);

    if ((anno % 4 == 0 && anno % 100 != 0) || anno % 400 == 0)
    {
        printf("anno è bisestile\n");
    }   
    else
    {
    printf("anno non è bisestile");
    } 
    return (0);
}      
