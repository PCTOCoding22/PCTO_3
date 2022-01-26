#include <stdio.h>

int main ()
{
	float c;

    scanf("%f",&c);

    float f;
    float k;

    f = (9.0/5.0) * c + 32;
    k = c + 273,15;

    if(k<0)
    {
        printf("errore");

    }
    else
    {
        printf("%f in Kelvin è: %f\n",c,k);
        printf("%f in Fahrenheit è: %f",c,f);

    }


    
    return (0);
}