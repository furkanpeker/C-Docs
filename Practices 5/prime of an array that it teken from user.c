#include <stdio.h>
int prime(int count)
{
	int i;
	int primeness=1;
	
	if(count <= 1)
	{
		return 0;
	}
	
	for(i=0; i < count; i++)
	{
		if(count % i == 0)
		{
			primeness=0;
		}
	}
	
	return primeness;
}
int main()
{
	
	int primeness, count;
	int i, size;
	
	printf("enter the size of array:"); scanf("%d",&size);
	
	
	int array[size];
	
	for(i=0; i< size; i++)
	{
		printf("enter the %2d.number : ",i);
		scanf("%d",&array[i]);
	}
	
	for(i=0; i< size ; i++)
	{
		count = array[i];
		primeness= prime(count);
		
		if(primeness == 1)
		{
			printf("%d\n",count);
		}
	}
	
	return 0;
	
} 


