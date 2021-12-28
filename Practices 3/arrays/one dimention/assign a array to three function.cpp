#include <stdio.h>


int calculate_average(int[5]);

int find_max(int[5]);

int find_min(int[5]);

int main()
{
	int numbers[5] = {1,2,3,4,5};
	
	int max,min,average;
	
	average = calculate_average(numbers);
    max = find_max(numbers);
    min = find_min(numbers);
	
	printf("the average = %d\n",average);
	printf("the maximum number is %d\n",max);
	printf("the minimum number is %d",min);
	
	return 0;
}

int find_max(int numbers[5])
{
	int i, max = numbers[0]; 
	for(i = 1; i < 5; i++ )
	{
		if(max < numbers[i])
		{
			max = numbers[i];
		}
	}
	
	return max;
} 

int find_min(int numbers[5])
{
	int i, min = numbers[0];
	
	for(i = 1; i < 5; i++)
	{
		if(min > numbers[i]);
		{
			min = numbers[i];
		}
	}
	
	return min;
}

int calculate_average(int numbers[5])
{
	int i, average = 0;
	
	for(i = 1; i < 5; i++)
	{
		average = numbers[i] + average;
	}
	
	return	 average/5;
}
