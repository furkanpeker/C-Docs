//SORU 7) Pointer kullanarak bir stringdeki (karakter dizisindeki) boþluklarýn sayýsýný
//hesaplayan ve ekrana yazdýran programý yazýnýz.
#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
	char  word[500], space=0, *p;
	int i;
	
	p=word;
	
	printf("Enter a sentence:");  gets(word);
	for(i=0; i<strlen(p); i++)
	{
		if(*(p+i)==' ')
		{
			space++;	
		}
	}

	printf("the number of space is %d.",space);

	

	getch();
	
	return 0;
	
}
