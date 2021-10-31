#include<stdio.h>
#include<windows.h>

int index=0;

struct dt {
	int kode,jum,harga;
	char nama[40];
}MAKAN[100];

FILE *dt;

void bar(int n)
{
	printf("\n");
	for(int i=0;i<n;i++)
	printf("=");
}

void spasi(int n)
{
	printf("\n");
	for(int i=0;i<n;i++)
	printf(" ");
}

void file()
{
	dt=fopen("soal8.txt","r");
	fflush(stdin);
	while(fscanf(dt,"%d %s %d %d",&MAKAN[index].kode,&MAKAN[index].nama,&MAKAN[index].harga,&MAKAN[index].jum)!=EOF)
	index++;
	fclose(dt);
}

void menu()
{
	system("cls");
	bar(50);
	spasi(5);
	printf("SELAMAT DATANG DI RESTO SEDERHANA\n");
	printf("\nNo     | Nama Item           | Harga  | Jumlah");
	bar(50);
	for(int i=0;i<index;i++)
	printf("\n%-6d | %-19s | %-6d | %-6d",MAKAN[i].kode,MAKAN[i].nama,MAKAN[i].harga,MAKAN[i].jum);
}

void pesan()
{
	int a;
	char lagi;
	do{
	do{
		printf("\nMasukkan kode pesanan anda [1-5] : ");
		scanf("%d",&a);
		fflush(stdin);
	}while(a!=1 && a!=2 && a!=3 && a!=4 && a!=5);
	printf("Pesanan %s sejumlah : ",MAKAN[a-1].nama);
	scanf("%d",&MAKAN[a-1].jum);
	fflush(stdin);
	printf("Apakah anda ingin menambah data? [Y/N] ");
	scanf("%c",&lagi);
	}while(lagi=='Y' || lagi=='y');
}

void pay()
{
	int sub[5],uang,min;
	system("cls");
	bar(60);
	spasi(10);
	printf("SELAMAT DATANG DI RESTO SEDERHANA");
	bar(60);
	printf("\nNo     | Nama Item           | Harga  | Jumlah | Subtotal");
	int total=0;
	for(int i=0;i<index;i++) {
		sub[i]=(MAKAN[i].harga*MAKAN[i].jum);
		printf("\n%-6d | %-19s | %-6d | %-6d | %d",MAKAN[i].kode,MAKAN[i].nama,MAKAN[i].harga,MAKAN[i].jum,sub[i]);
		total=total+sub[i];
		fflush(stdin);
	}
	printf("\n\nTotal tagihan anda sejumlah Rp %d",total);
	int bayar=0;
	do{
	printf("\nMasukkan uang anda : ");
	scanf("%d",&uang);
	fflush(stdin);
	bayar=bayar+uang;
	}while(bayar<total);
	min=bayar-total;
	printf("Kembali sejumlah : %d",min);
}

int main()
{
	file();
	menu();
	pesan();
	pay();
	return 0;
}
