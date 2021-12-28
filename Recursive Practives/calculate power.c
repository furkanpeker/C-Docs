//Program to calculate power using recursion
#include <stdio.h>
#include <conio.h>

int calculate_power(int number, int power)
{

	if(power != 0)
	{
		return (number * calculate_power(number, power-1));
				
	}
	else 
	    return 1;

}

int main()
{
	int number, pow = 0, power;
	
	printf("please enter a value to calculate its power:");
	scanf("%d",&number);
	
	printf("enter the power of number you have enetered:");
	scanf("%d",&power);

	pow = calculate_power(number, power);
	
	printf("%d power of %d number is %d.",power, number, pow);
	
	return 0;
}

/*Explain = for example let its become power = 3;            1.
                      1.                               2.                                               3.
				   power = 3                      power = 2                                         power = 1
			return	number*function     return number * number * function            return number * number * number * function(this function can't run any more because power is gonno become "0"!)

                      4.
                  power = 0
                  return 1;    
*/			
