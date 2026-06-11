# Operators in C

## Overview

Operators are symbols that perform operations on variables and values. C provides several types of operators such as arithmetic, relational, logical, assignment, and bitwise operators.

---

## Example Program

```c
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
```

---

# Types of Operators Demonstrated

## 1. Arithmetic Operators

Arithmetic operators perform mathematical calculations.

| Operator | Description         | Example |
| -------- | ------------------- | ------- |
| `+`      | Addition            | `a + b` |
| `-`      | Subtraction         | `a - b` |
| `*`      | Multiplication      | `a * b` |
| `/`      | Division            | `a / b` |
| `%`      | Modulus (Remainder) | `a % b` |

### Output

```text
13
3
1
```

### Note

Integer division removes the decimal part:

```c
10 / 3 = 3
```

---

## 2. Relational (Comparison) Operators

Relational operators compare two values and return:

* `1` → True
* `0` → False

| Operator | Meaning               |
| -------- | --------------------- |
| `>`      | Greater than          |
| `<`      | Less than             |
| `>=`     | Greater than or equal |
| `<=`     | Less than or equal    |
| `==`     | Equal to              |
| `!=`     | Not equal to          |

### Output

```text
1
0
```

Explanation:

```c
10 > 3   // True  → 1
10 == 3  // False → 0
```

---

## 3. Bitwise Operators

Bitwise operators work directly on binary representations of numbers.

### Bitwise AND (`&`)

```c
10 = 1010
 3 = 0011
------------
&  = 0010
```

Result:

```text
2
```

### Left Shift (`<<`)

```c
10 << 1
```

Binary:

```text
1010 → 10100
```

Result:

```text
20
```

Shifting left by one position is equivalent to multiplying by 2.

---

## Program Output

```text
13
3
1
1
0
2
20
```
