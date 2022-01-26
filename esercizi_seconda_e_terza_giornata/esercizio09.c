#include<stdio.h>

int main()
{
    int x;
    scanf("%i", &x);
    int y;
    scanf("%i", &y);
    int z;
    scanf("%i", &z);

    int L1;
    L1=x+y;
    int L2;
    L2=y+z;
    int L3;
    L3=z+x;
     if(L1 > z && L2 > x && L3 > y){
         printf("è un triangolo");
        
     }
     else{ 
         printf("non è un triangolo");
     }
     return 0;
}