#include <stdio.h>

int main()
{
    int num, first, last, sum;

    printf("Enter a 3 digit positive integer: ");
    scanf("%d", &num);

    last = num % 10;
    first = num / 100;

    sum = first + last;

    printf("First digit = %d\n", first);
    printf("Last digit = %d\n", last);
    printf("Sum of first and last digit = %d\n", sum);

    return 0;
}