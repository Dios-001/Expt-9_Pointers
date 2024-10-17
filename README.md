# Pointer Examples in C++

This repository contains three C++ files that demonstrate basic pointer concepts:
# Algorithms

## Basic Pointer

### Algorithm

1. **Start.**  
2. **Declare Variable:**  
   - Declare a variable `a` and initialize it to `10`.  
3. **Declare Pointer Variable:**  
   - Declare a pointer variable `aptr` of type `int`.  
4. **Assign Address:**  
   - Assign the address of variable `a` to `aptr`.  
5. **Print Memory Address:**  
   - Print the memory address of `a` using `&a`.  
6. **Print Pointer Value:**  
   - Print the value stored in `aptr`, which is the address of `a`.  
7. **Dereference Pointer:**  
   - Dereference `aptr` and print its value (i.e., print the value of `a`).  
8. **End.**

---

## Pointer Incrementation

### Algorithm

1. **Start.**  
2. **Declare Variable:**  
   - Declare an integer variable `a` and initialize it to `10`.  
3. **Declare Pointer:**  
   - Declare a pointer `aptr` of type `int`.  
4. **Assign Address:**  
   - Assign the address of `a` to `aptr`.  
5. **Print Pointer Value:**  
   - Print the value of `aptr`, which is the address of `a`.  
6. **Increment Pointer:**  
   - Increment the pointer by `1`. This moves the pointer to the next memory location that would store an `int`.  
7. **Print New Pointer Value:**  
   - Print the new value of `aptr`.  
8. **End.**

## 1. basic_pointer.cpp

This program reads and prints the value of a pointer. It introduces the concept of pointer variables and how they reference and dereference data.

### Key Features:

- Declares a pointer to an integer.
- Reads and prints the value stored in the pointer and the memory address.

## 2. swap_value.cpp

This file implements a swap function using pointers. It shows how pointers can be used to modify the values of variables directly.

### Key Features:

- Implements a function `swap()` that takes two integer pointers.
- Swaps the values of two integers using pointer dereferencing.

## 3. increment_pointer.cpp

This program demonstrates how to increment an integer pointer. It highlights how pointers can be manipulated to traverse or increment data in memory.

### Key Features:

- Declares an integer pointer and increments its value.
- Shows the impact of pointer arithmetic.
