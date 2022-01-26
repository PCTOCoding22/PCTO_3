#include <stdio.h>
int main()
{
    int x;
    scanf("%i",&x);
    int m;
    m=x%4;
    int n;
    n=x%100;
    int s;
    s=x%400;

    if(m==0 && n!=0 || s==0){
        printf("l'anno è bisestile");
    }else{
        printf("l'anno non è bisestile");
    }
    return 0;
}