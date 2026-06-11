# Variables and Data Types in C

## Overview

Variables are used to store data in memory. Every variable has a specific data type that determines:

* What kind of value it can store
* How much memory it uses
* The range of values it can hold

Understanding variables and data types is one of the most important fundamentals of C programming.

---

## Example Program

```c
#include <stdio.h>

int main() {
    int    age    = 25;       // whole number,     4 bytes
    float  price  = 9.99f;    // decimal,          4 bytes
    double pi     = 3.14159;  // precise decimal,  8 bytes
    char   grade  = 'A';      // single character, 1 byte

    printf("Age:   %d\n",   age);
    printf("Price: %.2f\n", price);
    printf("Pi:    %lf\n",  pi);
    printf("Grade: %c\n",   grade);

    return 0;
}
```

---

# What is a Variable?

A variable is a named memory location used to store data.

### Syntax

```c
data_type variable_name = value;
```

### Example

```c
int age = 25;
```

Here:

* `int` → Data type
* `age` → Variable name
* `25` → Stored value

---

# Common Data Types in C

| Data Type | Description                    | Example            |
| --------- | ------------------------------ | ------------------ |
| `int`     | Stores whole numbers           | `25`, `100`, `-10` |
| `float`   | Stores decimal numbers         | `9.99`, `3.5`      |
| `double`  | Stores high-precision decimals | `3.14159`          |
| `char`    | Stores a single character      | `'A'`, `'B'`       |

---

# Explanation of Variables Used

## Integer (`int`)

```c
int age = 25;
```

* Stores whole numbers
* Usually occupies 4 bytes

Output:

```text
Age: 25
```

---

## Float (`float`)

```c
float price = 9.99f;
```

* Stores decimal values
* Usually occupies 4 bytes
* `f` indicates a float literal

Output:

```text
Price: 9.99
```

---

## Double (`double`)

```c
double pi = 3.14159;
```

* Stores decimal values with greater precision
* Usually occupies 8 bytes

Output:

```text
Pi: 3.141590
```

---

## Character (`char`)

```c
char grade = 'A';
```

* Stores a single character
* Usually occupies 1 byte

Output:

```text
Grade: A
```

---

# Format Specifiers

Format specifiers tell `printf()` how to display different data types.

| Data Type | Format Specifier |
| --------- | ---------------- |
| `int`     | `%d`             |
| `float`   | `%f`             |
| `double`  | `%lf`            |
| `char`    | `%c`             |

### Examples

```c
printf("%d", age);
printf("%f", price);
printf("%lf", pi);
printf("%c", grade);
```

---

# Program Output

```text
Age:   25
Price: 9.99
Pi:    3.141590
Grade: A
```

---

# Memory Usage

| Data Type | Typical Size |
| --------- | ------------ |
| `char`    | 1 byte       |
| `int`     | 4 bytes      |
| `float`   | 4 bytes      |
| `double`  | 8 bytes      |

> Note: Actual sizes may vary depending on the compiler and system architecture.

