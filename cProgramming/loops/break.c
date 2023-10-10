#include <stdio.h>

int main() {
    int i = 1;
    while (i <= 10) {
        if (i == 5) {
            printf("Found 5. Exiting loop.\n");
            break; // Exit the loop when i is 5
            //return 0;
        }
        printf("%d ", i);
        i++;
    }

    return 0;
}
