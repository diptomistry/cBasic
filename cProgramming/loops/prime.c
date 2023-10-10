#include <stdio.h>
#include <stdbool.h>

int main() {
    int start, end;

    printf("Enter the range (start and end): ");
    scanf("%d %d", &start, &end);

    printf("Prime numbers in the range %d to %d are:\n", start, end);

    for (int num = start; num <= end; num++) {
        if (num <= 1)
            continue;

        bool isPrime = true;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            printf("%d ", num);
        }
    }

    printf("\n");

    return 0;
}
