# Array Operations in C++

This repository contains a collection of C++ programs demonstrating fundamental array operations. Each program focuses on a specific task, providing a clear and concise example of how to work with arrays in C++.

## Programs Included

* **Find Smallest Number:**
    * The initial commented-out code snippet illustrates a basic approach to finding the smallest element in an array by iterating through it and keeping track of the minimum value encountered.
    * The active code enhances this by also finding the largest element in the same iteration, showcasing efficiency. It initializes `smallest` with the maximum possible integer value (`__INT_MAX__`) and `largest` with the minimum possible 8-bit integer value (`INT8_MIN`) to ensure correct comparison.
    * It also demonstrates the use of the `min()` and `max()` functions for a more concise way to find the smallest and largest elements.

* **Pair Sum Equal to 10:**
    * This program finds all pairs of elements in a given array whose sum is equal to 10. It uses nested loops to compare each element with every other element.
    * An alternative, more efficient approach using an `unordered_map` is also provided (commented out). This method iterates through the array once, checking if the "complement" (the number needed to reach the target sum) has been seen before. This reduces the time complexity from $O(n^2)$ to $O(n)$ on average.

* **Addition of Numbers of Digits:**
    * This program takes an integer (e.g., 1234) and calculates the sum of the digits of the number itself, and then iteratively removes the most significant digit and repeats the process, accumulating the sums.
    * Two different implementations are shown, both achieving the same result through slightly different logic in removing the most significant digit.

* **Subarray Problems:**
    * **Generating All Subarrays:** This program demonstrates how to generate and print all possible contiguous subarrays of a given array. It uses three nested loops to define the start and end points of each subarray and then iterate through the elements within that subarray.
    * **Subarray with Sum 0:** This program extends the previous concept to find and print all subarrays whose elements sum up to zero. It calculates the sum of each subarray and checks if it equals 0.
    * A slightly modified version is also included, which prints "Subarray with sum 0:" followed by the elements of the subarray when a zero-sum subarray is found.

## How to Use

1.  Clone this repository to your local machine:
    ```bash
    git clone <repository_url>
    ```
2.  Navigate to the directory containing the C++ files.
3.  Compile and run the desired program using a C++ compiler (like g++):
    ```bash
    g++ <program_name>.cpp -o <executable_name>
    ./<executable_name>
    ```
    For example, to compile and run the smallest/largest number program:
    ```bash
    g++ array_operations.cpp -o array_operations
    ./array_operations
    ```
    (Note: You might need to adjust the compilation command depending on which specific section of the `array_operations.cpp` file you want to run by uncommenting the `main` function of that section).

## Contributions

Feel free to contribute to this repository by adding more array-related programs or improving the existing ones. You can submit pull requests with your changes.

## Let's Connect!

If you have any questions or suggestions, feel free to reach out! Let's explore the fascinating world of arrays together.
