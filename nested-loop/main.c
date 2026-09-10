#include <stdio.h>

int main()
{
    int rows = 5;
    int start = 10;
    int i, j, num;

    for (i = 0; i < rows; i++)
    {

        for (j = 0; j < rows; j++)
        {

            if (j < i)
            {

                printf("   ");
            }
            else
            {

                num = start - j;
                printf("%2d ", num);
            }
        }

        printf("\n");
    }

    return 0;
}