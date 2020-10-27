// q3
#include <stdio.h>
int main()
{
	char ch;
	//for(ch='a';ch<='z';ch++) printf("%c %d\n",ch,ch);
	ch='a';
	while(ch<='z')
	{
		printf("%c %d\n",ch,ch);
		ch++;
	}
	return 0;
}
