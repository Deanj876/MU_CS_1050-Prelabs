/* You will write a C program that displays a menu and performs different mathematical
operations based on the user’s choice. The menu must use a do-while infinite loop (not
counter-controlled or sentinel-controlled). The menu should include:
    1. Find the factorial of a positive integer. (Use a for or do-while loop)
    2. Print the Fibonacci series up to n terms, without using arrays, or pointers. (Use a for
    or do-while loop)
    3. Calculate the sum of the first n natural numbers.
    4. Test number properties using logical operators.
    5. Exit the program.
The program should use a switch statement to handle the menu choice and a do-while
loop inside each case to perform the requested task.
Requirements
    • Display the menu and prompt the user to enter a choice (1–5).
    • Use a switch statement to process the selected option.
    • Use do-while or for loops where appropriate.
    • Continue displaying the menu until the user selects “Exit”. Use break to exit.
Sample Interaction

Menu:
1. Find Factorial
2. Print Fibonacci Series
3. Sum of Natural Numbers
1
Fall 2025 CMP SC 1050 – Prelab 5
4. Number Properties
5. Exit
Enter your choice: 1
Enter a number: 5
Factorial of 5 is 120

(Option #4) Number Properties with Logical Operators
Ask the user to enter an integer and then evaluate the following:
    • Is the number even AND greater than 10?
    • Is the number divisible by 3 OR 5?
    • Is the number NOT negative?

Task:
    • Use logical operators (&&, ||, !) to implement these checks.
    • Print clear results for each condition.

Example:
Enter your choice: 4
Enter a number: 12
12 is even AND greater than 10: True
12 is divisible by 3 OR 5: True
12 is NOT negative: True

Hints
    • Use a for loop to calculate factorials (e.g., n! = 1 × 2 × . . . × n).
    • Fibonacci starts with 0 and 1; each term is the sum of the previous two. (use for or
do-while)
    • The sum of the first n natural numbers can be calculated with a loop (use for or
do-while) or the formula n(n+1)
2 .
    • For logical operators, remember:
– && (AND) requires both conditions to be true.
– || (OR) requires at least one condition to be true.
– ! (NOT) reverses the truth value */

#include <stdio.h>

int main (void){
    int choice;
    do {
        printf("\nMenu:\n");
        printf("1. Find Factorial\n");
        printf("2. Print Fibonacci Series\n");
        printf("3. Sum of Natural Numbers\n");
        printf("4. Number Properties\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        if (scanf("%d", &choice) != 1) {
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF) { }
            printf("Invalid input. Please enter a number 1-5.\n");
            continue;
        }

        switch (choice) {
            case 1: { /* Factorial */
                int n;
                do {
                    printf("Enter a positive integer: ");
                    if (scanf("%d", &n) != 1) {
                        int ch;
                        while ((ch = getchar()) != '\n' && ch != EOF) { }
                        n = 0;
                        printf("Invalid input. ");
                        continue;
                    }
                    if (n <= 0) {
                        printf("Please enter a positive integer.\n");
                    }
                } while (n <= 0);

                long long fact = 1;
                for (int i = 1; i <= n; i++) {
                    fact *= i;
                }
                printf("Factorial of %d is %lld\n", n, fact);
                break;
            }

            case 2: { /* Fibonacci */
                int terms;
                do {
                    printf("Enter number of terms (positive integer): ");
                    if (scanf("%d", &terms) != 1) {
                        int ch;
                        while ((ch = getchar()) != '\n' && ch != EOF) { }
                        terms = 0;
                        printf("Invalid input. ");
                        continue;
                    }
                    if (terms <= 0) {
                        printf("Please enter a positive integer.\n");
                    }
                } while (terms <= 0);

                long long a = 0, b = 1;
                printf("Fibonacci series up to %d term(s):\n", terms);
                if (terms >= 1){
                    printf("%lld", a);
                }
                if (terms >= 2){
                    printf(" %lld", b);
                } 
                for (int i = 3; i <= terms; i++) {
                    long long next = a + b;
                    printf(" %lld", next);
                    a = b;
                    b = next;
                }
                printf("\n");
                break;
            }

            case 3: { /* Sum of natural numbers */
                int n;
                do {
                    printf("Enter a positive integer n: ");
                    if (scanf("%d", &n) != 1) {
                        int ch;
                        while ((ch = getchar()) != '\n' && ch != EOF) { }
                        n = 0;
                        printf("Invalid input. ");
                        continue;
                    }
                    if (n <= 0) {
                        printf("Please enter a positive integer.\n");
                    }
                } while (n <= 0);

                long long sum = (long long)n * (n + 1) / 2;
                printf("Sum of first %d natural numbers is %lld\n", n, sum);
                break;
            }

            case 4: { /* Number properties */
                int num;
                do {
                    printf("Enter an integer: ");
                    if (scanf("%d", &num) != 1) {
                        int ch;
                        while ((ch = getchar()) != '\n' && ch != EOF) { }
                        printf("Invalid input. ");
                        continue;
                    }
                    break;
                } while (1);

                int even_and_gt10 = (num % 2 == 0) && (num > 10);
                int div_by_3_or_5 = (num % 3 == 0) || (num % 5 == 0);
                int not_negative = !(num < 0);

                printf("%d is even AND greater than 10: %s\n", num, even_and_gt10 ? "True" : "False");
                printf("%d is divisible by 3 OR 5: %s\n", num, div_by_3_or_5 ? "True" : "False");
                printf("%d is NOT negative: %s\n", num, not_negative ? "True" : "False");
                break;
            }

            case 5:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice. Please select 1-5.\n");
        }

        if (choice == 5) break;
    } while (1);
    return 0;
}
