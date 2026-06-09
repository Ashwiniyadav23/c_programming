# Basic Folder

This folder contains the simplest possible C program. It is meant to help beginners understand the basic structure of a C file and how output works.

## Files in this folder

- `hello.c` — source code
- `hello` — compiled executable

## Program overview

The program prints a greeting message to the screen:

```text
Hello World !
```

This is the classic first program in almost every programming language.

## Code explanation

### 1) `#include <stdio.h>`

This line includes the standard input/output library.

It is needed because the program uses `printf()`.

### 2) `int main()`

`main()` is the starting point of every C program.

When you run the program, execution begins here.

### 3) `printf("Hello World !\n");`

This prints the text on the screen.

- `printf()` is used for output
- `\n` moves the cursor to the next line after printing

### 4) `return 0;`

This tells the operating system that the program finished successfully.

## Concepts learned

- basic program structure
- header files
- the `main()` function
- screen output with `printf()`
- comments
- success return code

## How to compile and run

From inside the `Basic` folder:

```bash
gcc hello.c -o hello
./hello
```

## Why this program matters

This program is important because it teaches the minimum structure required for any C program. Once this is understood, you can move on to variables, data types, operators, conditions, loops, and functions.


