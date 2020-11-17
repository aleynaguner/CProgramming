#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
	int a,b,c;
	char ch;
	do
	{
		system("cls");
		printf("This program is a simple calculator\n");
		printf("Enter a b values:");
		scanf("%d%d",&a,&b);
		printf("--------M E N U --------\n");
		printf("+ Addition\n");
		printf("- Substruction\n");
		printf("* Multiplication\n");
		printf("/ Division\n");
		printf("%% Remainder\n");
		printf("q exit\n");
		printf("----------------Your Selection:");
		scanf(" %c",&ch);
		printf("\n");
		switch (ch)
		{
			case '+':
				c=a+b;
				printf("%d+%d=%d",a,b,c);
				break;
			case '-':
				c=a-b;
				printf("%d-%d=%d",a,b,c);
				break;
			case '/':
				c=a/b;
				printf("%d/%d=%d",a,b,c);
				break;
			case '*':
				c=a*b;
				printf("%d*%d=%d",a,b,c);
				break;
			case '%':
				c=a%b;
				printf("%d%%%d=%d",a,b,c);
				break;
			default:
				break;
		}
		printf("\n");
		system("pause");
    } while(ch!='q');
	return 0;
}
