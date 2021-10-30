#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main ()
{
	int matrix[20][20],x,y,i,j,jawab,total;
	total=0;
	srand(time(0));
	printf ("Nama:Ilham Bagus Masnanda NIM : 2301940275");
	printf ("\nSpeed Guess?\n");
	printf ("Matrix Row Size \t[20] :");scanf("%d",&x);
	printf ("Matrix Column Size\t[20] :");scanf("%d",&y);
	printf ("\n\nSpeed Guess Random Matrix\n\n");
	for (i=0;i<x;i++){
		for(j=0;j<y;j++){
			matrix[i][j]=rand()%101;
			printf ("[%d][%d]%d ",i,j,matrix[i][j]);
			if (matrix[i][j]%2==1){
				total=total+1;
			}
		}
		printf ("\n");
	}
	printf ("\n\nHow Many Odd Number? : ");scanf ("%d", &jawab);
	if (total==jawab){
		printf("You're Brilliant!!");
	}
	else{
		printf ("You're Wrong!!");
	}
}
