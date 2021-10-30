#include <stdio.h>
#include <math.h>
int main ()
{
	int a,b,c;
	float x,d,y;
	printf ("\t\t\t Math Calculator");
	printf ("\n \t\tNama : ilham Bagus Masnanda");
	printf ("\n \t\tNim  : 2301940275-01");
	printf ("\n \t\t*******************************");
	printf ("\n\n\n Calculation of first unsorted equation\n");
	printf ("***************************************************\n\n");
	printf ("\t\t X = <<sqrt <a> + b^3 -c*b>>*sqrt <b>\n\n");
	printf ("Where\t : a = first entered number\n");
	printf ("\t   b = second entered number\n");
	printf ("\t   c = third entered number\n");
	printf ("\t   x = first unsorted equation\n");
	printf ("\n\nInput a:");
		scanf ("%d", &a);
	printf ("Input b:");
		scanf ("%d", &b);
	printf ("Input c:");
		scanf ("%d", &c);
		x= ((sqrt (a) + pow(b,3)-c*b))*sqrt(b);
	printf ("\n\n \tX : %.2f",x);
	printf ("\n\n\n Calculation of second unsorted equation\n");
	printf ("**************************************************\n");
	printf ("\t\t y = <d/b - x*c +a>^3\n\n");
	printf ("Where\t : d = fourth entered number\n");
	printf ("\t   y = second unsorted equation\n");
	printf ("\n\nInput d :");
		scanf ("%f",&d);
		y = (d/b - x*c + a);
		y = pow(y,3);
	printf ("\n\n \tY : %.2f",y);
	
	
	
    return 0;
}
