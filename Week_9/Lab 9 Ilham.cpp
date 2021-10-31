#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int i,t,j,nim[100],tgl[100],bln[100],tahun[100];
int index=0;
char nama[100][100],jurusan[100][100];

void Tampil();

void load_data(){
    //printf("test");
	FILE *daftar;
	daftar=fopen("mahasiswa.txt","r");
	while(fscanf(daftar,"%d %s %s %d %d %d", &nim[index], &jurusan[index], &nama[index], &tgl[index], &bln[index], &tahun[index])!=EOF) index++;
	fclose(daftar);
	printf("---LOAD DATA SUKSES---\n Klik untuk melanjutkan");
	getch();
}

void write_data(){
	FILE *out=fopen("mahasiswa.txt","w");
	 for (i=0; i <index;i++){
	fprintf(out,"%d %s %s %d %d %d\n",nim[i],jurusan[i],nama[i],tgl[i],bln[i],tahun[i]);
	fclose(out);
	}
}

void pagar(int n){
	for (i=0;i<n;i++) printf ("=");
}

void CLS() {
	if (system("CLS")) system("clear");
}

void Sort_Nim(){
	int tempint;
	char tempstr[100];
for( i=0; i<100-1; i++){
		for(int j=0; j<100-1; j++){
			//jika angka index x+1 lebih kecil dari angka index x
			if(nim[j+1]<nim[j]){
					tempint = nim[j];
					nim[j] = nim [j + 1];
					nim [j + 1] = tempint;
		
    				strcpy(tempstr, nama[j]);
    				strcpy(nama[j], nama[j + 1]);
    				strcpy(nama[j + 1], tempstr);
    				
    				strcpy(tempstr, jurusan[j]);
    				strcpy(jurusan[j], jurusan[j + 1]);
    				strcpy(jurusan[j + 1], tempstr);
    				
    				tempint = tgl[j];
    				tgl[j] = tgl [j + 1];
    				tgl[j + 1] = tempint;
    				
    				tempint = bln[j];
    				bln[j]  = bln[j + 1];
    				bln[j + 1] =  tempint;
    				
    				tempint  = tahun[j];
    				tahun[j] = tahun [j + 1];
    				tahun[j + 1] = tempint;
    				
			}
		}
	}
	Tampil ();
	printf ("Data Sudah Terurut\n");
	printf ("tekan ENTER untuk Melanjutkan....");
}

void Sort(){
	char Jawab;
	CLS();
	do {
	
	printf ("1.Urutkan Berdasarkan NIM\n2.Urutkan Berdasarkan Tanggal");Jawab=getch();
	}while ((Jawab!='1')&&(Jawab!='2'));
	switch (Jawab)
	{
		case '1' : CLS();Sort_Nim();break;
	}
}

void Add() {
	CLS();
	printf("\nMasukkan nama [Maks 20 Karakter] : ");scanf("%s", &nama[index]);fflush(stdin);
	printf("Masukan Tahun Lahir [1990-2000] : ");scanf("%d",&tahun[index]);fflush(stdin);
	printf("Masukan Bulan Lahir [1-12] :");scanf("%d",&bln[index]);fflush(stdin);
	printf("Masukan Tanggal Lahir [1-31] :");scanf("%d",&tgl[index]);fflush(stdin);
	printf("Masukan NIM [Maks 9 Digit] :");scanf("%d",&nim[index]);fflush(stdin);
	printf("Masukan Jurusan [Maks 20 Karakter] :");scanf("%s",&jurusan[index]);fflush(stdin);

	FILE *out=fopen("mahasiswa.txt","a");
	fprintf(out,"%d %s %s %d %d %d\n",nim[index],jurusan[index],nama[index],tgl[index],bln[index],tahun[index]);
	fclose(out);
	index++;
	printf("Sukses menambah data\n");
	printf ("tekan ENTER untuk Melanjutkan....");
	getchar();
}

void Tampil(){
	
	printf("=========================================================================\n");
	printf("|NIM        | Jurusan        |  Nama Mahasiswa      | Tgl Lah           |\n");
	printf("=========================================================================\n");
	FILE *in=fopen("mahasiswa.txt","r");
	if(!in){  
         	printf("|\t\ tidak ada file\t\t\t\t\t\t\t|\n");
            printf("=========================================================================\n ");
              
        }else{
           while(!feof(in)){
              fscanf(in,"%d %s %s %d %d %d\n", &nim[index], &jurusan[index], &nama[index], &tgl[index], &bln[index], &tahun[index]);
			  fflush(stdin);
              printf("|%-10d |%-15s |%-20s  | %d/%d/%-10d\t|\n", nim[index], jurusan[index], nama[index], tgl[index],bln[index],tahun[index]);
           }
           pagar(73);
           fclose(in);
	}
	printf ("\nTekan ENTER untuk Melanjutkan....");
}


void menu(){
	printf ("Sistem Informasi Mahasiswa\n");
	pagar(20);
	printf("\n1.Tampilkan Data Mahasiswa\n2.Input Data Mahasiswa\n3.Urutkan Data Mahasiswa\n4.Keluar\n");
}



int main (){
	char Pil;
	load_data();
	do {
		CLS();
		menu();
		do {
			fflush(stdin);
			printf ("Masukan Menu [1-4] : ");
			Pil=getch();
		}while ((Pil!='1')&&(Pil!='2')&&(Pil!='3')&&(Pil!='4'));
		switch (Pil)
		{
			case '1' : CLS();Tampil();break;
			case '2' : CLS();Add();break;
			case '3' : CLS();Sort();break;
		}
		if (Pil!='4')
			getch();
	}while (Pil!='4');
	return 0;
}
