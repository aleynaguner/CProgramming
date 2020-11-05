// q3
#include <stdio.h>
int main()
{
	char ch;
    printf("\nThe lowercase alphabets in English:\n");
	ch='a';
	while(ch<='z')
	{
		printf("%c %d\n",ch,ch);
		ch++;
	}
	printf("\nThe uppercase alphabets in English:\n");
	ch='A';
	while(ch<='Z')
	{
		printf("%c %d\n",ch,ch);
		ch++;
	}
	return 0;
}
