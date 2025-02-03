/* Task 8: Write a function which takes in an int array and the length of it, along with two
other integers val_1 and val_2, finds and returns how many numbers in the array is between val_1 and val_2, inclusively.
[Hint: to determine how many numbers are val_1 ≤ number ≤ val_2]
Prototype: size_t in_between (const int data[],  size_t length,  int val_1,  int val_2);
 */

#include <stdio.h>

size_t in_between(const int data[], size_t length, int val_1, int val_2) {
    size_t count = 0;

    if (val_1 > val_2) {
        int temp = val_1;
        val_1 = val_2;
        val_2 = temp;
    }
    for (size_t index = 0; index < length; index++) {
        if (data[index] >= val_1 && data[index] <= val_2) {
            count++;
        }
    }
    return count;
}

int main() {
    size_t length;

    // Ask the user for the size of the array
    printf("Enter the number of elements in the array:\n");
    scanf("%llu", &length);

    int data[length]; // Declare the array with the given size

    // Ask the user to input the elements of the array
    printf("Enter %llu elements:\n", length);
    for (size_t i = 0; i < length; i++) {
        scanf("%d", &data[i]);
    }

    int val_1, val_2;

    // Ask the user for the range values
    printf("Enter two integers for the range (val_1 and val_2): ");
    scanf("%d %d", &val_1, &val_2);

    // Call the in_between function to count the numbers in the range
    size_t result = in_between(data, length, val_1, val_2);

    // Print the result
    printf("The number of elements between %d and %d (inclusive) is: %llu\n", val_1, val_2, result);

    return 0;
}