/*

Concepts to Practice
This prelab covers the topics below, which are also expected to be used in your lab assign-
ment.
    • for and do-while statements
    • switch statement and ternary operator
Description
You are an apprentice to the ancient Codekeeper, a guardian of the code that protects the
secrets of the Digital Realm. To prove your worth, you must solve a series of challenges
that test your programming skills. Only then will you be granted access to the secrets of
advanced coding.

Challenge 1: The Number Sequence
The Codekeeper presents you with a task: Generate and display the first 10 numbers in a
sequence where each number is the previous number multiplied by 3.
Task:
    • Write a for loop to generate this sequence starting from 1.
    • Print each number on a new line.

Challenge 2: The Mysterious Door
The Codekeeper guards a door with three locks. To unlock it, you must answer a riddle
correctly. However, you only get three attempts to answer, and you may choose from three
different riddles. For this prelab, you can make up any number of riddles that you want,
and you can reuse the two examples from the sample output. The riddles must be selected
by the user by entering a number.
Task:
    • Use a do-while loop to allow up to 3 attempts to answer correctly.
    • Implement a switch statement to handle the three riddle choices. You can write your
own riddles with your answers.
Hints:
    • Each case in the switch statement should present a different riddle.
    • Track the number of attempts and end the loop if the correct answer is given.
Example Riddle: “What has keys but can’t open locks?” (Correct answer is ‘c’)
1
Fall 2025 CMP SC 1050 – Prelab 4
    • (a) A Piano
    • (b) A Map
    • (c) A Computer

Challenge 3: The Final Code
The Codekeeper reveals that the final code to access the secret chamber is derived from
two numbers you will calculate. However, only one of these numbers is provided. You must
choose between adding or subtracting the given number from a fixed value based on a special
condition.
Task:
    • Use a ternary operator to determine whether to add or subtract a fixed value from
    the given number.
    • The condition is: If the given number is even, add 50; if odd, subtract 25.
Example:
    • Given number: 34 → Result: 84
    • Given number: 13 → Result: -12
Sample Output
tru314@TrumansPC:~/CS1050/FS2025/labs/prelab4$ compile prelab4.c
tru314@TrumansPC:~/CS1050/FS2025/labs/prelab4$ ./a.out


-----------CHALLENGE 1-----------
1
3
9
27
81
243
729
2187
6561
19683
2
Fall 2025 CMP SC 1050 – Prelab 4


-----------CHALLENGE 2-----------
Choose a riddle (1, 2, or 3): 1
Riddle: What has keys but can’t open locks?
(a) A Piano
(b) A Map
(c) A Computer
Enter your answer (a, b, or c): b
Incorrect! Try again.
Choose a riddle (1, 2, or 3): 2
Riddle: What can travel around the world while staying in a
corner?
(a) A Stamp
(b) A Letter
(c) An Envelope
Enter your answer (a, b, or c): a
Correct! The door unlocks.


-----------CHALLENGE 3, EVEN EXAMPLE-----------
Enter the given number: 34
The final code is: 84
-----------CHALLENGE 3, ODD EXAMPLE-----------
Enter the given number: 13
The final code is: -12
3

*/

#include <stdio.h>

int main(void){
    // Challenge 1
    printf("-----------CHALLENGE 1-----------\n");
    int number = 1;
    for(int i = 0; i < 10; i++){
        printf("%d\n", number);
        number *= 3;
    } 
    // // Challenge 2  
    // printf("\n-----------CHALLENGE 2-----------\n");
    // int riddleChoice;
    // char answer;
    // int attempts = 0;
    // int correct = 0;
    // do{
    //     printf("Choose a riddle (1, 2, or 3): ");
    //     scanf("%d", &riddleChoice);
    //     switch(riddleChoice){
    //         case 1:
    //             printf("Riddle: What has keys but can’t open locks?\n");
    //             printf("(a) A Piano\n(b) A Map\n(c) A Computer\n");
    //             printf("Enter your answer (a, b, or c): ");
    //             scanf(" %c", &answer);
    //             if(answer == 'c'){
    //                 correct = 1;
    //             }
    //             break;
    //         case 2:
    //             printf("Riddle: What can travel around the world while staying in a corner?\n");
    //             printf("(a) A Stamp\n(b) A Letter\n(c) An Envelope\n");
    //             printf("Enter your answer (a, b, or c): ");
    //             scanf(" %c", &answer);
    //             if(answer == 'a'){
    //                 correct = 1;
    //             }
    //             break;
    //         case 3:
    //             printf("Riddle: What has a heart that doesn’t beat?\n");
    //             printf("(a) An Artichoke\n(b) A Tree\n(c) A Rock\n");
    //             printf("Enter your answer (a, b, or c): ");
    //             scanf(" %c", &answer);
    //             if(answer == 'a'){
    //                 correct = 1;
    //             }
    //             break;
    //         default:
    //             printf("Invalid choice. Please choose 1, 2, or 3.\n");
    //             continue; // Skip incrementing attempts for invalid choice
    //     }
    // }
    // while(!correct && ++attempts < 3);
    // if(correct){
    //     printf("Correct! The door unlocks.\n");
    // } else {
    //     printf("Out of attempts! The door remains locked.\n");
    // }

    // Challenge 3
    printf("\n-----------CHALLENGE 3, EVEN EXAMPLE-----------\n");
    int givenNumber = 0;
    int finalCode = (givenNumber % 2 == 0) ? (givenNumber + 50) : (givenNumber - 25);
    printf("Enter the given number:");
    scanf("%d", &givenNumber);
    printf("The final code is: %d\n", finalCode);

    printf("\n-----------CHALLENGE 3, ODD EXAMPLE-----------\n");
    givenNumber = 0;
    finalCode = (givenNumber % 2 == 0) ? (givenNumber + 50) : (givenNumber - 25);
    printf("Enter the given number:");
    scanf("%d", &givenNumber);
    printf("The final code is: %d\n", finalCode);

    return 0;
}