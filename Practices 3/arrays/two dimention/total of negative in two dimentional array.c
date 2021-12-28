#include <stdio.h>

int main()
{
	int array[4][2];
	int i, j, total=0;;
	
	for(i=0; i<4; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("enter value for the array[%d][%d]: ",i,j);
			scanf("%d",&array[i][j]);
		}
	}
	
	printf("two dimentional elements are;\n");
	for(i=0; i<4; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("%d ",array[i][j]);
			
			if(j==1)
				printf("\n");
		}
	}
	// we summed up the negative elements here.
	for(i=0; i<4; i++)
	{
		for(j=0; j<2; j++)
		{
			
			if(array[i][j]<0)
			{
				total = total + array[i][j];
			}
		}
	}
	
	printf("total of the negative numbers of the array is %d.",total);
	
	return 0;
}
