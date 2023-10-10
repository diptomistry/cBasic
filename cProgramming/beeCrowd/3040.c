#include <stdio.h>

int main() { 

    
    int n, h, d, g; //height,diameter,brances

    scanf("%d", &n); // Read the number of test cases.

    while (n--) { // Start a loop that iterates for each test case.
        scanf("%d %d %d", &h, &d, &g); // Read the tree's height, diameter, and branches.

        if (h >= 200 && h <= 300 && d >= 50 && g >= 150) { // Check if all conditions are met.
            printf("Sim\n"); // Print "Sim" if all conditions are met.
        } else {
            printf("Nao\n"); // Print "Nao" if any condition is not met.
        }
    }

    return 0; // Return 0 to indicate successful program execution.(not necessary)
}