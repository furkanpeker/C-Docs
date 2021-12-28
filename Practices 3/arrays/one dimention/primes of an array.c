//Bir integer dizisinin asal elemanlarýný ekrana yazdýran bir program yazýnýz.
#include <stdio.h>

int prime(int count)
{
	int i;
	int primeness = 1;
	
	if(count <= 1)
		return 0;
   
    for(i=2; i<count; i++)
    {

	     if(count % i == 0)
	    {
			primeness = 0;
      	}
	
    }

	return primeness;
	
}

int main()
{
	int count, i, array[10] = {1,2,3,4,5,6,1,8,9,10};
	
	int primeness;
	
	for(i=0; i<10; i++)
	{
		count = array[i];
		primeness = prime(count);
		if(primeness == 1)
		{
			printf("%d",count);
		}
	}
	
	return 0;
	
}


