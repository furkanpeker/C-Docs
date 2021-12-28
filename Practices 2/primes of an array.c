//Bir integer dizisinin asal elemanlarýný ekrana yazdýran bir program yazýnýz.
#include <stdio.h>

int prime(int array[10])
{
	int i;
	for(i = 2; i < array[i]; i++)
	{
	
	if(array[i] % i == 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
	
	}
}

int main()
{
	int i, array[10] = {1,2,3,4,5,6,7,8,9,10};
	
	int primeness = 0;
	
	primeness = prime(array[10]);
	
	for(i = 0; i < 10; i++)
	{
		if(primeness == 1)
		{
			printf("%d",array[i]);
		}
		else
		{
			break;
		}
	}
	
	return 0;
	
}
