#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

unsigned int factorial (int n)
{
	if (n == 0)
   	 return 1;
  	else
   	 return(n * factorial(n-1));
}

int lambang(int number)
{
	int i;
	for (i=0;i<number;i++) printf ("+");
}

int main ()
{
	long long int number,i,t;
	char jawab;
	system ("cls");
	printf ("\nNomer 1\n");
	lambang(30);
	printf ("\n Welcome To Factorial Program\n");
	lambang(30);
	printf (" \nEnter An Integer Number : ");
		scanf ("%d", &number);
		t=number*(number-1);
	printf ("\n%d  *  %d  = %d", number,number-1, number*(number-1));
		for (i=number-1;i>1;i--){
			if (t<=factorial(number)){
				printf ("\n%d  *  %d  = %d",t,i-1,t*(i-1));
				t=t*(i-1);
			}
		}
		printf ("\nFactorial of %d is = %d",number,factorial(number));
		printf ("\n\nPress [Y/T] To Repeat .....");
		jawab=getch();
		if ((jawab == 'Y') || (jawab == 'y')) main ();
}
