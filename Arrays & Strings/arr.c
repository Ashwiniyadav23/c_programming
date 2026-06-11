#include <stdio.h>
#include <string.h>

int main (){
    //Integer array
    int nums [5] = {1, 2, 3, 4, 5};
    printf("%d\n", nums[2]);   // 30    (zero indexing)

    //loop through array
    for (int i = 0; i<5; i++){
        printf("%d ", nums[i]);
    }
    printf("\n");

    // String — array of chars ending in '\0'
    char name [20] = "Ashwini";
    printf("%s\n", name);      // Ashwini
    printf("%c\n", name[1]);   // s
    printf("%lu\n", strlen(name));  // 6 (length of string without null terminator)

    // String functions (from string.h)
    char str1[20];
    strcpy(str1,name);  // copy name into str1
    strcat(str1, " Yadav ");  // concatenate " Ash" to str1
    printf("%s\n", str1);     // Ashwini Yadav


    return 0;



}
