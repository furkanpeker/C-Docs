//SORU 1) �ki de�i�kenin de�erini pointer kullanarak kendi aras�nda de�i�tiren program� yaz�n�z. (�rne�in a = 3, b = 7 ise, sonu�ta a = 7, b = 3 olmal�d�r)
#include <stdio.h>
void swapping(int *a, int *b)
{
	int temp;
	
	temp=*a;
	*a=*b;
	*b=temp;
	
	
}
int main()
{
	
	int a, b;
	
	printf("enter two counts(warning! please remember respection of the counts you entered.):");
	scanf("%d %d",&a,&b);

	swapping(&a, &b);
	printf("the first count is %d\n",a);
	printf("the second count is %d",b);
	
	
}

