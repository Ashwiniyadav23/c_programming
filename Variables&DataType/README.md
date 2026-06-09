# Variables and Data Types Folder

This folder explains how to declare variables and use different data types in C.

## Files in this folder

- `practice.c` — source code
- `practice` — compiled executable

## Program overview

The program declares four variables of different types:

- `int age = 25;`
- `float price = 9.99f;`
- `double pi = 3.14159;`
- `char grade = 'A';`

Then it prints each value using the correct format specifier.

This folder is useful because variables are used to store data in memory.

## Data types explained

### 1) `int`

Used for whole numbers.

Example:

- `25`

Common use cases:

- age
- marks
- counters
- loop variables

---

### 2) `float`

Used for decimal numbers.

Example:

- `9.99`

Important notes:

- it stores decimal values
- it uses less memory than `double`
- the `f` suffix in `9.99f` tells C that the value is a float

---

### 3) `double`

Used for decimal numbers with more precision.

Example:

- `3.14159`

Use `double` when you need more accurate decimal calculations.

---

### 4) `char`

Used for a single character.

Example:

- `'A'`

Important note:

- characters must be written inside single quotes

## Format specifiers used in `printf()`

To print variables correctly, you must use the right format specifier.

- `%d` for `int`
- `%.2f` for `float` with 2 digits after the decimal point
- `%lf` for `double`
- `%c` for `char`

## Code explanation

### `int age = 25;`

Creates an integer variable called `age` and stores `25` in it.

### `float price = 9.99f;`

Creates a floating-point variable called `price`.

### `double pi = 3.14159;`

Creates a double-precision variable for a more accurate decimal value.

### `char grade = 'A';`

Creates a character variable that stores one letter.

## Concepts learned

- variable declaration
- basic C data types
- decimal and integer values
- character storage
- format specifiers
- printing typed data

## How to compile and run

From inside the `Variables&DataType` folder:

```bash
gcc practice.c -o practice
./practice
```

## Why this program matters

Variables are the foundation of every program. They allow you to store and reuse values in memory.

Once you understand this folder, you are ready to learn:

- input using `scanf()`
- operators
- conditions
- loops
