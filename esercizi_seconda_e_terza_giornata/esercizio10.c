#include <stdio.h>

int main(){
    int x;
    int y;
    int z;
    scanf("%i",&x);
    scanf("%i",&y);
    scanf("%i",&z);
    if(x<=0 || y<=0 || z<=0){
        printf("error");
        return -1;
    }
    if(x==y && y==z){
        printf("il triangolo è equilatero");

    }
    else if (x==y || x==z || y==z) {
        printf("il triangolo è isoscele");
    }
    else{
        printf("il triangolo è scaleno");
    }
    return 0;
}