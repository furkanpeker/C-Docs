#include <stdio.h>

int main()
{
	int array[2][2];
	int i, j, max=array[0][0];
	
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("enter value for the array[%d][%d]: ",i,j);
			scanf("%d",&array[i][j]);
		}
	}
	
	printf("two dimentional elements are;\n");
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("%d ",array[i][j]);
			
			if(j==1)
				printf("\n");
		}
	}

	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			
			if(max < array[i][j])
			{
				max= array[i][j];
			}
		}
	}
	
	printf("\nThe maximum of the elements of the array is %d.",max);
	
	return 0;
}
