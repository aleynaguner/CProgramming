#include <stdio.h>
#include <time.h>

int main()
{
    time_t second;
    second = time(NULL);
    printf("epoch time in seconds since 1 January 1970 is %ld\n", second);

    printf("epoch time in days since 1 January 1970 is %ld\n", second / 3600);

    time_t presentTime;
    presentTime = time(NULL);
    printf("Present time is =>\t");
    printf(ctime(&presentTime));

    time_t start, end;
    start = time(NULL);

    for (int counter = 0; counter < 5000; counter++)
        ;

    end = time(NULL);
    printf("\nLoop executing time is %f second", difftime(end, start));

    return 0;
}