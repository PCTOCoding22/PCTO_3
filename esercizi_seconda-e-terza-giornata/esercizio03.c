#include <stdio.h>

int main()
{   
    int eta;
    printf("inserisci eta");
    scanf("%i", &eta);
    if(eta >= 18)
    {
      printf("sei magggiorenne\n");
    }  
else{  
      printf("sei minorenne\n");  
 }
 return 0;
 }