#include <stdio.h>

int main(){

    int n;
    scanf("%i",&n);
    int r;
    
    for(int cont=n-1;cont>1;cont-=1){
        r=n%cont;
         if(r==0){
             printf("il numero non è primo\n");
             return 0;
         }
         } printf("il numero è primo\n");
         
         
    return 0;
    }
