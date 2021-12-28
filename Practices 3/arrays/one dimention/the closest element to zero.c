//Negatif ve pozitif elemanlardan oluþan bir float dizisinin 0'a en yakýn olan elemanýný bulan bir program yazýnýz.
#include <stdio.h>

float f(float sayi)
{
	if(sayi < 0)
	{
		return -sayi;
	}
	else
	{
		return sayi;
	}
}


int main()
{
    float array[6]= {-3.4,-2.0,-1.0,0.5,5.0,8.2};
    int i;
	float close;
	
	float count = array[0];
	close = f(array[0]);
	
	for (i=0; i<6; i++)
	{
		if(close > f(array[i]))
		{
			count = array[i];
		}
	}
	
	printf("the closest element to zero is %f.",count);
}
// mutlak degeri buyuk olan eleman 0 a o adar uzaktýr

