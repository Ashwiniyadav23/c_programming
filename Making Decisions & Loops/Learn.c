#include <stdio.h>

int main() {
    // if / else if / else
    int score = 85;
    if      (score >= 90) printf("A\n");
    else if (score >= 80) printf("B\n");  // runs this
    else                  printf("C\n");

    // for loop
    for (int i = 0; i < 5; i++) {
        printf("%d ", i);  // 0 1 2 3 4
    }
    printf("\n");

    // while loop
    int n = 1;
    while (n < 32) n *= 2;   // n = 32
    printf("%d\n", n);

    // do-while (runs body at least once)
    int x = 0;
    do {
        printf("x = %d\n", x);
        x++;
    } while (x < 3);

    // switch
    char grade = 'B';
    switch (grade) {
        case 'A': printf("Excellent\n"); break;
        case 'B': printf("Good\n");      break;  // runs
        default:  printf("OK\n");
    }

    return 0;
}