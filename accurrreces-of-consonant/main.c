#include <stdio.h>

void countConsonants(char str[])
{
    int i, count;
    char ch;

    for (ch = 'a'; ch <= 'z'; ch++)
    {
        if (ch != 'a' && ch != 'e' && ch != 'i' &&
            ch != 'o' && ch != 'u')
        {
            count = 0;

            for (i = 0; str[i] != '\0'; i++)
            {
                if (str[i] == ch || str[i] == ch - 32)
                {
                    count++;
                }
            }

            if (count > 0)
            {
                printf("%c = %d\n", ch, count);
            }
        }
    }
}

int main()
{
    char str[10];

    printf("Enter a string: ");
    scanf("%s", str);

    countConsonants(str);

    return 0;
}