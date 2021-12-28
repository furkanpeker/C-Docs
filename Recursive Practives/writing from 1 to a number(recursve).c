#include <stdio.h>
#include <conio.h>
int total(int N, int n)
{
	int result ;
	
	printf("%d\n",N);
	
	if(N != n)
		result = N + total(N+1,n);
	else
		result = n;
		
	
	return result;
	
}
int main(void)
{
	int N, result;
	
	printf("enter a count:"); scanf("%d",&N);
	
	result = total(1,N);
	
	printf(" the total of from 1 to %d is %d.",N,result);
	getch();
	return 0;
} 
