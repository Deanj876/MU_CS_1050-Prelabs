// Pre Lab 2
#include <stdio.h>

int main(void) {
    /*    Objectives
        • Print the values of A, B, C, and D.
        • Print the value of the sum of B and C.
        • Print the value of the product of A and D.
        • Print the value of the integer quotient of A divided by C.
        • Print the value of the integer remainder of C divided by D.
        • Print the value of the quantity A times C divided by (integer division) the quantity B + D.
    */

    /*  Things to rember about HellBender and the Lab
        In order to compile our code, type the following: compile [filename].c
            • Compile [Filename].c
        Then Execute the [./a.out] command, this will execute our code
            • ./a.out
        Now to Submit the code, type the following command: mucsmake 1050 [Lab name] [Filename].c
            • mucsmake 1050 [LabName] [Filename].c
                • Response sould be green with the details of the lab / submission

        To run code in VS using the WSL (Windows System Linux) terminal, type this:
            • gcc Prelab_2.c -o Prelab_2
            • ./Prelab_2
    */

    int integer1;
    int integer2;
    int integer3;
    int integer4;
    int sum; //don't really need to make another variable, just felt like it :)

    // Printf statment to ask the input from the user.
    printf("Enter 4 integers (A,B,C,D) separated by spaces: ");
    // scanf statment to take and store the input's from the user.
    scanf("%d %d %d %d", &integer1, &integer2, &integer3, &integer4);

    
    printf("*** Initial values ***\n");
    // Prints the value of A, B, C, and D.
    printf("A=%d\n", integer1);
    printf("B=%d\n", integer2);
    printf("C=%d\n", integer3);
    printf("D=%d\n", integer4);

    // 
    printf("*** Calculated values ***\n");
    // Sum / Addition opperator, adding B and C
    sum = integer2 + integer3;
    printf("The sum of B and C = %d\n", sum);
    // Multiplication opperator, multiplying A and D
    printf("The product of A and D = %d\n", integer1 * integer4);
    // Division opperator, dividing A by C
    printf("The integer quotient of A divided by C = %d\n", integer1 / integer3);
    // Modulus opperator, finding the remainder of C divided by D
    printf("The integer remainder of C divided by D = %d\n", integer3 % integer4);
    // Division opperator, dividing the product of A and C by the sum of B and D
    printf("The product of A and C divided by the quantity sum of B and D = %d\n", (integer1 * integer3) / (integer2 + integer4));

    
    return 0;
}
