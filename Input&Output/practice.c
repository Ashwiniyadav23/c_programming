#include <stdio.h>

int main() {
    int age;
    float height;
    char name[50];

    printf("Enter your name: ");
    scanf("%49s", name);      // read string (no & for arrays)

    printf("Enter age: ");
    scanf("%d", &age);        // & gives scanf the address

    printf("Enter height (m): ");
    scanf("%f", &height);

    printf("\nHello %s!\n", name);
    printf("Age: %d, Height: %.2fm\n", age, height);

    return 0;
}