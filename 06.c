/* Task 6: Write a function which takes in an int array and the length of it,
   finds and returns the mean of the array
   Prototype: double mean (const int data[], size_t length);
 */

#include <stdio.h>

double mean(const int data[], size_t length) {
    int sum = 0;
    for (size_t index = 0; index < length; index++) {
        sum += data[index];
    }
    return (sum / length) * 1.0;
}

int main() {
    // Example usage
    int array[] = {1, 2, 3, 4, 5};
    size_t length = sizeof(array) / sizeof(array[0]); // Calculate the length of the array

    // Call the mean function and store the result
    double result = mean(array, length);

    // Print the result
    printf("The mean of the array is: %.2f\n", result);

    return 0;
}