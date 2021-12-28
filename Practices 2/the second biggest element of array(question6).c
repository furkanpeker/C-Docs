#include <stdio.h>

int main()
{
	int max = 0, max_second = 0, i, size;
	

	
		printf("please enter a value for size of array (at least 2 integer): ");
		scanf("%d",&size);
	
	
	int array[size];
	for(i = 0; i < size; i++)
	{
		printf("enter %2d.count: ",(i+1));
		scanf("%d",&array[i]);
	}
	
	for(i = 0; i < size; i++)
	{
		if(max < array[i])
		{
			max = array[i];
			
			if(max_second < max)
			{
				max_second = array[i];
			}
			
		}
	}
	
	printf("the second biggest element of array is %d ",max_second);
	
	return 0;	
    
}
