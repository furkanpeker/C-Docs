#include <stdio.h>
#include <conio.h>

int find_location(char *p, char ch)
{
	int i=1;
	
	while(*p != NULL)
	{
		if(*p==ch)
			return i;
		else
		{
			p++;
			i++;
		}
	}
	
	return 0;
}

int main()
{
	char *a = NULL, ch;
	int s;
	
	a="computer";
	printf("enter a character from 'computer'word:"); scanf("%c",&ch);
	
	s= find_location(a, ch);
	
	if(s > 0)
	   printf("the location of '%c' is %d.",ch,s);
	else 
		printf("the letter is not exist in this word!");
		
	return 0;
}
