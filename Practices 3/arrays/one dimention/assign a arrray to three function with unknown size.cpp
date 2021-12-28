#include <stdio.h>
#include <conio.h>

int calculate_average(int[], int);
int find_max(int[], int);
int find_min(int[], int);

int main()
{
	int i, size, max, min, average;

	printf("Enter the size of array:");
	scanf("%d",&size);
	
	int array[size];
	
	for(i = 0; i < size; i++)
	{
		printf("enter the %d.element: ",i);
		scanf("%d",&array[i]);
	}
	
	average = calculate_average(array,size);
	max = find_max(array,size);
	min = find_min(array,size); 
	
	printf("average = %d\n",average);
	
	printf("maximum number is %d\n",max);
	
	printf("minimum number is %d",min);
	
	getch();
	
	return 0;
}

int calculate_average(int array[], int size)
{
	int average = 0, i;
	
	for(i = 0; i < size; i++)
	{
		average = average + array[i];
	}
	 return average / size;
}

int find_max(int array[], int size)
{
	int max, i;
	
	max = array[0];
	
	for(i = 1; i < size; i++)
	{
		if(max < array[i])
		{
			max = array[i];
		}
		
	}
	
	return max;
}

int find_min(int array[], int size)
{
	int min, i;
	
	min = array[0];
	
	for(i = 1; i < size; i++)
	{
		if(min > array[i])
		{
			min = array[i];
		}
		
	}
	
	return min;
}


