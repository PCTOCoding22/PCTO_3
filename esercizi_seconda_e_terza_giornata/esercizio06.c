#include <stdio.h>

int main ()
{
	float c;
    
    scanf("%f", &c);

    float k;
    float f;

    f = (9.0/5.0) * c + 32;
    k = c + 273,15;

    if (k<0)
    {
        printf("Errore");
    }
    else 
    {
        printf("%f in Kelvin è: %f\n", c, k);
        printf("%f in Fahrenheit è: %f\n", c, f);
    }

	return 0;
}