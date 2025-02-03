/* Task 1: Write a program which defines an int array with length 10, gives it some initial values,
 * and then prints out the values from the array along with each value’s index. */

#include <stdio.h>

int main() {
    int numbers[10] = {5, 12, 7, 22, 15, 3, 9, 18, 1, 6};
    printf("Index\tValue\n");
    printf("------------------\n");

    for (size_t counter = 0; counter < 10; counter++) {
        printf("%llu\t%d\n", counter, numbers[counter]);
    }
    return 0;
}