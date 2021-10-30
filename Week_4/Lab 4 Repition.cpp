#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int Transfer(int option())
{
	int Bayar,Sum,Balance;
	Balance=200000;
	printf ("Your Remaining Balance = Rp. 200.000\n\n");
	printf ("Transfer Balance\n");
	printf ("*****************\n\n");
	printf ("Phone Number To Be Transferred [10..14]: 089012345678\n\n");
	printf ("Balance to be Transferred\t\t : ");
	scanf ("%d", &Bayar);
	Sum = Balance-Bayar;
	if (Sum<0){
		printf ("\n\nYour Balance is not Enough.\n\n");
		printf ("Press enter to continue...");
		getch();
		option();
		
	}
	else {
		printf ("Congrats!\n");
		printf ("You Successfully transferred Rp. %d\n", Bayar);
		printf ("Your Balance Now = Rp. %d\n\n", Sum);
		printf ("Press enter to continue...");
		getch();
		option();
	}
	
}

int Reload(int option())
{
	int product,Balance;
	system ("cls");
	printf ("Your Remaining Balance = Rp. 0\n\n");
	printf ("Reload\n");
	printf ("**********\n\n");
	printf ("Choose a product to Reload");
	printf ("\n1. Rp 50.000\n2. Rp 100.000\n3. Rp 150.000\n4. Rp 200.000\n");
	printf ("Enter Your Choice : ");
	scanf("%d", &product);
		switch (product){
			case 1: {
				printf ("\n\nCongrats!\n");
				printf ("Your Balance Now = Rp. 50.000\n\n");
				printf ("Press enter to continue...");
				getch();
				option();
				break;
			}
			case 2: {
				printf ("\n\nCongrats!\n");
				printf ("Your Balance Now = Rp. 100.000\n\n");
				printf ("Press enter to continue...");
				getch();
				option();
				break;
			}
			case 3:{
				printf ("\n\nCongrats!\n");
				printf ("Your Balance Now = Rp. 150.000\n\n");
				printf ("Press enter to continue...");
				getch();
				option();
				break;
			}
			case 4:{
				printf ("\n\nCongrats!\n");
				printf ("Your Balance Now = Rp. 200.000\n\n");
				printf ("Press enter to continue...");

				getch();
				option();
				break;
			}
			default :{
				Reload(option);
				break;
			}
		}
	
}

int Remaining()
{
	printf ("Remaining Balance\n");
	printf ("******************\n\n");
	printf ("Your Remaining Balance        = Rp. 0\n");
	printf ("Your Phone Number Valid Until = 31 December 2019\n\n");
	printf ("Press enter to continue...");
}

int option()
{
	int Fungsi;
		system ("cls");
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
						option();
						break;
					}
					case 2: {
						Reload(option);
						getch();
						system("cls");
						option();
						break;
					}
					case 3: {
						Transfer(option);
						getch();
						system("cls");
						option();
						break;
					}
					case 4: {
						printf ("Thank You For using this Application");
						getch();
						goto exit;
						break;
					}
				}
	if ((Fungsi >4)||(Fungsi <1)){
		option();
	}
   	exit:
	return 0;
}

int main ()

{
	char Usn[5],Pass[5];
	printf ("Nama : Ilham Bagus Masnanda\nNim: 2301940275-01\n\n");
	printf ("\t\t\t Login First\n");
	printf ("Username : ");
	scanf ("%s", &Usn);
	printf ("Password : ");
	scanf ("%s", &Pass);
		if(strcmp(Usn,"phone")==0 && strcmp(Pass, "phone")==0)
		{
		option();
		}
		else
		{
			main();
		}
}
