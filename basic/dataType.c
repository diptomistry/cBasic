#include <stdio.h>


int main() {
    
    // Integer
    int age = 25;//range:-10^9 to 10^9
    printf("Age: %d\n", age);

    // Floating-point
    float pi = 3.14159;// 6-7 decimal digits
    printf("Pi: %f\n", pi);
    /*
    float: float is a single-precision floating-point type. It typically uses 32 bits of memory 
    and provides a lower precision and a smaller range compared to double. 
    It's suitable for applications where precision is not critical, or memory usage is a concern. 
    A float can represent numbers with about 7 decimal digits of precision.
    */

    // Double-precision
    double price = 19.99;// 15 decimal digits
    printf("Price: %lf\n", price);
    /*
    double: double is a double-precision floating-point type.
     It usually uses 64 bits of memory, which allows it to offer higher precision 
     and a broader range compared to float. A double can represent numbers with about 
     15 decimal digits of precision, making it suitable for applications where accuracy is important.
    */

    // Character
    char grade = 'A';
    printf("Grade: %c\n", grade);
    //String
    char name[] = "Hello, World!";//C uses arrays of characters to represent strings
    printf("Name: %s\n", name);

    float floatValue = 1234567.1234567;
    double doubleValue = 1234567.1234567;

    printf("floatValue: %.10f\n", floatValue);
    printf("doubleValue: %.10lf\n", doubleValue);

    // Boolean
    _Bool isTrue = 1; // true
    _Bool isFalse = 0; // false
    printf("Is True: %d\n", isTrue);
    printf("Is False: %d\n", isFalse);

                   
}
