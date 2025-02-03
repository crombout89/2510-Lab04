/* Task 10: Write a function which takes in a two-dimensional int array (with size of n-by-7)
    and integer n for the row number, to find and return how many even numbers are in the array [Hint: column number is 7]
    Prototype:  size_t count_even (const int data [][7], const size_t n); */

#include <stdio.h>

size_t count_even(const int data[][7], const size_t n) {
    size_t count = 0;

    for (size_t indexRow = 0; indexRow < n; indexRow++) {
        for (size_t indexCol = 0; indexCol < 7; indexCol++) {
            if (data[indexRow][indexCol] % 2 == 0) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    // Hard-coded 2D array and number of rows
    const size_t n = 3; // Number of rows
    const int data[3][7] = {
        {2, 3, 4, 5, 6, 7, 8},
        {10, 11, 12, 13, 14, 15, 16},
        {18, 19, 20, 21, 22, 23, 24}
    };

    // Call the count_even function to find the number of even numbers in the array
    size_t result = count_even(data, n);

    // Print the result
    printf("The number of even numbers in the array is: %zu\n", result);

    return 0;
}