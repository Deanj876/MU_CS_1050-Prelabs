#include <stdio.h>
/*
• gcc Prelab_6.c -o Prelab_6
• ./Prelab_6

Requirements
    • Write a clear, reusable function isPrime() that does not rely on global variables.
    • Call isPrime() in main() for numbers 1–100 and print only primes.
    • Write a function goldbachPrimePairs() that uses isPrime() to generate valid pairs.
    • Print results clearly as shown in the examples.
Sample Output
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53
59 61 67 71 73 79 83 89 97
*/

/*
Extension: Goldbach Prime Pairs
Extend your program by writing another function: int goldbachPrimePairs(int n)
This function should:
    • Take a positive even integer n as input.
    • Use isPrime() to find and print all pairs of primes that sum to n.
    • Return 1 if at least one pair exists, or 0 otherwise.
Examples:
Enter a natural positive even number: 20
    (3, 17)
    (7, 13)
Enter a natural positive even number: 4
    (2, 2)
Enter a natural positive even number: 5
Invalid number: There are no existing pairs
*/

// isPrime Function: This checks if the given number is prime or it its not prime.
int isPrime(int num) {
    // 1 can't be a prime number, this fact checks it.
    if (num <= 1){
        return 0; 
    }
    // This checks for factors from 2 to the square root of num
    for (int i = 2; i * i <= num; i++) {
        // If the number is divisable by i and has a remainder of 0, it is not a prime number
        if (num % i == 0){
            return 0;
        }
    }
    // If no factors were found, the number is prime
    return 1; 
}

// Extention Portion: Takes the neutral positive number given from the user and finds all the pair of prime numbers for it. 
int goldbachPrimePairs(int n){
    // If the number is less than or equal to 2, or if the number is odd, it will return invalid number response.
    if (n <= 2 || n % 2 != 0) {
        printf("Invalid number: There are no existing pairs\n");
        return 0;
    }
    // Our 'found' will return the variable if even just one pair is found.
    int found = 0;
    // if i is prime and n - i is prime, then we have found a pair.
    for (int i = 2; i <= n / 2; i++) {
        // This checks if both the i and the n (minus the i) variables are prime numbers.
        if (isPrime(i) && isPrime(n - i)) {
            // If both numbers are prime, it will return and print the pair.
            printf("(%d, %d)\n", i, n - i);
            found = 1;
        }
    }
    return found;
}
    
int main (void){
    printf("Prime numbers between 1 and 100:\n");
    for (int i = 1; i <= 100; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    // Extention
    int n;
    printf("Enter a natural positive even number: ");
    scanf("%d", &n);
    goldbachPrimePairs(n);

    return 0;
}
