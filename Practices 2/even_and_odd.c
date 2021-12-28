#include <stdio.h>
int find_even(int array[]);
int find_odd(int array[]);

int main()
{
	int array[7];
	
	int i, total_e = 0, total_o = 0, difference;
	
	for(i = 0; i < 7; i++)
	{
		printf("enter %2d.element: ", (i+1));
		scanf("%d",&array[i]);
    }
    
   for(i = 0; i < 7; i++)
	{
		if (array[i] % 2 == 0)
		{
			total_e = total_e + array[i];
		}
		else
		{
			total_o = total_o + array[i];
		}
	}

   if(total_e > total_o)
   {
   		difference = total_e - total_o;
   }else if(total_o > total_e)
   {
   		difference = total_o - total_e;
   }else
   {
   		difference = 0;
   }
   
   printf("difference is %d.",difference);
	
	return 0;
}

