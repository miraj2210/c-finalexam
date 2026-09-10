#include <stdio.h>

void checkDivisibility(int num)
{
    if (num % 3 == 0 && num % 5 == 0)
    {
        printf("%d is divisible by both 3 and 5.\n", num);
    }
    else
    {
        printf("%d is NOT divisible by both 3 and 5.\n", num);
    }
}

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    checkDivisibility(number);

    return 0;
}