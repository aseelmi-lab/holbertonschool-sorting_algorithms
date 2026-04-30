Markdown
# Sorting Algorithms & Big O

## Description
This project is a collection of various sorting algorithms implemented in C. As part of the software engineering curriculum at Holberton School, these implementations focus on understanding the logic behind different sorting techniques and analyzing their time complexity using Big O notation.

## Requirements
*   All files are compiled on **Ubuntu 20.04 LTS**.
*   Allowed editors: `vi`, `vim`, `emacs`.
*   All C files follow the **Betty style** guidelines.
*   No global variables are used.
*   The prototypes of all functions are included in the `sort.h` header file.

## Supported Sorting Algorithms
Currently, this repository includes the following sorting techniques:

*   **Bubble Sort:** A simple comparison-based algorithm.
*   **Insertion Sort:** Builds the final sorted list one item at a time.
*   **Selection Sort:** Repeatedly finds the minimum element and moves it to the sorted part.
*   **Quick Sort:** A divide-and-conquer algorithm that uses a pivot element to partition the array.

## Installation
Clone the repository to your local machine:
```bash
git clone [https://github.com/aseelmi-lab/holbertonschool-sorting_algorithms.git](https://github.com/aseelmi-lab/holbertonschool-sorting_algorithms.git)
cd holbertonschool-sorting_algorithms
Testing
To test the algorithms, compile the files using the following command:

Bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o sort
Files
sort.h: The header file containing all structure definitions and prototypes.

0-bubble_sort.c: Implementation of the Bubble Sort algorithm.

1-insertion_sort_list.c: Implementation of the Insertion Sort for doubly linked lists.

0-O & 1-O: Files containing the time complexity for each algorithm.

Authors
Created by: Aseel Alzhrani
