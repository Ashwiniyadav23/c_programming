# Input and Output Folder

This folder explains how to take input from the user and display output in C.

## Files in this folder

- `practice.c` — source code

## Program overview

The program asks the user for:

- name
- age
- height

Then it prints the values back on the screen.

This folder is useful because almost every real program needs user input and output.

## Input and output functions used

### `printf()`

Used to display text and values on the screen.

Example:

- `printf("Enter your name: ");`
- `printf("Age: %d, Height: %.2fm\n", age, height);`

### `scanf()`

Used to read input from the user.

Examples:

- `scanf("%49s", name);`
- `scanf("%d", &age);`
- `scanf("%f", &height);`

## Code explanation

### `char name[50];`

Creates a character array to store the user's name.

### `scanf("%49s", name);`

Reads a string into `name`.

Important note:

- `%49s` limits input to 49 characters, leaving space for the null terminator
- no `&` is needed for arrays

### `scanf("%d", &age);`

Reads an integer into `age`.

Important note:

- `&` gives the memory address of the variable to `scanf()`

### `scanf("%f", &height);`

Reads a float value into `height`.

## Format specifiers used

- `%s` for string
- `%d` for integer
- `%f` for float
- `%.2f` for float with 2 digits after the decimal point

## Concepts learned

- input from user
- output on screen
- strings in C
- integers and floats with `scanf()`
- format specifiers
- address operator `&`

## How to compile and run

From inside the `Input&Output ` folder:

```bash
gcc practice.c -o practice
./practice
```

## Why this program matters

Input and output are the basic way programs interact with users.

After this folder, you can move on to:

- variables and data types
- operators
- conditions
- loops
