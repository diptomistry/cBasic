#include <stdio.h>
#include <stdlib.h>

void findCommonAlphabets(char **strings, int numStrings) {
    if (numStrings <= 0) {
        printf("###\n"); // No common alphabets (no input strings)
        return;
    }

    char commonAlphabets[26];
    int commonCount = 0;

    char *firstString = strings[0];

    for (int i = 0; firstString[i] != '\0'; i++) {
        char c = firstString[i];
        int isCommon = 1;

        for (int j = 1; j < numStrings; j++) {
            char *currentString = strings[j];
            int found = 0;
            for (int k = 0; currentString[k] != '\0'; k++) {
                if (currentString[k] == c) {
                    found = 1;
                    break;
                }
            }
            if (!found) {
                isCommon = 0;
                break;
            }
        }

        if (isCommon) {
            commonAlphabets[commonCount] = c;
            commonCount++;
        }
    }

    if (commonCount == 0) {
        printf("###\n"); 
        return;
    }

    
    for (int i = 0; i < commonCount - 1; i++) {
        for (int j = i + 1; j < commonCount; j++) {
            if (commonAlphabets[i] > commonAlphabets[j]) {
                // Bubble sort
                char temp = commonAlphabets[i];
                commonAlphabets[i] = commonAlphabets[j];
                commonAlphabets[j] = temp;
            }
        }
    }

    for (int i = 0; i < commonCount; i++) {
        printf("%c", commonAlphabets[i]);
    }
    printf("\n");
}

int main() {
    int numStrings;

    scanf("%d", &numStrings);
    getchar(); // Consume the newline character

    char **strings = (char **)malloc(numStrings * sizeof(char *));
    for (int i = 0; i < numStrings; i++) {
        strings[i] = (char *)malloc(10001 * sizeof(char)); // Maximum string length is 10,000
        scanf("%s", strings[i]);
    }

    findCommonAlphabets(strings, numStrings);

    // Free dynamically allocated memory
    for (int i = 0; i < numStrings; i++) {
        free(strings[i]);
    }
    free(strings);

    return 0;
}
