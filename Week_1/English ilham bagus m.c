#include <stdio.h>

int main ()
{
	int fri,dnut,burg,tea,cof,jui,jumlah;
	char nama [50];
	printf ("\t\t\t Welcome to Mbois Canteen\n");
	printf ("\t\t\t===================================\n\n");
	
	printf ("Input your name : ");
	scanf ("%[^\n]s",nama);
		fflush(stdin);
	printf("\n\nHai %s,\n\n",nama);
	printf(" Menu [0 if you dont want to order]: ");
	printf("\n\n Fried Fries Rp. 20.000: ");
		scanf ("%d",&fri);
	printf(" Doughnut    Rp. 15.000: ");
		scanf ("%d",&dnut);
	printf(" Burger      Rp. 18.000: ");
		scanf ("%d",&burg);
	printf(" Tea         Rp.  7.500: ");
		scanf ("%d",&tea);
	printf(" Coffee      Rp. 10.000: ");
		scanf ("%d",&cof);
	printf(" Juice       Rp. 15.000: ");
		scanf ("%d",&jui);
		
	printf ("\n\nPurchase List :\n");
	printf (" Fried Fries : %d = Rp. %d\n",fri,fri*20000);
	printf (" Doughnut    : %d = Rp. %d\n",dnut,dnut*15000);
	printf (" Burger      : %d = Rp. %d\n",burg,burg*18000);
	printf (" Tea         : %d = Rp. %d\n",tea,tea*7500);
	printf (" Coffee      : %d = Rp. %d\n",cof,cof*10000);
	printf (" Juice       : %d = Rp. %d\n",jui,jui*15000);
		jumlah = (fri*20000)+(dnut*15000)+(burg*18000)+(tea*7500)+(cof*10000)+(jui*15000);
	
	printf ("\nTotal : Rp. %d\n\n",jumlah);
	getchar();
	printf ("\n\nThank you for Coming...\n");
	getchar();
	return 0;
	
	
}
