#include <stdio.h>
#include <conio.h>


//The program that says the sum of the divisible by 3 from 1 to 10

int f(int N)
{
	if(N == 1)
		return 1;
	
	if(N % 3 == 0)
	{
		return N + f(N-1);
	}
	else if(N % 3 != 0) 
	{
		return f(N-1);
	}
		
	
}

int main()
{
	int N, result;
	
	printf("enter a count:");
	scanf("%d",&N);
	
	result = f(N);
	
	printf("%d",result);
}

