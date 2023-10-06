#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int absoluteValue = (num >= 0) ? num : -num;

    printf("The absolute value of %d is %d\n", num, absoluteValue);


    int absoluteValue2;

    if (num >= 0) {
        absoluteValue2 = num;
    } else {
        absoluteValue2 = -num;
    }

    printf("The absolute value of %d is %d\n", num, absoluteValue2);


    return 0;
}
