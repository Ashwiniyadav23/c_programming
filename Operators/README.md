# Operators Folder

This folder explains operators in C using a simple example program.

## Files in this folder

- `O.c` — source code
- `O` — compiled executable

## Program overview

The program defines two integer variables:

- `a = 10`
- `b = 3`

Then it prints the result of different operator categories.

This folder is useful because operators are the building blocks of calculations, comparisons, and conditions in C.

## Operator categories covered

### 1) Arithmetic operators

These are used for mathematical calculations.

Operators shown in the program:

- `+` addition
- `-` subtraction
- `*` multiplication
- `/` division
- `%` remainder

Example results:

- `10 + 3 = 13`
- `10 - 3 = 7`
- `10 * 3 = 30`
- `10 / 3 = 3`
- `10 % 3 = 1`

#### Important note about division

When both numbers are integers, C performs integer division.

That means the decimal part is removed.

So `10 / 3` becomes `3`, not `3.33`.

---

### 2) Comparison operators

These compare two values and produce a result of:

- `1` for true
- `0` for false

Operators shown:

- `>` greater than
- `<` less than
- `>=` greater than or equal to
- `<=` less than or equal to
- `==` equal to
- `!=` not equal to

These are commonly used in decision-making statements like `if` and loops.

---

### 3) Bitwise operators

These work at the binary level.

Operators shown:

- `&` bitwise AND
- `<<` left shift

Example from the program:

- `10 & 3` gives `2`
- `10 << 1` gives `20`

#### Simple meaning of left shift

Shifting a number left by 1 bit is usually the same as multiplying by 2.

---

### 4) Logical operators

These are used to combine conditions.

Operators shown:

- `&&` logical AND
- `||` logical OR
- `!` logical NOT

These are very important in conditional logic.

Example usage:

- `(a > b) && (b > 0)`
- `(a < b) || (b > 0)`
- `!(a < b)`

---

### 5) Unary operators

These work on a single variable.

Operators shown:

- `-a` negation
- `+a` positive sign
- `!a` logical negation

Example:

- `-10` means the negative form of `10`
- `!a` becomes `0` when `a` is non-zero

---

### 6) Assignment operators

These are used to update the value of a variable.

Operator shown:

- `+=`

Example:

- `a += b` means `a = a + b`

In the program, `a` becomes `13` after adding `b`.

---

### 7) Conditional operator

This is the ternary operator:

```c
condition ? value_if_true : value_if_false
```

In this program, it is used to find the larger value between `a` and `b`.

## Concepts learned

- arithmetic operations
- comparison logic
- bitwise operations
- logical operators
- unary operators
- assignment operators
- conditional operator

## How to compile and run

From inside the `Operators` folder:

```bash
gcc O.c -o O
./O
```

## Why this program matters

Operators are used in almost every C program. Understanding them helps with:

- calculations
- conditions
- loops
- validation
- low-level binary work

## Next step

After this folder, practice:

- `if` and `if-else`
- loops
- arrays
- functions
- pointers
