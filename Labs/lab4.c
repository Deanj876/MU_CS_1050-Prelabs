// Code Written by Dean Johnson, CS_1050
// And yes, I use lower camelCase

// mucsmake 1050 [LabName] [Filename].c
#include <stdio.h>

int main(void){
    // ----Chapter 1
    // Write a C program that uses a for statement or a do-while statement loop to
    // iterate through the numbers from 1 to 100.
    // 2. Sum all even numbers, but skip any number divisible by 5.
    // 3. Store the final sum in a variable and display it as “Mystic Code Fragment 1 ”.
    // 4. You are NOT ALLOWED to use break or continue statements.
    // Example: If your program works correctly, your “Fragment 1 ” should have the value
    // 2000

    // creates out final Sum / Fragment 1 variable
    int finalSum = 0; // Fragment 1
    for(int i = 0; i < 100; i++){
        // If the number of i's remainder of 5 is 0 OR not if its not equal, it doesn't do anything to the final sum.
        if(i % 5 == 0 || i % 2 != 0){
            finalSum += 0;
        }
        // if its a even number, adds the value of i to the final sum
        else if(i % 2 == 0){
            finalSum += i;
        }
    }
    // prints final sum.
    printf("%d\n", finalSum);

    // ----Chapter 2
    // Write a C program that uses a switch statement to display a riddle based on a
    // number input by the user (between 1 and 5).
    // 2. The user will have up to 3 chances to guess the correct answer.
    // 3. If they get an incorrect answer, they can choose to select a different riddle after each
    // attempt.
    // 4. Implement this using a do-while OR while loop.
    // 5. The user will input a number (1 to 5) to choose a riddle, and then input a single
    // character (‘a’, ‘b’, ‘c’, etc.) that they believe is the correct answer.
    // 6. Use ONLY the ternary operator to check if the user’s guess is correct. If correct,
    // set “Fragment 2 ” to 42. Otherwise, set “Fragment 2 ” to 0.
    // 7. Display a message indicating whether the answer is correct and display “Mystic Code
    // Fragment 2 ” with the value of “Fragment 2 ”.
    // 8. You are NOT ALLOWED to use the logical operators: && and ||.
    // 9. You are ONLY ALLOWED to use the break statement inside the switch statement
    // for each case block

    //Creating the required variables
    int riddleChoice;
    char answer;
    int attempts = 0;
    int correct = 0;
    // Creating our Fragment 2
    int fragment2 = 42; // Fragment 2
    do{
        // User picks a riddle form the 5 options
        printf("Choose a riddle (1, 2, 3, 4, or 5): ");
        scanf("%d", &riddleChoice);
        switch(riddleChoice){
            case 1:
                printf("Riddle: I speak without a mouth and hear without ears. I have no body, but I come alive with the wind?\n");
                printf("(a) Echo\n(b) Shadow\n(c) Whisper\n");
                printf("Enter your answer (a, b, or c): ");
                // Takes in the character
                scanf(" %c", &answer);
                if(answer == 'a'){
                    correct = 1;
                }
                // Breaks / ends the case if correctly answered.
                break;
            //Similar to Case 1
            case 2:
                printf("Riddle: I’m light as a feather, yet the strongest man can’t hold me for much longer.\n");
                printf("(a) Air\n(b) Breath\n(c) Feather\n");
                printf("Enter your answer (a, b, or c): ");
                scanf(" %c", &answer);
                if(answer == 'b'){
                    correct = 1;
                }
                break;
            //Similar to Case 1
            case 3:
                printf("Riddle: I have keys but no locks. I have space but no room. You can enter, but you can’t go outside.\n");
                printf("(a) Book\n(b) Door\n(c) Keyboard\n");
                printf("Enter your answer (a, b, or c): ");
                scanf(" %c", &answer);
                if(answer == 'c'){
                    correct = 1;
                }
                break;
            //Similar to Case 1
            case 4:
                printf("Riddle: What can fill a room but takes up no space?\n");
                printf("(a) Air\n(b) Light\n(c) Sound\n");
                printf("Enter your answer (a, b, or c): ");
                scanf(" %c", &answer);
                if(answer == 'b'){
                    correct = 1;
                }
            //Similar to Case 1
            case 5:
                printf("Riddle: The more you take, the more you leave behind\n");
                printf("(a) Footsteps\n(b) Memories\n(c) Time\n");
                printf("Enter your answer (a, b, or c): ");
                scanf(" %c", &answer);
                if(answer == 'a'){
                    correct = 1;
                }
            // If user doesn't select a valid number
            default:
                printf("Invalid choice. Please choose 1, 2, 3, 4, or 5.\n");
                continue; // Skip incrementing attempts for invalid choice
        }
    }
    // If correct ends the code and moves on aka "The door unlocks", otherwise (if they get it wrong or run out of attempts) it ends.
    while(!correct && ++attempts < 3);
    if(correct){
        printf("Correct! The door unlocks.\n");
    } else {
        printf("Out of attempts! The door remains locked.\n");
    }

    // ----Chapter 3
    // Kingdom of Code is SAVED!”
    // • If your Mystic Code is NOT equal to 2042, display the final Mystic Code and declare,
    // “The Kingdom of Code is DOOMED!”
    // • Display the message using only the ternary operator within the printf function.
    // Example: If “Fragment 1 ” is 2000 and “Fragment 2 ” is 42, the final Mystic Code
    // should be 2042.

    // Adds our two fragments together
    int finalMysticCode = finalSum + fragment2;
    // Prints out the result
    printf("The final Mystic Code is: %d\n", finalMysticCode);
    // Reads it as "If finalMysticCode equals 2042, print value for true, else print false", the true or false being our ending outputs.
    printf("%s\n", (finalMysticCode == 2042) ? "The Kingdom of Code is SAVED!" : "The Kingdom of Code is DOOMED!");


    return 0;
}