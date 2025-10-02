/* Instructions
ask 1: The Menu of Shapes
1. Display a numbered menu with the following options:
1. Compute the area of one or more circles.
2. Compute the area of a rectangle.
3. Compute the area of a triangle using Heron’s formula.
4. Compute the perimeter of a square.
5. Exit the program.
2. Read the user’s selection and dispatch using a switch statement.
3. Keep the application running until the user chooses Exit.
4. Implement the menu inside an infinite loop (e.g., for(;;) or while(1), or do{ ...
}while(1)), and use break statements for the Exit case of the switch not only to exit
the switch statement, but also to terminate the loop and end the program.
Task 2: Repetition and Validation
Task:
• For multiple circle calculations, prompt for how many circles and use a for loop to
read each radius and report each area.
• For triangle input validation, use a for loop (max 3 attempts) to read sides a, b, c. If
the triangle inequality fails, allow retry until attempts are exhausted; otherwise proceed
to Heron’s formula.
• Demonstrate pre/post increment/decrement at least once (for example, in attempt
counters or index variables). Briefly comment where used.
• Use logical operators (e.g., &&, ||, !) when checking triangle validity and when vali-
dating menu choices.
Task 3: Formulas and Math Functions
• Circle: A = πr2 (use M PI from math.h).
• Rectangle: A = l × w.
• Triangle:
– Valid if a + b > c, b + c > a, a + c > b.
– Heron’s Formula: s = a+b+c
2 , A = ps(s − a)(s − b)(s − c).
• Square: P = 4s.
Examples of using math functions:
#include <math.h>
// Using sqrt for Heron’s formula
area = sqrt(s * (s - a) * (s - b) * (s - c));
*/

#include <stdio.h>
#include <math.h>
    
int M_PI = 3.1415926535;
int main (void){
    int choice;
    do {
        printf("Menu:\n");
        printf("1. Compute the area of one or more circles.\n");
        printf("2. Compute the area of a rectangle.\n");
        printf("3. Compute the area of a triangle using Heron’s formula.\n");
        printf("4. Compute the perimeter of a square.\n");
        printf("5. Exit the program.\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                int numCircles;
                printf("How many circles? ");
                scanf("%d", &numCircles);
                for (int i = 0; i < numCircles; i++) {
                    double radius;
                    printf("Enter radius for circle %d: ", i + 1);
                    scanf("%lf", &radius);
                    double area = M_PI * radius * radius;
                    printf("Area of circle %d: %.2f\n", i + 1, area);
                }
                break;
            }
            case 2: {
                double length, width;
                printf("Enter length and width of the rectangle: ");
                scanf("%lf %lf", &length, &width);
                double area = length * width;
                printf("Area of the rectangle: %.2f\n", area);
                break;
            }
            case 3: {
                double a, b, c;
                int attempts = 0;
                while (attempts < 3) {
                    printf("Enter sides a, b, c of the triangle: ");
                    scanf("%lf %lf %lf", &a, &b, &c);
                    if (a + b > c && b + c > a && a + c > b) {
                        double s = (a + b + c) / 2;
                        double area = sqrt(s * (s - a) * (s - b) * (s - c));
                        printf("Area of the triangle: %.2f\n", area);
                        break;
                    } else {
                        printf("Invalid triangle sides. Please try again.\n");
                        attempts++;
                    }
                }
                if (attempts == 3) {
                    printf("Max attempts reached. Exiting triangle calculation.\n");
                }
                break;
            }
            case 4: {
                double side;
                printf("Enter the side length of the square: ");
                scanf("%lf", &side);
                double perimeter = 4 * side;
                printf("Perimeter of the square: %.2f\n", perimeter);
                break;
            }
            case 5:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}