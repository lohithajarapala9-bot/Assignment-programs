#include <stdio.h>

int main()
{
    float number;

    printf("\nEnter a number: ");
    scanf("%f", &number);

    if (number > 0)
    {
        printf("\nPositive number");
    }
    else if (number < 0)
    {
        printf("\nNegative number");
    }
    else
    {
        printf("\nZero");
    }

    return 0;
}
