#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int Transfer()
{
	int Balance,Bayar,Sum;
	Balance=250000;
	printf ("Your Remaining Balance = Rp. 250000\n\n");
	printf ("Transfer Balance\n");
	printf ("*****************\n\n");
	printf ("Phone Number To Be Transferred [10..14]: 089012345678\n\n");
	printf ("Balance to be Transferred\t\t : ");
	scanf ("%d", &Bayar);
	Sum = Balance-Bayar;
	if (Sum<0){
		printf ("\n\nYour Balance is not Enough.\n\n");
		printf ("Thank You For using this Application");
	}
	else {
		printf ("Congrats!\n");
		printf ("You Successfully transferred Rp. %d\n", Bayar);
		printf ("Your Balance Now = Rp. %d\n\n", Sum);
		printf ("Thank You For using this Application");
	}
	
}

int Reload()
{
	int product;
	printf ("Your Remaining Balance = Rp. 250000\n\n");
	printf ("Reload\n");
	printf ("**********\n\n");
	printf ("Choose a product to Reload");
	printf ("\n1. Rp 50.000\n2. Rp 100.000\n3. Rp 150.000\n4. Rp 200.000\n");
	printf ("Enter Your Choice : ");
	scanf("%d", &product);
		switch (product){
			case 1: {
				printf ("\n\nCongrats!\n");
				printf ("Your Balance Now = Rp. 300.000\n\n");
				printf ("Thank You For using this Application");
				break;
			}
			case 2: {
				printf ("\n\nCongrats!\n");
				printf ("Your Balance Now = Rp. 350.000\n\n");
				printf ("Thank You For using this Application");
				break;
			}
			case 3:{
				printf ("\n\nCongrats!\n");
				printf ("Your Balance Now = Rp. 400.000\n\n");
				printf ("Thank You For using this Application");
				break;
			}
			case 4:{
				printf ("\n\nCongrats!\n");
				printf ("Your Balance Now = Rp. 450.000\n\n");
				printf ("Thank You For using this Application");
				break;
			}
			default :{
				printf ("\nit is out of our Choice.\n\n");
				printf ("Thank You For using this Application");
				break;
			}
		}
	
}

int Remaining()
{
	printf ("Remaining Balance\n");
	printf ("******************\n\n");
	printf ("Your Remaining Balance        = Rp. 250000\n");
	printf ("Your Phone Number Valid Until = 31 December 2019\n\n");
	printf ("Thank You For using this Application");
}

int main ()
{
	char Usn[5],Pass[5];
	int Fungsi;
	printf ("Nama : Ilham Bagus Masnanda\nNim: 2301940275-01\n\n");
	printf ("\t\t\t Login First\n");
	printf ("Username : ");
	scanf ("%s", &Usn);
	printf ("Password : ");
	scanf ("%s", &Pass);
		if(strcmp(Usn,"phone")==0 && strcmp(Pass, "phone")==0)
		{
			printf ("\t\t\t Simple Phone Service\n");
			printf ("\t\t *********************************\n\n");
			printf("1.Remaining Balance\n2.Reload\n3.Transfer Balance\n4.Exit\n\n");
			printf("Enter Your Choice  : ");
				scanf ("%d", &Fungsi);
				getch();
				system("cls");
				switch (Fungsi){
					case 1: {
						Remaining();
						getch();
						system("cls");
						break;
					}
					case 2: {
						Reload();
						getch();
						system("cls");
						break;
					}
					case 3: {
						Transfer();
						getch();
						system("cls");
						break;
					}
					case 4: {
						printf ("Thank You For using this Application");
						break;
					}
				}
		}
		else
		{
			printf ("Your Username And Password are incorrect.\n");
			printf ("Press enter to Continue...\n\n");
			printf ("Thank You For using this Application");
		}
}
