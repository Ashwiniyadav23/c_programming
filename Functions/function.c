#include <stdio.h>

// Prototype — tells compiler the function exists before main
int  add(int a, int b);
void greet(char name[]);

int main() {
    int result = add(3, 7);
    printf("3 + 7 = %d\n", result);  // 10
    greet("Ravi");
    return 0;
}

int add(int a, int b) {
    return a + b;
}

void greet(char name[]) {
    printf("Hello, %s!\n", name);
    // void = returns nothing
}