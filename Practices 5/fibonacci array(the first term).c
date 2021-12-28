#include <stdio.h>

int main()
{
	int N=1, i =1, result = 1, n, temp;
	
	printf("enter a number for fibonacci array:");
	scanf("%d",&n);

	printf("1\n");
	
	for(i=1; i<=n; i++)
	{
		printf("%d\n",result);
	
		temp = result;
		result = result + N;
	     N = temp; 
	}
	
	return 0;
	
}
