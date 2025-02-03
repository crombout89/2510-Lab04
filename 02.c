/* Task 2: Write a program which reads in a string name, (e.g., “Tom”), and then prints out a greeting
 * “Hello Tom!” */

#include <stdio.h>

int main() {
    char name[20];
    printf("Enter your name:\n");
    scanf("%19s", name);
    printf("Hello, %s!", name);

    return 0;
}