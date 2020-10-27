// solution of qustion 12
#include <stdio.h>
int main()
{
	int month;
	printf("Enter the month number:");
	scanf("%d",&month);
	switch(month)
	{
		case 1: printf("The %d. month has 31 days",month);
		        break;
		case 2: printf("The %d. month has 28 or 29 (leap year) days it depens on leap year or not",month);
		        break;
		case 3: printf("The %d. month has 31 days",month);
		        break;  
		case 4: printf("The %d. month has 30 days",month);
		        break; 
		case 5: printf("The %d. month has 31 days",month);
		        break; 
		case 6: printf("The %d. month has 30 days",month);
		        break;    
		case 7: printf("The %d. month has 31 days",month);
		        break;
		case 8: printf("The %d. month has 31 days",month);
		        break;
		case 9: printf("The %d. month has 30 days",month);
		        break;
		case 10: printf("The %d. month has 31 days",month);
		        break;
		case 11: printf("The %d. month has 30 days",month);
		        break;
		case 12: printf("The %d. month has 31 days",month);
		        break;
		default:
			printf("wrong number");
			break;
	}
	return 0;
}
