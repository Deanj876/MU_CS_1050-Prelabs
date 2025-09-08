#include <stdio.h>
/*
    1. Prints a prompt requesting an integer and reads it into a variable.
    2. Prompts the user to enter a second integer and reads it into another variable.
    3. Prints the values of both variables.
    4. Prints the product of the two variables.
    5. Prints the result of the first variable divided by the second.
    6. Prints the result of (Y − 2) × X, where X is the first variable and Y is the second.
    7. Prints the original variables again to confirm they did not change.

    ==Example Output==
    Please input an integer: 3
    Please input another integer: 4
    Your first integer was 3 and your second was 4
    Multiplying them = 12
    Dividing the first by the second = 0
    The crazy equation value = 6
    Your first integer was 3 and your second was 4

*/

int main(void){
    int integer1;
    int integer2;

    printf("Please input an integer: ");
    scanf("%d", &integer1);
    printf("Please input another integer: ");
    scanf("%d", &integer2);
    printf("Your first integer was %d and your second was %d\n", integer1, integer2);
    printf("Multiplying them = %d\n", (integer1 * integer2));
    printf("Dividing the first by the second = %d\n", (integer1 / integer2));
    printf("The crazy equation value = %d\n", ((integer2 - 2) * integer1));
    printf("Your first integer was %d and your second was %d\n", integer1, integer2);
}