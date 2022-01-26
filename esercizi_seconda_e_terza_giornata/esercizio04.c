#include <stdio.h>

int main()
{
    int x;// x= età
    int y;// y=età per lo stato
    scanf("%i",&x);
    scanf("%i",&y);
    if(y-x<0){
        printf("puoi prendere la patente");
    }else{
        printf("non puoi prendere la patente");
    }
    return 0;
}