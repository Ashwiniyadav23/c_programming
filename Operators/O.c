#include <stdio.h>

int main() {
    int a = 10, b = 3;

    // Arithmetic
    printf("%d\n", a + b);   // 13
    printf("%d\n", a - b);   // 7
    printf("%d\n", a * b);   // 30
    printf("%d\n", a / b);   // 3  (integer division!)
    printf("%d\n", a % b);   // 1  (remainder)


    // Comparison (returns 1=true or 0=false)
    printf("%d\n", a > b);    // 1
    printf("%d\n", a < b);    // 0
    printf("%d\n", a >= b);   // 1
    printf("%d\n", a <= b);   // 0
    printf("%d\n", a == b);   // 0
    printf("%d\n", a != b);   // 1

    // Bitwise
    printf("%d\n", a & b);    // 2  (1010 & 0011 = 0010)
    printf("%d\n", a << 1);  // 20 (shift left = ×2)

    // Logical
    printf("%d\n", (a > b) && (b > 0)); //  1 (true)
    printf("%d\n", (a < b) || (b > 0)); // 1 (true)
    printf("%d\n", !(a < b));              // 1 (not false = true)

    //Unary
    printf("%d\n", -a);   // -10 (negation)
    printf("%d\n", +a);   // 10 (positive)
    printf("%d\n", !a);   // 0 (logical negation)

   //assignment
    a += b;  // a = a + b (a becomes 13)
    printf("%d\n", a); // 13  
    
    //conditional
    int max = (a > b) ? a : b; // max is 13 
    printf("%d\n", max); // 13

    return 0;
}