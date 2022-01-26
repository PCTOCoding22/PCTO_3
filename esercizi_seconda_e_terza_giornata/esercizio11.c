#include <stdio.h>

int main(){
    int y;
    y=1969;
    int x;
    scanf("%i",&x);
    int z;
    z=y-x;
    int d;
    d=x-y;
    
    
    if(y==x){
        printf("sei nato nel 1969");

    }else if(y<x){
        printf("sei nato %i anni dopo il 1969", d);
    }else{
        printf("sei nato %i anni prima del 1969", z);
    }
    return 0;
}