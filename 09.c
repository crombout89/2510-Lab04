/* Task 9: Write a function which takes in a two-dimensional int array (with size of n-by-10)
   and an integer n for the row number, to find and return the minimum value in the array [Hint: column number is 10]
   Prototype: int minimum (const int data [][10], const size_t n); */

#include <stdio.h>

int minimum(const int data[][10], const size_t n) {
    int minValue = data[0][0];

    for (size_t indexRow = 0; indexRow < n; indexRow++) {
        for (size_t indexCol = 0; indexCol < 10; indexCol++) {
            if (data[indexRow][indexCol] < minValue) {
                minValue = data[indexRow][indexCol];
            }
        }
    }
    return minValue;
}

int main() {
    // Hard-coded 2D array and number of rows
    const size_t n = 3; // Number of rows
    const int data[3][10] = {
        {5, 6, 7, 8, 9, 10, 11, 12, 13, 14},
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
        {-5, -6, -7, -8, -9, -10, -11, -12, -13, -14}
    };

    // Call the minimum function to find the smallest value in the array
    int result = minimum(data, n);

    // Print the result
    printf("The smallest value in the array is: %d\n", result);

    return 0;
}