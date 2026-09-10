# First and Last Digit Sum in C

## 📌 Description

This C program accepts a **3-digit positive integer** from the user and finds:

* The **first digit**
* The **last digit**
* The **sum of the first and last digits**

The program uses basic arithmetic operators such as `%` (modulus) and `/` (integer division).

## 🛠️ Technologies Used

* **Language:** C
* **Header File:** `stdio.h`
* **Compiler:** GCC / Turbo C / Any C Compiler

## ⚙️ How It Works

Suppose the user enters:

```text
Enter a 3 digit positive integer: 456
```

### 1. Find the Last Digit

```c
last = num % 10;
```

`456 % 10` gives `6`.

So:

```text
Last digit = 6
```

### 2. Find the First Digit

```c
first = num / 100;
```

Since integer division is used:

`456 / 100` gives `4`.

So:

```text
First digit = 4
```

### 3. Calculate the Sum

```c
sum = first + last;
```

Therefore:

`4 + 6 = 10`

## ▶️ Sample Output

```text
Enter a 3 digit positive integer: 456
First digit = 4
Last digit = 6
Sum of first and last digit = 10
```

## 📚 Concepts Used

* Variables
* `printf()`
* `scanf()`
* Integer division `/`
* Modulus operator `%`
* Arithmetic addition
* Basic input and output

## 🚀 How to Run

1. Save the program as `main.c`.
2. Open it in a C compiler or IDE.
3. Compile the program.
4. Run the program.
5. Enter any 3-digit positive integer.

### Using GCC

```bash
gcc main.c -o main
./main
```
