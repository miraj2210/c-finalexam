# Consonant Count in C

## 📌 Description

This C program counts the **consonants** in a sentence and displays how many times each consonant appears.

It checks both **uppercase and lowercase** letters.

## 🛠️ Concepts Used

* C Programming
* Functions
* `for` loop
* `if` condition
* Character handling
* String handling
* `fgets()`
* ASCII values


## ▶️ Example

### Input

```text
Enter a sentence: Hello World
```

### Output

```text
Consonant count:
d = 1
h = 1
l = 3
r = 1
w = 1
```

## 🔍 How It Works

1. The program takes a sentence using `fgets()`.
2. The `countConsonants()` function checks letters from `a` to `z`.
3. It skips the vowels: `a, e, i, o, u`.
4. For every consonant, it searches the complete sentence.
5. It counts both lowercase and uppercase letters.
6. If a consonant is found, its count is displayed.

## 📚 Note

The expression:

```c
ch - 32
```

converts a lowercase English letter to its corresponding uppercase ASCII character.

For example:

```text
'a' - 32 = 'A'
'b' - 32 = 'B'
```

## 🎯 Purpose

This program is useful for practicing:

* Strings
* Functions
* Nested loops
* Character comparison
* ASCII values
* Counting characters
