#include <stdio.h>

int main() {
    int a = 10, b = 3;

    // Arithmetic
    printf("%d\n", a + b);   // 13
    printf("%d\n", a / b);   // 3  — integer division truncates!
    printf("%d\n", a % b);   // 1  — remainder

    // Comparison (returns 1 = true, 0 = false)
    printf("%d\n", a > b);   // 1
    printf("%d\n", a == b);  // 0

    // Bitwise
    printf("%d\n", a & b);   // 2  (1010 & 0011 = 0010)
    printf("%d\n", a << 1);  // 20 (shift left = multiply by 2)

    return 0;
}