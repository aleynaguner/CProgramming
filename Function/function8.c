#include <stdio.h>

float celciusToFahrenheit(float);

int main()
{
    float m;

    printf("enter celcius degree : \n");
    scanf("%f", &m);
    printf("fahr degree is %.2f for given cel %.2f", celciusToFahrenheit(m), m);

    return 0;
}

float celciusToFahrenheit(float c){
    float f;
    f = (1.8 * c) + 32;
    return f;
}