#include <stdio.h>

int main() {
    int grade;

    printf("Enter your numeric grade (0-100): ");
    scanf("%d", &grade);

    switch (grade / 10) {//case
        case 10://fall-through
        case 9://Since there is no separate case 10: label, it falls through to the next case label, which is case 9:
            printf("Your grade is A+.\n");
            break;
        case 8:
            printf("Your grade is A.\n");
            break;
        case 7:
            printf("Your grade is A-.\n");
            break;
        case 6:
            printf("Your grade is B.\n");
            break;
        case 5:
            printf("Your grade is c.\n");
            break;
        case 4: 
            printf("Your grade is D.\n");
            break;
        default:
            if (grade >= 0 && grade <= 100) {
                printf("Your grade is F.\n");
            } else {
                printf("Invalid input. Please enter a grade between 0 and 100.\n");
            }
            break;
    }

    return 0;
}
