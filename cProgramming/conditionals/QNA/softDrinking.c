#include <stdio.h>

int main() {
    int n, k, l, c, d, p, nl, np;
    scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);

    int servings = (k * l) / nl; // Number of servings based on lime and salt
    servings = servings < (c * d) ? servings : (c * d); // Minimum servings based on carbonated water and slices
    servings = servings < (p / np) ? servings : (p / np); // Minimum servings based on sugar

    printf("%d\n", servings / n); // Maximum servings per person

    return 0;
}
