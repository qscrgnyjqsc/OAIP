#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
    float a;
    float b;
    float c;

    printf("Enter numbers a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    int counter = 0;

    if (a * b == 1.0)
    {
        counter++;
    }

    if (a * c == 1.0)
    {
        counter++;
    }

    if (b * c == 1.0)
    {
        counter++;
    }

    printf("Number of pairs of reciprocal numbers: %d", counter);
    
    return 0;
}