#include <stdio.h>

int main ()
{
	int x = 0;
	int ris = 0;
	while (x<=100)
	{
		x += 2;
		ris += x;
	}
	printf ("La somma di tutti i numeri pari fino a 100 è: %i\n" , ris);
	return 0;

}