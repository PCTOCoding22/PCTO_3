#include <stdio.h>
int main()
{
    int x;
    int y;
    int z;
    scanf("%i",&x);
    scanf("%i",&y);
    scanf("%i",&z);
    int d;
    d=z-y;
    int p;
    p=y-x;
    if(d==p){
        printf("è una progressione aritmetica");
    }else{
        printf("non è una progressione aritmetica");
    }
    return 0;
}