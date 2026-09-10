# C Program to Check Divisibility by 3 and 5

## 📌 Description

This C program takes an integer from the user and checks whether the number is **divisible by both 3 and 5**.

The program uses a separate function called `checkDivisibility()` to perform the divisibility check.


## 📤 Sample Input

```text
Enter a number: 15
```

## 📥 Sample Output

```text
15 is divisible by both 3 and 5.
```

### Another Example

**Input:**

```text
Enter a number: 20
```

**Output:**

```text
20 is NOT divisible by both 3 and 5.
```

## 🔍 Explanation

### 1. Header File

```c
#include <stdio.h>
```

The `stdio.h` header file is used for input and output functions such as `printf()` and `scanf()`.

### 2. `checkDivisibility()` Function

```c
void checkDivisibility(int num)
```

This function receives an integer and checks whether it is divisible by both 3 and 5.

### 3. Modulus Operator

```c
num % 3 == 0
num % 5 == 0
```

The `%` operator returns the remainder after division.

If the remainder is `0`, the number is completely divisible by that number.

For example:

```text
15 % 3 = 0
15 % 5 = 0
```

Therefore, 15 is divisible by both 3 and 5.

### 4. Logical AND Operator

```c
num % 3 == 0 && num % 5 == 0
```

The `&&` operator means **AND**.

Both conditions must be true for the program to print that the number is divisible by both 3 and 5.

### 5. Taking Input

```c
scanf("%d", &number);
```

This reads an integer entered by the user and stores it in the `number` variable.

### 6. Calling the Function

```c
checkDivisibility(number);
```

The entered number is passed to the `checkDivisibility()` function.

## 🧠 Algorithm

1. Start the program.
2. Declare an integer variable.
3. Ask the user to enter a number.
4. Read the number using `scanf()`.
5. Check whether `number % 3 == 0`.
6. Check whether `number % 5 == 0`.
7. If both conditions are true, display that the number is divisible by both 3 and 5.
8. Otherwise, display that it is not divisible by both.
9. End the program.

## 🧪 Example Numbers

| Number | Divisible by 3 | Divisible by 5 | Result                |
| -----: | :------------: | :------------: | --------------------- |
|     15 |       Yes      |       Yes      | Divisible by both     |
|     30 |       Yes      |       Yes      | Divisible by both     |
|     10 |       No       |       Yes      | Not divisible by both |
|      9 |       Yes      |       No       | Not divisible by both |
|     20 |       No       |       Yes      | Not divisible by both |

## 🧠 Concepts Used

* C Programming
* Functions
* `if-else` statement
* Modulus (`%`) operator
* Logical AND (`&&`) operator
* `scanf()`
* `printf()`
* Integer variables

## ▶️ How to Run

### Step 1: Save the Program

Save the file as:

```text
divisibility.c
```

### Step 2: Compile

Using GCC:

```bash
gcc divisibility.c -o divisibility
```

### Step 3: Run

```bash
./divisibility
```

On Windows:

```bash
divisibility.exe
```

## ⏱️ Time Complexity

**Time Complexity:** `O(1)`

The program performs a fixed number of calculations regardless of the input size.

**Space Complexity:** `O(1)`

Only a fixed amount of memory is used.

## 🎯 Learning Objective

The objective of this program is to understand how to use **functions, the modulus operator, conditional statements, and logical operators** in C programming.
