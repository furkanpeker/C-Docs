#include <stdio.h>
/*
int main()
{
	int array[]={9,3,4,5,7,3};
	int i, backup;
	
	for(i = 0; i <= 3; i++)
	{
		backup = array[i];
		array[i] = array[5 - i];
		array[5 - i] = backup;
	}
	printf("inverse of array:\n");

	for(i = 0; i < 6; i++)
	{
		printf("array[%d]= %d\t",i, array[i]);
	}
}
*/
int main()
{
	int array[100], n;
	int i, backup;
	
	printf("number of elements:"); scanf("%d",&n);
	for(i = 0; i < n; i++)
	{
		printf("array[%d]=",i);
		scanf("%d",&array[i]);
	}
	
	for(i = 0; i <(
	n/2); i++)
	{
		backup = array[i];
		array[i] = array[n-1 - i];
		array[n - 1 - i] = backup;
	}
	printf("inverse of array:\n");

	for(i = 0; i < n; i++)
	{
		printf("array[%d]= %d\t",i, array[i]);
	}
}

