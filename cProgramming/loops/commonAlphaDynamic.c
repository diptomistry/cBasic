#include <stdio.h>

const int MAX_CHAR = 52; // 26 for lowercase and 26 for uppercase

void commonCharacters(char str[][10000], int n)
{

    int common[MAX_CHAR];
    for (int i = 0; i < MAX_CHAR; i++)
    {
        common[i] = 1;
    }

    for (int i = 0; i < n; i++)
    {

        int current[MAX_CHAR] = {0};

        for (int j = 0; str[i][j]; j++)
        {
            char c = str[i][j];
            if (c >= 'a' && c <= 'z')
            {
                current[c - 'a'] = 1;
            }
            else if (c >= 'A' && c <= 'Z')
            {
                current[c - 'A' + 26] = 1;
            }
        }

        for (int j = 0; j < MAX_CHAR; j++)
        {
            common[j] &= current[j];
        }
    }

    int foundCommon = 0;
    for (int i = 0; i < MAX_CHAR; i++)
    {
        if (common[i])
        {
            foundCommon = 1;
            break;
        }
    }

    if (foundCommon)
    {

        for (int i = 0; i < MAX_CHAR; i++)
        {
            if (common[i])
            {
                if (i < 26)
                {
                    printf("%c", i + 'a');
                }
                else
                {
                    printf("%c", i + 'A' - 26);
                }
            }
        }
    }
    else
    {
        printf("###");
    }
    printf("\n");
}

int main()
{
    int n;
    scanf("%d", &n);

    char str[n][10000];

    for (int i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }

    commonCharacters(str, n);
    return 0;
}
