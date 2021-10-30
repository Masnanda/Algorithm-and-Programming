#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int Segitiga2(int main ())
{
	int n,i,j;
	char jawab;	
	printf ("Masukan Jumlah Segitiga : ");
	scanf("%d",&n);
	printf ("Hasil Dari Segitiga : \n");
	for (i=0; i<=n; ++i){
		for (j=1; j<=i;++j){
		printf ("%d",j);
		}
		printf ("\n");
	}
	fflush(stdin);
	printf ("\n\nAnda Ingin Mengulang[Y/T]?");
	scanf ("%c",&jawab);
	if ((jawab == 'Y') || (jawab == 'y')) 
	{
	system("cls");
	main();
	}
}

int Segitiga1(int main())
{
	int n,i,j;
	char c,jawab;
	printf ("Masukan Jumlah Segitiga : ");
	scanf ("%d",&n);
	fflush(stdin);
	printf ("Masukan Simbol : ");
	scanf ("%c",&c);
	for (i=0; i<=n; i++){
		for (j=1; j<=i;j++){
		printf ("%c",c);
		}
		printf ("\n");
	}
	fflush(stdin);
	printf ("\n\nAnda Ingin Mengulang[Y/T]?");
	scanf ("%c",&jawab);
	if ((jawab == 'Y') || (jawab == 'y')) 
	{
	system("cls");
	main();
	}
}

void main_menu()
{
	printf ("\nSelamat Datang Di Program Gambar Segitiga\n");
	printf ("Menu Tampilan : ");
	printf ("\n1. Segitiga dengan Simbol");
	printf ("\n2. Segitiga dengan Angka");
}

int main ()
{
	int Pilih;
	printf ("Nama:Ilham Bagus Masnanda NIM : 2301940275");
	main_menu();
	printf ("\nPilihan Anda[1/2] :");
	scanf ("%d", &Pilih);
	switch (Pilih){
		case 1: {
			system("cls");
			Segitiga1(main);
			break;
		}
		case 2: {
			system("cls");
			Segitiga2(main);
			break;
		}
	}
}
