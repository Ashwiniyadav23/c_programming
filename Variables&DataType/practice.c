#include <stdio.h>

int main() {
    int    age    = 25;        // whole number, 4 bytes
    float  price  = 9.99f;     // decimal, 4 bytes
    double pi     = 3.14159;  // precise decimal, 8 bytes
    char   grade  = 'A';      // single character, 1 byte

    printf("Age: %d\n", age);
    printf("Price: %.2f\n", price);
    printf("Pi: %lf\n", pi);
    printf("Grade: %c\n", grade);

    return 0;
}