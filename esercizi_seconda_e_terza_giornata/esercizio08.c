#include <stdio.h>

int main ()
{
    int a;
    printf ("inserisci un anno: ");
    scanf ("%i", &a);

    if ( (a%4==0 && a%100 !=0)  || a%100 == 0)
{
    printf ("lanno è bisestile\n");
}
else
{
    printf("l'anno non è bisestile\n");
}
return (0);
}