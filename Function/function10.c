#include <stdio.h>
#include <math.h>

void swap(int x, int y){
    printf("before swap x = %d , y = %d\n",x,y);
    int s = x;
    x = y;
    y = s;
    printf("after swap x = %d , y = %d\n",x,y);
}

int main()
{
    int x,y;

    printf("enter two number for swap : \n");
    scanf("%d %d", &x, &y);
    swap(x,y);
    printf("after swap x = %d , y = %d\n",x,y);

    return 0;
}