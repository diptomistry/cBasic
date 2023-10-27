#include <stdio.h>

int stringLength(const char* str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int stringCompare(const char* str1, const char* str2) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0' && str1[i] == str2[i]) {
        i++;
    }
    return str1[i] - str2[i];
}

void findCommonAlphabets(char strings[][10000], int numStrings) {
    if (numStrings <= 0) {
        printf("###\n");
        return;
    }

    char commonAlphabets[26];
    int commonCount = 0;

    char firstString[10000];
    int i = 0;
    while (strings[0][i] != '\0') {
        firstString[i] = strings[0][i];
        i++;
    }
    firstString[i] = '\0';

    for (i = 0; firstString[i] != '\0'; i++) {
        char c = firstString[i];
        int isCommon = 1;

        for (int j = 1; j < numStrings; j++) {
            int found = 0;
            int k = 0;
            while (strings[j][k] != '\0') {
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
    }

    if (commonCount == 0) {
        printf("###\n");
        return;
    }

    for (int i = 0; i < commonCount - 1; i++) {
        for (int j = i + 1; j < commonCount; j++) {
            if (commonAlphabets[i] > commonAlphabets[j]) {
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
    getchar();

    char strings[numStrings][10000];

    for (int i = 0; i < numStrings; i++) {
        scanf("%s", strings[i]);
    }

    findCommonAlphabets(strings, numStrings);

    return 0;
}
