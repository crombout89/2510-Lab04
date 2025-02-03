/* Task 4: Write a function (named “nonStart”) which takes in two char arrays, and then prints
their concatenation, except omit the first char of each. The strings will be at least length 1. Eg,

nonStart("Hello", "There") → print: "ellohere"
nonStart("java", "code") → print: "avaode"
nonStart("shotl", "java") → print:"hotlava"
*/

#include <stdio.h>

void nonStart (char string1[], char string2[]) {
    size_t index;

    // String 1
    for (index = 1; string1[index] != 0; index++) {
        printf("%c", string1[index]);
    }
    // String 2
    for (index = 1; string2[index] != 0; index++) {
        printf("%c", string2[index]);
    }
    printf("\n");
}

int main() {
    char string1[] = "Hello";
    char string2[] = "There";
    printf("Input: \"%s\", \"%s\" -> Output: ", string1, string2);
    nonStart(string1, string2);

    char string3[] = "java";
    char string4[] = "code";
    printf("Input: \"%s\", \"%s\" -> Output: ", string3, string4);
    nonStart(string3, string4);

    char string5[] = "shotl";
    char string6[] = "java";
    printf("Input: \"%s\", \"%s\" -> Output: ", string5, string6);
    nonStart(string5, string6);
}