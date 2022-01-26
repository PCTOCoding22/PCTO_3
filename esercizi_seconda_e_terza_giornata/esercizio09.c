#include <stdio.h>

int main()
{
    int x;
    int y;
    int z;
    scanf("%i",&x);
    scanf("%i",&y);
    scanf("%i",&z);
    int s;
    s=x+y;
    int t;
    t=y+z;
    int q;
    q=x+z;
    if(s>z && t>x && q>y){
        printf("%i,%i,%i sono le misure dei lati di un triangolo", x, y, z);
        
    }else{
        printf("%i,%i,%i non sono le misure dei lati di un triangolo", x, y, z);
    }
    return 0;
}