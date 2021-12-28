// find  max value and  min value in a array.

#include <stdio.h>
#include <conio.h>

int main()
{
	
	int a[]={1,5,7,8,2,7,36,4,89};
	int i, max, min;
	max = a[0];
	min = a[0];
	
	for(i = 1;i < 10;i++)
	{
		if(max < a[i])
			max = a[i];
	
		
		if(min > a[i])
			min = a[i];
	}
	printf("\nFor the (a[]={1,5,7,8,2,7,36,89,4}) array; ");
	printf("\n\nThe smallest value is %d\n",min);
	
	printf("The biggest value is %d\n",max);
	
	
	return 0;
}


