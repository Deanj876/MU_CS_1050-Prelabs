#include <stdio.h>

int main(void){
    int i = 2;
    // While Loop from every even number starting at 2 and going up to 300, continuous till i's value is greater than or equal to 300
    while(i <= 300){
        // If, Else If, and Else statements to check the divisibility of i 3 or 5 with a remainder of 0
        if(i % 3 == 0 && i % 5 == 0){
            printf("TrumanTiger%d", i);
        }
        // Else If statements to check if i is divisible by 3 and have a remainder of 0
        else if(i % 3 == 0){
            printf("Truman%d", i);
        }
        // Else If statements to check if i is divisible by 5 and have a remainder of 5
        else if(i % 5 == 0){
            printf("Tiger%d", i);
        }
        else{
            // If i is not divisible by either 3 or 5, print the value of i
            printf("%d", i);
        }
        if(i != 300){
            // Print a comma after each thing printed except for the last one
            printf(", ");
        }
        // Increment i by 2 after each iteration
        i += 2; 
    }
    // Print a new line at the end of the output
    printf("\n");
    return 0;
}

/*
You are to write a program that goes through all even integers starting at 2 and going
through 300. As you move through these integers:
    • If the current integer is divisible by 5, print “Truman”.
    • If the current integer is divisible by 3, print “Tiger”.
    • If the current integer is divisible by both 3 and 5, print “TrumanTiger”.
    • Once you have printed the appropriate word(s) or nothing, print the integer itself
    followed by a space.
General Hint: Submit early and submit often. Solve part of the problem (like printing
“Truman” for multiples of 5) and submit your working code. Then add features one by one,
testing each step.
*/