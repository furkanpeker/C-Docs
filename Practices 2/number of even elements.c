#include <stdio.h>

int main()
{
	int array[4][2];
	int i, j, counter;
	
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
	// we found number of the even elements here.
	for(i=0; i<4; i++)
	{
		for(j=0; j<2; j++)
		{
			
			if(array[i][j]%2==0)
			{
				counter++;
			}
		}
	}
	
	printf("\nNumber of the even numbers of the array is %d.",counter);
	
	return 0;
}
