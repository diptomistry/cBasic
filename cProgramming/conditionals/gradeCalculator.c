#include <stdio.h>

int main() {
    int grade;
    
    printf("Enter your grade: ");
    scanf("%d", &grade);
    
    if (grade >= 90) {
        printf("A+\n");
    } else if (grade >= 80) {
        printf("A\n");
    } else if (grade >= 70) {
        printf("A-\n");
    } else if (grade >= 60) {
        printf("B\n");
    } else if (grade >= 50) {
        printf("C\n");
    } else if (grade >= 40) {
        printf("D\n");
    } else {
        printf("F\n");
    }

    return 0;
}
