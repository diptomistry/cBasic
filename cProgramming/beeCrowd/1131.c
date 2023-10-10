#include <stdio.h>

int main() {
    int a, b, c = 0, d = 0, e = 0, f,j = 0, k = 0, l = 0;
    //a,b for goals count
    //c:for inter's goal count,d:for Gremio's goal count;e:for match count
    //f for loop check( continue or break)
    //l:The number of victories of Inter;e: The number of victories of Gremio;j:The number of Draws.



    // This is an infinite loop; it will continue until "break" is encountered.
    while (1) {
        // Read the goals scored by Inter and Gremio.
        scanf("%d%d", &a, &b);

        // Check the outcome of the match and update statistics.
        if (a > b) l++;  // Inter wins
        if (a < b) k++;  // Gremio wins
        if (a == b) j++; // Draw

        c += a; // Total goals scored by Inter
        d += b; // Total goals scored by Gremio
        e++;    // Total number of matches played

        // Prompt for another match or exit.
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &f);

        if (f == 1)
            continue; // Continue the loop for another match.
        if (f == 2)
            break;    // Exit the loop and end the program.
    }

    // Print the final statistics.
    printf("%d grenais\n", e);        // Total matches played
    printf("Inter:%d\n", l);          // Inter wins
    printf("Gremio:%d\n", k);         // Gremio wins
    printf("Empates:%d\n", j);        // Draws

    // Determine the overall winner or if there was no winner.
    if (l > k)
        printf("Inter venceu mais\n");
    if (l < k)
        printf("Gremio venceu mais\n");
    if (k == l)
        printf("Nao houve vencedor\n");

    return 0;
}