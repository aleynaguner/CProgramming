#include <stdio.h>

int main()
{
    enum days {MONDAY=2, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY=1};

    printf("MONDAY = %d\n", MONDAY);
    printf("TUESDAY = %d\n", TUESDAY);
    printf("WEDNESDAY = %d\n", WEDNESDAY);
    printf("THURSDAY = %d\n", THURSDAY);
    printf("FRIDAY = %d\n", FRIDAY);
    printf("SATURDAY = %d\n", SATURDAY);
    printf("SUNDAY = %d\n", SUNDAY);

   return 0;
}