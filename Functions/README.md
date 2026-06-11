7. Functions

# Functions Folder

This folder explains how functions work in C.

## Files in this folder

- `funnction.c` — source code

## Program overview

The program shows two simple functions:

- `add(int a, int b)` — returns the sum of two numbers
- `greet(char name[])` — prints a greeting message

In `main()`, both functions are called to show how code can be organized into reusable blocks.

## What is a function?

A function is a group of instructions that performs a specific task.

Functions help to:

- reuse code
- make programs easier to read
- divide a large problem into smaller parts
- reduce repeated code

## Function parts explained

### 1) Function prototype

Example:

- `int add(int a, int b);`
- `void greet(char name[]);`

A prototype tells the compiler that the function exists before it is used.

### 2) Function call

Example:

- `add(3, 7)`
- `greet("Ravi")`

A function call runs the function.

### 3) Function definition

Example:

- `int add(int a, int b) { return a + b; }`
- `void greet(char name[]) { printf("Hello, %s!\n", name); }`

The definition contains the actual code of the function.

## Concepts learned

- function declaration
- function definition
- function call
- parameters and arguments
- return value
- `void` function

## Important notes

- `add()` returns an `int`, so it uses `return a + b;`
- `greet()` uses `void`, so it does not return anything
- arrays like `char name[]` can be passed to functions

## How to compile and run

From inside the `Functions` folder:

```bash
gcc funnction.c -o funnction
./funnction
```

## Why this program matters

Functions are one of the most important parts of C programming. They make code reusable, organized, and easier to maintain.

## Next step

After learning functions, practice:

- input and output
- operators
- conditions
- loops
- arrays
