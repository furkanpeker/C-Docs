#include <stdio.h>
#include <conio.h>

void main()
{
	int dizi[5][2] = {{1,2},{3,4},{5,6},{7,8},{9,10}};
	
	int i , j ;
	for (i = 0 ; i < 5 ; i++)
	{
	   	for (j = 0 ; j < 2 ; j++)
	   	{
	   		printf("%d\t",dizi[i][j]);
	   	}
		printf("\n");
	}	
	getch();
	
}
