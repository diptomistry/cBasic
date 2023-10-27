#include <stdio.h>

// Function to copy a string (character array)
void copyString(char dest[], const char src[]) {
    int i = 0;
    while (src[i]) {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0'; // Null-terminate the destination string
}

void findCommonAlphabets(char strings[][100], int numStrings) {
    if (numStrings <= 0) {
        printf("No common alphabets (no input strings)\n");
        return;
    }

    char commonAlphabets[26];
    int commonCount = 0;

    char firstString[100]; // Declare firstString as a character array
    copyString(firstString, strings[0]); // Copy the contents of strings[0] to firstString
    //alternative:  char *firstString = strings[0];

    int i = 0;

    while (firstString[i]) {
        char c = firstString[i];
        int isCommon = 1;

        for (int j = 1; j < numStrings; j++) {
            int found = 0;
            int k = 0;
            while (strings[j][k]) {
                if (strings[j][k] == c) {
                    found = 1;
                    break;
                }
                k++;
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
        i++;
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

    char strings[numStrings][100];

    for (int i = 0; i < numStrings; i++) {
        scanf("%s", strings[i]);
    }

    findCommonAlphabets(strings, numStrings);

    return 0;
}
