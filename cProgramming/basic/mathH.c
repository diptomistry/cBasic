#include <stdio.h>
#include <math.h>

int main() {
    double x = 4.0;
    double y = 2.0;

    // Basic mathematical operations
    printf("Addition: %.2lf\n", x + y);
    printf("Subtraction: %.2lf\n", x - y);
    printf("Multiplication: %.2lf\n", x * y);
    printf("Division: %.2lf\n", x / y);

    // Exponential and logarithmic functions
    printf("Square root: %.2lf\n", sqrt(x));
    printf("Power: %.2lf\n", pow(x, y));
    printf("Natural logarithm: %.2lf\n", log(x));
    printf("Base-10 logarithm: %.2lf\n", log10(x));

    // Trigonometric functions (in radians)
    double angle = 45.0; // degrees
    double radians = angle * (M_PI / 180.0); // convert to radians

    printf("Sine: %.2lf\n", sin(radians));
    printf("Cosine: %.2lf\n", cos(radians));
    printf("Tangent: %.2lf\n", tan(radians));

    return 0;
}
