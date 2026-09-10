# C Program to Print Number Pattern Using Nested Loops

## 📌 Description

This C program uses **nested `for` loops** to print a specific number pattern.

The program contains **5 rows** and starts printing numbers from **10**, decreasing the number based on the column position.

## 📤 Output

```text
10  9  8  7  6
    9  8  7  6
       8  7  6
          7  6
             6
```

## 🔍 Explanation

### 1. Header File

```c
#include <stdio.h>
```

The `stdio.h` header file is included to use the `printf()` function.

### 2. Variables

```c
int rows = 5;
int start = 10;
int i, j, num;
```

* `rows` → Defines the number of rows as `5`.
* `start` → Sets the starting number to `10`.
* `i` → Controls the rows.
* `j` → Controls the columns.
* `num` → Stores the number to be printed.

### 3. Outer Loop

```c
for (i = 0; i < rows; i++)
```

The outer loop controls the **5 rows** of the pattern.

### 4. Inner Loop

```c
for (j = 0; j < rows; j++)
```

The inner loop controls the columns in each row.

### 5. Printing Spaces

```c
if (j < i)
{
    printf("   ");
}
```

As the row number increases, spaces are printed before the numbers. This creates the **right-aligned/inverted pattern**.

### 6. Calculating Numbers

```c
num = start - j;
printf("%2d ", num);
```

The number is calculated by subtracting the column number from `start`.

For example:

```text
j = 0 → 10 - 0 = 10
j = 1 → 10 - 1 = 9
j = 2 → 10 - 2 = 8
```

### 7. New Line

```c
printf("\n");
```

After completing each row, the cursor moves to the next line.

## 🧠 Concepts Used

* C Programming
* `for` loop
* Nested `for` loops
* `if-else` condition
* Variables
* Arithmetic operations
* Pattern printing
* `printf()` formatting

## ▶️ How to Run

1. Save the program as `pattern.c`.
2. Compile the program using a C compiler.
3. Run the compiled program.

### Using GCC

```bash
gcc pattern.c -o pattern
./pattern
```

## 🎯 Learning Objective

The main objective of this program is to understand how **nested loops, conditions, spaces, and arithmetic operations** can be combined to create number patterns in C.
