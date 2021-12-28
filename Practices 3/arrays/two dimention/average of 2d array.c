#include <stdio.h>
#include <conio.h>
int main()
{
	float array[3][2];
	int i, j;
	float  total=0.0, average=0.0;
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("enter the element of array[%d][%d]: ",i,j);
			scanf("%f",&array[i][j]);
		}
	}
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("%f ",array[i][j]);
			
			if(j==1)
			{
				printf("\n");				
			}
		}
	}
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<2; j++)
		{
			total = total + array[i][j];
		}
	}
	
	average = total/6;
	
	printf("\nnaverage=%f", average);
	
	getch();
	return 0;
	
	
}
