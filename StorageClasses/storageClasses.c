#include <stdio.h>

int main()
{
    //default storage class is auto

    auto int i = 1;
    {
        auto int i = 2;
        {
            auto int i = 3;
            printf("%d\n", i);
        }
        printf("%d\n", i);
    }
    printf("%d\n", i);

    return 0;
}