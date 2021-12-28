//SORU 22) Bir matrisin satýr satýr toplamlarýnýn en büyük deðerini bulup, ekrana yazdýran bir program yazýnýz.
#include <stdio.h>
#include <conio.h>
int main()
{
	int array[2][3];
	int i=0, j, total_row, max=0;
	
	for(i=0; i<2; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("enter array[%d][%d]: ",i, j);
			scanf("%d",&array[i][j]);
		}
	}
	
	printf("\nThe array is;\n\n");
	for(i=0; i<2; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d ",array[i][j]);
			
			if(j==2)
				printf("\n");
		}
	}
	printf("\n");
	
	for(i=0; i<2; i++)
	{
		total_row=0;
		
		for(j=0; j<3; j++)
		{	
			 total_row += array[i][j];
			 
			 if(max < total_row)
			 {
			 	max = total_row;
			 }		  
		}
		printf("total of %d.row is %d\n",i+1, total_row);	
	}
	
	printf("\nmax= %d",max);
	
	getch();
	
}	
