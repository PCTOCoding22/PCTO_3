#include <stdio.h>

int main ()
{
  
  int eta;  
   printf("insrerisci eta in cui prendi la patente nel tuo stato: ");
   scanf("%i" ,&eta);
   int x;
   printf("inserisci la tua eta: ");
   scanf("%i" ,&x);
   if ( x >= 18)
   {
      printf("utente può prendere la patente nel suo stato\n");
   }
   else
   {
       printf("utente non può prendere la patente nel suo stato\n");
   }
   return (0);

}