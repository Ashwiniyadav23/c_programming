8. Arrays & Strings

What: An array is a contiguous block of memory holding elements of the same type. A string in C is just a char array that ends with a null terminator '\0'.

Why: Arrays are the basis of all data storage. Understanding that strings are char arrays (not a built-in type) is fundamental to understanding C's memory model.


## Overview

This program demonstrates the basics of **arrays** and **strings** in C programming. It covers:

* Integer arrays
* Array indexing
* Iterating through arrays using loops
* String declaration and access
* String length calculation
* String manipulation using standard library functions


## Concepts Covered

### 1. Integer Array

An array is a collection of elements of the same data type stored in contiguous memory locations.

```c
int nums[5] = {1, 2, 3, 4, 5};
```

Accessing an element using index:

```c
printf("%d\n", nums[2]);
```

Output:

```text
3
```

> Arrays use **zero-based indexing**, so `nums[2]` refers to the third element.

---

### 2. Traversing an Array

A `for` loop can be used to access all elements of an array.

```c
for (int i = 0; i < 5; i++) {
    printf("%d ", nums[i]);
}
```

Output:

```text
1 2 3 4 5
```

---

### 3. Strings in C

A string is an array of characters terminated by the null character `'\0'`.

```c
char name[20] = "Ashwini";
```

Printing the entire string:

```c
printf("%s\n", name);
```

Output:

```text
Ashwini
```

Accessing individual characters:

```c
printf("%c\n", name[1]);
```

Output:

```text
s
```

---

### 4. Finding String Length

The `strlen()` function from `string.h` returns the number of characters in a string.

```c
strlen(name);
```

Output:

```text
7
```

> Note: The null terminator `'\0'` is not counted.

---

### 5. Copying Strings

The `strcpy()` function copies one string into another.

```c
strcpy(str1, name);
```

---

### 6. Concatenating Strings

The `strcat()` function appends one string to another.

```c
strcat(str1, " Yadav");
```

Output:

```text
Ashwini Yadav
```

---

## Program Output

```text
3
1 2 3 4 5
Ashwini
s
7
Ashwini Yadav
```

---

## Header Files Used

### stdio.h

Used for input and output functions.

```c
#include <stdio.h>
```

### string.h

Used for string manipulation functions.

```c
#include <string.h>
```

Functions used:

* `strlen()`
* `strcpy()`
* `strcat()`

