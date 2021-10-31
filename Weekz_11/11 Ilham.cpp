#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include<windows.h>



void stok_laptop();
void data_pembeli();
int menu();
void cariLaptop();
void beliLaptop();
void swap();
void bubblesort();
int i=0;
int banyak_laptop=0;
int banyak_customer=0;
int indeks=0;

void lambang (int i){
	int j;
	for (j=0;j<i;j++) printf ("%c", 177);
}

void spasi (int i){
	int j;
	for (j=0;j<i;j++) printf (" ");
}

void Karakter (int i){
	int j;
	for (j=0;j<i;j++) printf ("=");
}

struct device{
	char kode[10];
	char jenis[50];
	char merk[50];
	int harga;
	int stok;
}laptop[200];

struct customers{
	char nama[100];
	char alamat[100];
	char barangdibeli[100];
	long long int noHP;
	int jmlhbrg;
}customer[200];

int main()
{
	stok_laptop();
	data_pembeli();
	lambang (51);Sleep(250);
	printf("\n%c----------WELCOME TO MALANG LAPTOP SHOP----------%c\n",177,177); Sleep(300);
	lambang (51);Sleep(250);printf ("\n");
	printf ("\t\t  Created By:\n");
	printf ("\t  1.I Made Krishna Wirauana\n");Sleep(100);
	printf ("\t   2.Ilham Bagus Masnanda\n");Sleep(100);
	printf ("\t    3.Lucas Marcellino\n");Sleep(100);
	printf ("\t     4.Wibrian Alfathan\n");Sleep(100);
	system("pause");
	menu();
}




void swap(int xp, int yp) 
{ 
    int temp = xp; 
    xp = yp; 
    yp = temp;
} 

void Shorting() 
{ 
   int j; 
   for (i = 0; i < banyak_laptop; i++){
       for (j = banyak_laptop-1; j >= 1 ; j--){
           if (laptop[j-1].harga > laptop[j].harga){
			  int temp0=0;
			  temp0= laptop[j].harga; 
 			  laptop[j].harga = laptop[j-1].harga; 
  			  laptop[j-1].harga = temp0;
				
			  temp0= laptop[j].stok; 
 			  laptop[j].stok = laptop[j-1].stok; 
  			  laptop[j-1].stok = temp0;          
              
              char temp1[100];
			  char temp2[100];
			  char temp4[100];
              
              strcpy(temp4,laptop[j-1].merk);
              strcpy(laptop[j-1].merk,laptop[j].merk);
              strcpy(laptop[j].merk,temp4);
              
              strcpy(temp1,laptop[j-1].jenis);
              strcpy(laptop[j-1].jenis,laptop[j].jenis);
              strcpy(laptop[j].jenis,temp1);
              
              strcpy(temp2,laptop[j-1].kode);
              strcpy(laptop[j-1].kode,laptop[j].kode);
              strcpy(laptop[j].kode,temp2);
              
        	}
    	}
	}
}


void stok_laptop()
{
	FILE *lptp;
    lptp=fopen("DataLaptop.txt","r");
	while (fscanf(lptp,"%s %s %s %d %d",&laptop[i].kode, &laptop[i].jenis, &laptop[i].merk, &laptop[i].harga, &laptop[i].stok)!=EOF){
	   i++;
	   banyak_laptop++;
		}
	fclose(lptp);
}

void print()
{
	Karakter (109);
	printf("\nNo | Kode   : Jenis                        | Merek                |  Harga                | Stok            |");
	printf("\n=============================================================================================================");
	for(int j=0;j<banyak_laptop;j++)
	{
		printf ("\n%-2d | %-2s  : %-30s | %-20s |  %-20d | %-15d |",j+1, laptop[j].kode, laptop[j].jenis, laptop[j].merk, laptop[j].harga, laptop[j].stok );
	}
	printf("\n");
	printf("\npress ENTER to continue ");
	getch();
}

void data_pembeli()
{
	FILE *pmb;
    pmb=fopen("DataCustomers.txt","r");
	while (fscanf(pmb,"%s %s %s %lld %d",&customer[indeks].nama, &customer[indeks].alamat, &customer[indeks].barangdibeli , &customer[indeks].noHP, &customer[indeks].jmlhbrg)!=EOF){
	   indeks++;
	   banyak_customer++;
		}
	fclose(pmb);
}

void datapembeli()
{
	Karakter(109);
	printf("\nNo | Nama                      : Alamat                          | Kode   |  Notelp          | Jumlah");
	printf("\n=============================================================================================================");
	for(int j=0;j<banyak_customer;j++)
	{
		printf ("\n%-2d | %-25s  : %-30s | %-5s |  %-17d | %-10d",j+1, customer[j].nama, customer[j].alamat, customer[j].barangdibeli,customer[j].noHP,customer[j].jmlhbrg );
	}
	printf("\n");
	printf("\npress ENTER to continue ");
	getch();
}


int menu()
{
	int pilih;
	system("cls");
	lambang(49);
	printf("\n");
	printf("%c\t\tMENU\t\t\t\t%c\n",177,177);
	printf("%c1. Daftar Laptop\t\t\t\t%c\n",177,177);
	printf("%c2. Cari Laptop\t\t\t\t\t%c\n",177,177);
	printf("%c3. Urutkan Laptop Berdasarkan Harga\t\t%c\n",177,177);
	printf("%c4. Beli\t\t\t\t\t%c\n",177,177);
	printf("%c5. Data Pembeli\t\t\t\t%c\n",177,177);
	printf("%c6. Exit\t\t\t\t\t%c\n",177,177);
	lambang(49);
	printf("\nMasukkan Pilihan anda : "); scanf("%d",&pilih);
	switch(pilih)
	{
		case 1 :
			system("cls");
			print();
			system("cls");
			menu();
			break;
		case 2 :
			system("cls");
			cariLaptop();
			system("cls");
			menu();
			break;
		case 3 :
			system("cls");
			Shorting();
			print();
			system("cls");
			menu();
			break;
		case 4 :
			system("cls");
			beliLaptop();
			system("cls");
			menu();
			break;
		case 5 :
			system("cls");
			datapembeli();
			system("cls");
			menu();
			break;
		case 6 :
			system("cls");
			printf("Thanks For Using This Program for Your Solution"); Sleep(500);
			return 0;
		default :
			menu();
	}
}

void cari(int jumlahlaptop, char *cari)
{	
    FILE *laptopptr;

	
    if ((laptopptr = fopen("DataLaptop.txt", "r")) == NULL)
    {
        printf("Data Tidak Tersedia ! ");
        exit(1);   
    }
    
	printf("\n");
	
	int j = 0;
	while(!feof(laptopptr))
    {
    	fscanf(laptopptr,"%s %s %s %d %d",&laptop[i].kode, &laptop[i].jenis, &laptop[i].merk, &laptop[i].harga, &laptop[i].stok);
		i++;
	}
	
    fclose(laptopptr);
    jumlahlaptop = i;
	Karakter(109);
	printf("\nNo | Kode   : Jenis                        | Merek                |  Harga                | Stok            |");
	printf("\n=============================================================================================================");
	int no = 1;
	for(j = 0; j < jumlahlaptop; j++) {
		if (strcmpi(laptop[j].merk, cari)==0) 
		{
			printf ("\n%-2d | %-2s  : %-30s | %-20s |  %-20d | %-15d |",j+1, laptop[j].kode, laptop[j].jenis, laptop[j].merk, laptop[j].harga, laptop[j].stok );
			no++;
		}
	}
}


void cariLaptop()
{
	char carilaptop[1000];
	printf("Masukkan merek laptop : "); scanf("%s",&carilaptop);
	cari(0,carilaptop);
	printf("\n");
	printf("\npress ENTER to continue ");
	getch();
}

void beliLaptop()
{
	printf("Masukkan nama : " ); scanf("%s", &customer[indeks].nama);
	printf("Masukkan Alamat : "); scanf("%s", &customer[indeks].alamat);
	printf("\nMasukkan no telp : "); scanf("%d", &customer[indeks].noHP);
	printf("\nMasukkan kode barang yang dibeli : "); scanf("%s", &customer[indeks].barangdibeli);
	printf("\nMasukkan jumlah barang : "); scanf("%d", &customer[indeks].jmlhbrg);
	
	indeks++;
	
	banyak_customer++;
	printf("\nBarang telah berhasil dibeli");
	printf("\n\npress ENTER to continue ");
	getch();	
}
