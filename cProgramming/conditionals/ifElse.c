#include <stdio.h>

int main() {
    int num = 5;

    if (num > 10) {
        printf("The number is greater than 10.\n");
    } else if (num > 5) {
        printf("The number is greater than 5 but not greater than 10.\n");
    } else {
        printf("The number is not greater than 5.\n");
    }

    return 0;
}
