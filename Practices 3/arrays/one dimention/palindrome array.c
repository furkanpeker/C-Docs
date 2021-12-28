/*SORU 10) Bir integer dizisinin palindrome bir dizi olup olmadýðýný kontrol ederek;
palindrome bir ekrana “Bu bir palindrome dizidir”, deðilse “Bu bir palindrome dizi deðildir.”
yazdýran programý yazýnýz.
(Palindrome dizi elemanlarý saðdan sola ve soldan saða okunduðunda ayný çýktýyý
vermektedir. Örneðin; [5, 2, -3, 1, -3, 2, 5] gibi...)*/
#include <stdio.h>
#include <conio.h>

int main()
{
	int array[5];
	int i,result=0;
	
	for(i=0; i<5; i++)
	{
		printf("enter the %d.element of array: ",i+1);
		scanf("%d",&array[i]);	
	}
	
	for(i=0; i<5; i++)
	{
		//i=4 palindrome else not palindrome
		if(array[i] == array[4-i])
		{
			result = i;
		}
		else
		{
			break;
		}
	}
	
	if(result == 4)
	{
		printf("\nThis is palindrome array.");
	}
	else
	{
		printf("\nThis is not palindrome array.");
	}
	getch();

	
}
