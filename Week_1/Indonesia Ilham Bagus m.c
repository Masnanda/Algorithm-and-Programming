#include <stdio.h>
int main ()
{
	int NasGor,teh,jumlah;
	char NamaAnda[50];
	
	printf ("\n\t\t\t SELAMAT DATANG\n");
	printf("\t\t\t=================\n\n");
	printf("Masukkan nama Anda : ");
		scanf("%[^\n]s",NamaAnda);
		fflush (stdin);
	printf("\n\n\nHalo %s,\n\n",NamaAnda);
	printf ("MENU [Tekan 0 jika Anda tidak ingin membeli] :\n");
	printf ("Nasi goreng Rp. 20.000 :");
		scanf ("%d",&NasGor);
	printf ("Teh panas  Rp. 5.000 :");
		scanf ("%d", &teh);
	getchar();
	printf ("\n\nDaftar Pembelian :\n");
	printf ("Nasi goreng : %d = Rp. %d\n",NasGor,NasGor*20000);
	printf ("Teh panas : %d = Rp. %d\n",teh,teh*5000);
		jumlah = (NasGor*20000)+(teh*5000);
	printf ("\nTotal : Rp. %d\n\n",jumlah);
		getchar ();
	printf ("Terima Kasih");
		getchar ();
	return 0;
}
