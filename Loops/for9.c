#include <stdio.h>

int main()
{
    int i = 0;

    //other than 0 means true
    for (; 5; i++)
    {
        printf("%d\n", i);
        if (i == 3)
            break;
    }

    return 0;
}

// #include <stdio.h>

// int main()
// {
//     int i = 0;

//     for (; 0; i++)
//     {
//         printf("%d\n", i);
//     }

//     return 0;
// }