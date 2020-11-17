// Assigment operators (Abreviations)
#include <stdio.h>
int main()
{
	int c,d,e,f,g;
    c=3;e=4;f=6;g=12;
    c+=5;
    printf("c=%d\n",c);
    e-=5;
    printf("e=%d\n",e);
    f*=3;
    printf("f=%d\n",f);
    g%=5;
    printf("g=%d\n",g);
    c+=g;
    printf("c=%d\n",c);
	return 0;
}
