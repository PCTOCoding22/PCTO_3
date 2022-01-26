#include <stdio.h>

int main()
{
   int eta;
   printf("inserisci la tua eta");
   scanf("%i",&eta);
   if (eta >=18)
   {
       printf("è maggiorenne\n");
   }
   else
   {
       printf("è minorenne\n");
   }
   return (0);
}