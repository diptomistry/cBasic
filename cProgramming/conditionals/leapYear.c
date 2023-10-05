#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
/*
If a year is divisible by 4, it's a leap year.
However, if that year is also divisible by 100, it's not a leap year, unless...
If the year is divisible by 400, then it is a leap year.
*/
