# Making Decisions and Loops Folder

This folder explains decision making and repetition in C.

## Files in this folder

- `condition.c` — `if`, `else if`, and `else`
- `loop.c` — `for`, `while`, and `do-while`
- `switch.c` — `switch` statement

## What this folder covers

This folder combines two important ideas:

- making decisions based on conditions
- repeating work using loops

These are core parts of programming logic.

## 1) Decision making with `if` / `else if` / `else`

### Program idea

The program checks a score and prints a grade-like result.

Example:

- if score is 90 or more, print `A`
- if score is 80 or more, print `B`
- otherwise print `C`

### Concept learned

- conditions
- comparison operators
- branching logic

## 2) Loops

### `for` loop

Used when the number of repetitions is known.

Example:

- print numbers from 0 to 4

### `while` loop

Used when repetition depends on a condition.

Example:

- keep doubling a number until it becomes 32

### `do-while` loop

Similar to `while`, but it runs at least once.

Example:

- multiply a number by 2 until it reaches 32

### Concepts learned

- repeated execution
- loop counters
- condition checking
- `break` style flow understanding

## 3) `switch` statement

The `switch` statement is used when one variable can match multiple fixed values.

Example in this folder:

- if grade is `A`, print `Excellent`
- if grade is `B`, print `Good`
- otherwise print `OK`

### Concept learned

- multi-way selection
- `case`
- `default`
- `break`

## Important notes

- `if` is best for ranges and conditions
- `switch` is best for exact matches
- loops help avoid writing repeated code
- `do-while` always runs at least once

## How to compile and run

Each file is a separate example, so compile them one by one.

### `condition.c`

```bash
gcc condition.c -o condition
./condition
```

### `loop.c`

```bash
gcc loop.c -o loop
./loop
```

### `switch.c`

```bash
gcc switch.c -o switch
./switch
```

## Why this folder matters

Decision making and loops are used in almost every C program. They help programs react to different situations and repeat tasks efficiently.

## Next step

After this folder, practice:

- nested `if`
- nested loops
- `break` and `continue`
- arrays with loops
- functions with conditions
