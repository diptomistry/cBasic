#include <stdio.h>

const int MAX_CHAR = 26;

void commonCharacters(char str[][10000], int n)
{
    
    int prim[MAX_CHAR];
    for (int i = 0; i < MAX_CHAR; i++)
    {
        prim[i] = 1;
    }

  
    for (int i = 0; i < n; i++)
    {
       
        int sec[MAX_CHAR];
        for (int j = 0; j < MAX_CHAR; j++)
        {
            sec[j] = 0;
        }

     
        for (int j = 0; str[i][j]; j++)
        {
           
            if (prim[str[i][j] - 'a'])
            {
                sec[str[i][j] - 'a'] = 1;
            }
        }

        
        for (int j = 0; j < MAX_CHAR; j++)
        {
            prim[j] = sec[j];
        }
    }

  
    int foundCommon = 0;
    for (int i = 0; i < MAX_CHAR; i++)
    {
        if (prim[i])
        {
            foundCommon = 1;
            break;
        }
    }

    if (foundCommon)
    {

        for (int i = 0; i < MAX_CHAR; i++)
        {
            if (prim[i])
            {
                printf("%c", i + 'a');
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
