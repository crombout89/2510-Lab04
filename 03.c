/* Task 3: Write a program which reads in a string from the user, and then prints a
 * version without the first and last char, so for "Hello" prints "ell".
 * The string length will be at least 2.
 * input: Hello → print: ell
 * input: salute → print: alut
 * input: coding → print: odin
 */

#include <stdio.h>

int main() {
    char input[20];
    printf("Enter a string value:\n");
    scanf("%19s", input);

    size_t length = 0;
    while (input[length] != '\0') {
        length++;
    }

    printf("Truncated result: ");
    for (size_t index = 1; index < (length - 1); index++) {
        printf("%c", input[index]);
    }
    return 0;
}