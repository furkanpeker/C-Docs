#include <stdio.h>
//Bir integer sayıyı parametre olarak alan ve en büyük basamağındaki rakamı return
//eden fonksiyonu yazınız. (Örneğin; 37825 sayısı için 3 return edilmelidir.)

int power(int count, int pow)
{
	int i, result = 1;

	for (i=0; i < pow; i++)
	{
		result = count * result;
	}

	return result;
}

int the_biggest_digit_value(int count,int digit )
{
	int max = 0;
	
	if(count > 0)
	{
		max = count / power(10, (digit-1)); 
	}

	return max;
}

int main()
{
	int count, result, digit = 0;
	
	printf("enter a count:");
	scanf("%d",&count);
	
    int sayi = count; // bunu count , aşağıdaki dögüde sıfırlandığı için count u korumak amacıyla yaptık.
	
	while(count > 0)
	{
		count = count/10;  
		digit++;
	}
	printf("the count has %d digit.\n",digit);

	
	
	result = the_biggest_digit_value(sayi, digit);
	
	printf("number in the biggest digit of the number is %d.",result);
	
	return 0;
}

/*
%        /
10    -> 1
100   -> 10
1000  -> 100
10000 -> 1000

324
4
2
3

37825
5
2
8
*/

