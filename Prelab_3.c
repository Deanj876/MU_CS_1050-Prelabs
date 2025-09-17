/*
Concepts to Practice
    • if, if/else
    • while
    • increment/decrement operators

Description
    For the prelab assignment, you are to write a program that goes through all integers from 1
    through 50 in order from the least value (1) through the greatest value (50).
    As you move through these integers:
        • If the current integer is divisible by 3, print “Fizz”.
        • If the current integer is divisible by 5, print “Buzz”.
        • If the current integer is divisible by both 3 and 5, print “Fizz Buzz”.
        • If the current integer is divisible by neither 3 nor 5, print the integer.


You should print a comma after each thing you print (whether “Fizz”, “Buzz”, “Fizz Buzz”,
or a number), except for the last one. If you have trouble doing all but the last one, it is OK to
print a comma after the last one too, but. . . cooler if you don’t!

BTW, this program is sort of famous and is usually called “FizzBuzz.” You can certainly look
up how to do this online, but. . . you will be better off doing it yourself so you will be ready for
lab!

Sample Output
1, 2, Fizz, 4, Buzz, Fizz, 7, 8, Fizz, Buzz, 11, Fizz, 13, 14, Fizz
Buzz, 16, 17, Fizz, 19, Buzz, Fizz, 22, 23, Fizz, Buzz, 26, Fizz, 28,
29, Fizz Buzz, 31, 32, Fizz, 34, Buzz, Fizz, 37, 38, Fizz, Buzz, 41,
Fizz, 43, 44, Fizz Buzz, 46, 47, Fizz, 49, Buzz

To run code in VS using the WSL (Windows System Linux) terminal, type this:
            • gcc Prelab_2.c -o Prelab_2
            • ./Prelab_2
*/

#include <stdio.h>

int main(void) {
    int i = 1;
    // While Loop from 1 to 50, continuous till i's value is greater than 50
    while(i <= 50){
        // If, Else If, and Else statements to check the divisibility of i
        if(i % 3 == 0 && i % 5 == 0){
            printf("Fizz Buzz");
        }
        // Else If statements to check if i is divisible by 3 or 5
        else if(i % 3 == 0){
            printf("Fizz");
        }
        // Else If statements to check if i is divisible by 5
        else if(i % 5 == 0){
            printf("Buzz");
        }
        else{
            // If i is not divisible by either 3 or 5, print the value of i
            printf("%d", i);
        }
        if(i != 50){
            // Print a comma after each thing printed except for the last one
            printf(", ");
        }
        // Increment i by 1 after each iteration
        i++;
    }
    // Print a new line at the end of the output
    printf("\n");
    return 0;
}