#include <stdio.h>

int main()
{
    char passwords[5][20] = {
        "abc12345",
        "HELLO123",
        "abcDEF12",
        "password",
        "Abc12345"
    };

    int score;
    int strongestScore = 0;
    int below10 = 0;
    int strongest = 0;

    for (int i = 0; i < 5; i++)
    {
        score = 0;

        for (int j = 0; passwords[i][j] != '\0'; j++)
        {
            if (passwords[i][j] >= 'a' && passwords[i][j] <= 'z')
            {
                score = score + 1;
            }
            else if (passwords[i][j] >= 'A' && passwords[i][j] <= 'Z')
            {
                score = score + 2;
            }
            else if (passwords[i][j] >= '0' && passwords[i][j] <= '9')
            {
                score = score + 3;
            }

            if (passwords[i][j] == '1' &&
                passwords[i][j + 1] == '2' &&
                passwords[i][j + 2] == '3')
            {
                score = score - 3;
            }
        }

        int length = 0;

        for (int j = 0; passwords[i][j] != '\0'; j++)
        {
            length++;
        }

        if (length >= 8)
        {
            score = score + 5;
        }

        printf("%s = %d\n", passwords[i], score);

        if (score < 10)
        {
            below10++;
        }

        if (score > strongestScore)
        {
            strongestScore = score;
            strongest = i;
        }
    }

    printf("Strongest Password: %s\n", passwords[strongest]);
    printf("Passwords Below 10: %d\n", below10);

    return 0;
}