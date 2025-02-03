/* Task 7: Write a function which takes in an int array and the length of it, finds and
returns one number from the array which has the biggest absolute value
Prototype: int max_abs (const int data[], size_t length); */

#include <stdio.h>
#include <stdlib.h>

int max_abs(const int data[], size_t length) {
   int maxValue = data[0];
   for (size_t index = 1; index < length; index++) {
       if (abs(data[index]) > abs(maxValue))
           maxValue = data[index];
   }
   return maxValue;
}

int main() {
    size_t length;

    // Ask the user for the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%llu", &length);

    int data[length]; // Declare the array with the given size

    // Ask the user to input the elements of the array
    printf("Enter %llu elements:\n", length);
    for (size_t i = 0; i < length; i++) {
        scanf("%d", &data[i]);
    }

    // Call the max_abs function to find the number with the largest absolute value
    int result = max_abs(data, length);

    // Print the result
    printf("The largest absolute value is: %d\n", abs(result));

    return 0;
}