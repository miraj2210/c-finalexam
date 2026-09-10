# Sum of Two 1D Arrays Using Pointer in C

## 📌 Description

This C program takes **2 elements from two 1D arrays** and finds their sum using **pointers**.

The result is stored in a third array called `sum`.

## ▶️ Example

### Input

```text
Enter 2 elements of first array:
10 20

Enter 2 elements of second array:
5 15
```

### Output

```text
Sum of two arrays:
15 35
```

## 🔍 How It Works

1. Two arrays `a` and `b` are created with 2 elements each.
2. The user enters values for both arrays.
3. Pointer arithmetic is used to access array elements.
4. Corresponding elements are added.
5. The result is stored in the `sum` array.
6. The final sum is displayed.

## 📚 Pointer Concept

The expression:

```c
*(a + i)
```

accesses the `i`th element of array `a`.

Similarly:

```c
*(b + i)
```

accesses the `i`th element of array `b`.

The addition is performed using:

```c
*(sum + i) = *(a + i) + *(b + i);
```

## 📏 Array Size

The program uses a **fixed array size of 2**.

```c
int a[2], b[2], sum[2];
```

* `a[2]` → First array with 2 elements
* `b[2]` → Second array with 2 elements
* `sum[2]` → Array to store the sum
* The program can process **exactly 2 elements** in each array.

## 🎯 Concepts Used

* 1D Arrays
* Pointers
* Pointer Arithmetic
* `for` Loop
* User Input
* Array Addition
