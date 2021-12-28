#include <stdio.h>

int find_location(char *a, char ch)
{
	int j=1;
	while(*a != NULL)
	{
		if(*a == ch)
			return j;
		
		else
		{
			a++;
			j++;
		}	
	}
	return 0;
}

int main(void)
{
	char *i = NULL, ch;
	int l_value;
	
	printf("enter a character that it is in (computer) word :");
	scanf("%c",&ch);
	
	i="computer";
	
	l_value = find_location(i, ch);
	
	if(l_value > 0)
		printf("the letter of %c  is %d.character.",ch,l_value);
	else
		printf("This word hasn't such thatS letter.");


}

