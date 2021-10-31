#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

void menuawal();
void load();
void menu1();
void menu2();
void menu3();
void menu4();

int ind=0;

struct data {
	int nim;
	char nama[40],jur[50];
	int tgl,bln,thn;
}INPUT[100];

void bar(int n)
{
	for (int i=0;i<n;i++){
	printf("=");
    };
}

void simpan()
{
	FILE *mh;
	mh=fopen("Mahasiswa.txt","r+");
	for(int x=0;x<ind;x++)
	{
		fprintf(mh,"%d %s %s %d %d %d\n",INPUT[x].nim,INPUT[x].jur,INPUT[x].nama,INPUT[x].tgl,INPUT[x].bln,INPUT[x].thn);
	}
	printf("Data berhasil disimpan!");
	fclose(mh);
}

void load()
{
	FILE *mh;
	mh=fopen("Mahasiswa.txt","r");
	fflush(stdin);
	while(fscanf(mh,"%d %s %s %d %d %d",&INPUT[ind].nim,&INPUT[ind].jur,&INPUT[ind].nama,&INPUT[ind].tgl,&INPUT[ind].bln,&INPUT[ind].thn)!=EOF)
	ind++;
	fclose(mh);
}

void menu1()
{
	bar(72);
	printf("\n| NIM       | Jurusan          | Nama Mahasiswa       | Tgl Lahir     |\n");
	bar(72);
	for (int i=0;i<ind;i++) {
		printf("\n| %-9d | %-16s | %-20s |  %3d/%d/%3d  |",INPUT[i].nim,INPUT[i].jur,INPUT[i].nama,INPUT[i].tgl,INPUT[i].bln,INPUT[i].thn);
	}
	printf("\n\nTekan Enter untuk melanjutkan...");
	getch();
}

void menu2()
{
	int kode,i;
	srand(time(NULL));
	int nomer=rand()% (202299999+1-202200000)+202200000;
	INPUT[ind].nim=nomer;
	fflush(stdin);
	printf("\nNIM : %d",INPUT[ind].nim);
	printf("\nMasukkan nama[maks 20 karakter]: ");
	scanf("%s",&INPUT[ind].nama);
	fflush(stdin);
	
	do{
	printf("\nMasukkan tahun lahir[1990-2000]:  ");
	scanf("%d",&INPUT[ind].thn);
	fflush(stdin);
	}while(INPUT[ind].thn>2000 || INPUT[ind].thn<1990);
	
	do{
	printf("\nMasukkan bulan lahir[1-12]:  ");
	scanf("%d",&INPUT[ind].bln);
	fflush(stdin);
	}while(INPUT[ind].bln>12);
	
	do{
	printf("\nMasukkan tanggal lahir[1-30]:  ");
	scanf("%d",&INPUT[ind].tgl);
	fflush(stdin);
	}while(INPUT[ind].tgl>30);
	
	printf("\n1. Informatics");
	printf("\n2. Bussiness Creation");
	printf("\n3. Design Visual");
	printf("\n4. Design Interior");
	printf("\n5. Public Relation");
	printf("\nMasukkan kode jurusan[1-5]: ");
	scanf("%d",&kode);
	if(kode==1) {
		strcpy(INPUT[ind].jur,"Informatics");fflush(stdin); }
	else if(kode==2) {
		strcpy(INPUT[ind].jur,"Bussiness_Creation");fflush(stdin); }
	else if(kode==3) {
		strcpy(INPUT[ind].jur,"Design_Visual");fflush(stdin); }
	else if(kode==4) {
		strcpy(INPUT[ind].jur,"Design_Interior");fflush(stdin); }
	else if(kode==5) {
		strcpy(INPUT[ind].jur,"Public_Relation");fflush(stdin); }
	printf("\nData berhasil ditambahkan!!");
	ind++;
	printf("\npress ENTER to continue ");
	getch();
}

void menu3()
{
	int cari,a;
	menu1();
	printf("\n\nSilahkan masukkan NIM [9 angka] : ");
	scanf("%d",&cari);
	fflush(stdin);
	for (int i=0;i<ind;i++) {
		if (cari==INPUT[i].nim) {
			printf("\nNIM ditemukan!!");
			printf("\nMasukkan nama[maks 20 karakter]: ");
			scanf("%s",&INPUT[i].nama);
			fflush(stdin);
	
			do{
			printf("\nMasukkan tahun lahir[1990-2000]:  ");
			scanf("%d",&INPUT[i].thn);
			fflush(stdin);
			}while(INPUT[i].thn>2000 || INPUT[i].thn<1990);
			
			do{
			printf("\nMasukkan bulan lahir[1-12]:  ");
			scanf("%d",&INPUT[i].bln);
			fflush(stdin);
			}while(INPUT[i].bln>12);
		
			do{
			printf("\nMasukkan tanggal lahir[1-30]:  ");
			scanf("%d",&INPUT[i].tgl);
			fflush(stdin);
			}while(INPUT[i].tgl>30);
			printf("\n\nData telah diedit!!");
			}
		else if (cari!=INPUT[i].nim) printf("\nNIM tidak ditemukan!");
	}
	getch();
}

void menu4() 
{
	int pil,temp1,temp2,temp3,temp4;
	char temp5[40],temp6[40];
	printf("Pilih mode sorting :");
	printf("\n1. Urutkan berdasarkan NIM");
	printf("\n2. Urutkan berdasarkan tanggal");
	printf("\n\nMasukkan pilihan [1-2] : ");
	scanf("%d",&pil);
	if (pil=1) {
		for (int i=0;i<ind;i++) {
			for (int j=i+1;j<ind;j++) {
				if (INPUT[i].nim>INPUT[j].nim) {
					temp1=INPUT[i].nim;
					INPUT[i].nim=INPUT[j].nim;
					INPUT[j].nim=temp1;
					temp2=INPUT[i].tgl;
					INPUT[i].tgl=INPUT[j].tgl;
					INPUT[j].tgl=temp2;
					temp3=INPUT[i].bln;
					INPUT[i].bln=INPUT[j].bln;
					INPUT[j].bln=temp3;
					temp4=INPUT[i].thn;
					INPUT[i].thn=INPUT[j].thn;
					INPUT[j].thn=temp4;
					strcpy(temp5,INPUT[i].nama);
					strcpy(INPUT[i].nama,INPUT[j].nama);
					strcpy(INPUT[j].nama,temp5);
					strcpy(temp6,INPUT[i].jur);
					strcpy(INPUT[i].jur,INPUT[j].jur);
					strcpy(INPUT[j].jur,temp6);
				}
			}
		}
		printf("\n\nData berhasil diurutkan!");
		getch();
	}
	else if (pil=2) {
		for (int i=0;i<ind;i++) {
			for (int j=i+1;j<ind;j++) {
				if (INPUT[i].thn<INPUT[j].thn) {
					temp1=INPUT[i].nim;
					INPUT[i].nim=INPUT[j].nim;
					INPUT[j].nim=temp1;
					temp2=INPUT[i].tgl;
					INPUT[i].tgl=INPUT[j].tgl;
					INPUT[j].tgl=temp2;
					temp3=INPUT[i].bln;
					INPUT[i].bln=INPUT[j].bln;
					INPUT[j].bln=temp3;
					temp4=INPUT[i].thn;
					INPUT[i].thn=INPUT[j].thn;
					INPUT[j].thn=temp4;
					strcpy(temp5,INPUT[i].nama);
					strcpy(INPUT[i].nama,INPUT[j].nama);
					strcpy(INPUT[j].nama,temp5);
					strcpy(temp6,INPUT[i].jur);
					strcpy(INPUT[i].jur,INPUT[j].jur);
					strcpy(INPUT[j].jur,temp6);
				}
				else if (INPUT[i].thn==INPUT[j].thn) {
					temp1=INPUT[i].nim;
					INPUT[i].nim=INPUT[j].nim;
					INPUT[j].nim=temp1;
					temp2=INPUT[i].tgl;
					INPUT[i].tgl=INPUT[j].tgl;
					INPUT[j].tgl=temp2;
					temp3=INPUT[i].bln;
					INPUT[i].bln=INPUT[j].bln;
					INPUT[j].bln=temp3;
					temp4=INPUT[i].thn;
					INPUT[i].thn=INPUT[j].thn;
					INPUT[j].thn=temp4;
					strcpy(temp5,INPUT[i].nama);
					strcpy(INPUT[i].nama,INPUT[j].nama);
					strcpy(INPUT[j].nama,temp5);
					strcpy(temp6,INPUT[i].jur);
					strcpy(INPUT[i].jur,INPUT[j].jur);
					strcpy(INPUT[j].jur,temp6);
				}
				else if (INPUT[i].bln==INPUT[j].bln) {
					temp1=INPUT[i].nim;
					INPUT[i].nim=INPUT[j].nim;
					INPUT[j].nim=temp1;
					temp2=INPUT[i].tgl;
					INPUT[i].tgl=INPUT[j].tgl;
					INPUT[j].tgl=temp2;
					temp3=INPUT[i].bln;
					INPUT[i].bln=INPUT[j].bln;
					INPUT[j].bln=temp3;
					temp4=INPUT[i].thn;
					INPUT[i].thn=INPUT[j].thn;
					INPUT[j].thn=temp4;
					strcpy(temp5,INPUT[i].nama);
					strcpy(INPUT[i].nama,INPUT[j].nama);
					strcpy(INPUT[j].nama,temp5);
					strcpy(temp6,INPUT[i].jur);
					strcpy(INPUT[i].jur,INPUT[j].jur);
					strcpy(INPUT[j].jur,temp6);
				}
				else if (INPUT[i].tgl==INPUT[j].tgl) {
					temp1=INPUT[i].nim;
					INPUT[i].nim=INPUT[j].nim;
					INPUT[j].nim=temp1;
					temp2=INPUT[i].tgl;
					INPUT[i].tgl=INPUT[j].tgl;
					INPUT[j].tgl=temp2;
					temp3=INPUT[i].bln;
					INPUT[i].bln=INPUT[j].bln;
					INPUT[j].bln=temp3;
					temp4=INPUT[i].thn;
					INPUT[i].thn=INPUT[j].thn;
					INPUT[j].thn=temp4;
					strcpy(temp5,INPUT[i].nama);
					strcpy(INPUT[i].nama,INPUT[j].nama);
					strcpy(INPUT[j].nama,temp5);
					strcpy(temp6,INPUT[i].jur);
					strcpy(INPUT[i].jur,INPUT[j].jur);
					strcpy(INPUT[j].jur,temp6);
				}
			}
		}
		printf("\n\nData berhasil diurutkan!");
		getch();
	}
}

void menuawal()
{
	int menu;
	system("cls");
	printf("\nSistem Informasi Mahasiswa\n");
	bar(25);
	printf("\n1. Tampil Data Mahasiswa");
	printf("\n2. Input Data Mahasiswa");
	printf("\n3. Edit Data Mahasiswa");
	printf("\n4. Urutkan Data Mahasiswa");
	printf("\n5. Simpan dan keluar");
	printf("\n \tMasukkan menu [1-5] : ");
	scanf("%d",&menu);
	switch(menu) {
		case (1) : {
			system("cls");
			menu1();
			menuawal();
			break;
		}
		case (2) : {
			system("cls");
			menu2();
			menuawal();
			break;
		}
		case (3) : {
			system("cls");
			menu3();
			menuawal();
			break;
		}
		case (4) : {
			system("cls");
			menu4();
			menuawal();
			break;
		}
		case (5) : {
			system("cls");
			simpan();
			break;
			default:
			menuawal();
		}
	}
}

int main()
{
	load();
	menuawal();
	return 0;
}
