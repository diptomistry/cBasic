#include <stdio.h>

#define MAX_STRINGS 10000
#define MAX_STRING_LENGTH 10001

void findCommonAlphabets(char strings[MAX_STRINGS][MAX_STRING_LENGTH], int numStrings) {
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
        printf("###\n"); // No common alphabets found
        return;
    }

    // Sort commonAlphabets array in alphabetical order
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

    char strings[MAX_STRINGS][MAX_STRING_LENGTH];

    for (int i = 0; i < numStrings; i++) {
        if (scanf("%s", strings[i]) == EOF) {
            // Handle input error
            printf("Input error.\n");
            return 1;
        }
    }

    findCommonAlphabets(strings, numStrings);

    return 0;
}
