#include<stdio.h>

int main()
{
    int x;
    scanf("%i", &x);
    int g;
    g=x%4;
    int h;
    h=x%100;
    int L;
    L=x%400;

    if(g == 0 && h != 0 || L == 0){
        printf("l'anno è bisestile");

    }
    else{ 
        printf("l'anno non è bisestile");
    }
    return 0;
}