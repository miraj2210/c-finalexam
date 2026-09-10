
#include <stdio.h>

int main()
{
    int a[2], b[2], sum[2];
    int i;

    printf("Enter 2 elements of first array:\n");
    for (i = 0; i < 2; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter 2 elements of second array:\n");
    for (i = 0; i < 2; i++)
    {
        scanf("%d", &b[i]);
    }

    for (i = 0; i < 2; i++)
    {
        *(sum + i) = *(a + i) + *(b + i);
    }

    printf("Sum of two arrays:\n");
    for (i = 0; i < 2; i++)
    {
        printf("%d ", *(sum + i));
    }

    return 0;
}
