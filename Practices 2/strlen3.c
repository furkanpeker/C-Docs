#include <stdio.h>
#include <string.h>
// the program which it prints all of the characters of a city;
int main()
{
	char message[] = "You are very lucky man!";
	int i;

	for(i = strlen(message); i >= 0; i--)
	{
		printf("%c\t",message[i]);
	}
	
	return 0;
}
