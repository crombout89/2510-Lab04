/* Write a function which takes in an input integer array and the length of the array.
The function is to reverse the array values. Eg, input [1, 2, 3] -> [3, 2, 1]
[Hint: This function should not print, it changes values in the given array.] */

#include <stdio.h>

void reverseIntegers(int input[], size_t length) {
    for (size_t index = 0; index < (length / 2); index++) {
        int temp = input[index];
        input[index] = input[length - 1 - index];
        input[length - 1 - index] = temp;
    }
}

int main() {
    int input1[] = {1, 2, 3};
    size_t length1 = 3;
    reverseIntegers(input1, length1);

    // Print the reversed array to verify
    printf("Reversed array: ");
    for (size_t counter = 0; counter < length1; counter++) {
        printf("%d", input1[counter]);
    }
    printf("\n");

    return 0;
}