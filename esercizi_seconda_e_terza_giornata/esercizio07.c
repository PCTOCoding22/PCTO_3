#include<stdio.h>

int main()
{
   int x;
   int y;
   int z;

   scanf("%i", &x);
   scanf("%i", &y);
   scanf("%i", &z);

   int d;
   d=z-y;
    int f;
    f=y-x;
    if(d == f){
        printf("sono in progressione aritmetica");

    }
    else{
    printf("non sono in progressione");
 
    }
    return 0;
}

