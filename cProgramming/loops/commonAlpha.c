#include <stdio.h>

void findCommonAlphabets(char strings[][100], int numStrings)
{
    if (numStrings <= 0)
    {
        printf("No common alphabets (no input strings)\n");
        return;
    }

    char commonAlphabets[26];
    int commonCount = 0;

    char *firstString = strings[0];
    // Start with the characters from the first string

    int i = 0;
    
    while (firstString[i])//jotokkhon porjonto null na pai
    {
        char c = firstString[i];
        int isCommon = 1;

        for (int j = 1; j < numStrings; j++)
        {
            int found = 0;
            int k = 0; 
            while (strings[j][k])
            {
                if (strings[j][k] == c)
                {
                    found = 1;
                    break;
                }
                k++; 
            }
            if (!found)
            {
                isCommon = 0;
                break;
            }
        }

        if (isCommon)
        {
            commonAlphabets[commonCount] = c;
            commonCount++;
        }
        i++;
    }
    
    // Sort commonAlphabets array in alphabetical order
    for (int i = 0; i < commonCount - 1; i++)
    {
        for (int j = i + 1; j < commonCount; j++)
        {
            if (commonAlphabets[i] > commonAlphabets[j])
            {   //buble sort
                char temp = commonAlphabets[i];
                commonAlphabets[i] = commonAlphabets[j];
                commonAlphabets[j] = temp;
            }
        }
    }

    for (int i = 0; i < commonCount; i++)
    {
        printf("%c", commonAlphabets[i]);
    }
    printf("\n");
}

int main()
{
    int numStrings;

    scanf("%d", &numStrings);
    getchar(); //  Consume the newline character

    char strings[numStrings][100];

    for (int i = 0; i < numStrings; i++)
    {

        scanf("%s", strings[i]);
    }

    findCommonAlphabets(strings, numStrings);

    return 0;
}
