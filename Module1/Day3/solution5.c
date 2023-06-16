//level1
/*Write a program to find both smallest and largest digits in given n numbers
For example let's say we have n = 3, and n1 = 8, n2 = 156, n3 = 123450, the result will be "Not Valid", 1 and 6, 0 and 5*/
#include <stdio.h>

void findSmallestAndLargestDigits(int n) {
    int i, num;
    int smallestDigit, largestDigit;
    int validInput = 1; // Flag to check if all inputs are valid

    printf("Enter %d numbers:\n", n);

    for (i = 1; i <= n; i++) {
        scanf("%d", &num);

        int digit;
        int firstIteration = 1;

        // Find the smallest and largest digit in the current number
        while (num > 0) {
            digit = num % 10;
            num /= 10;

            if (firstIteration) {
                smallestDigit = digit;
                largestDigit = digit;
                firstIteration = 0;
            } else {
                if (digit < smallestDigit) {
                    smallestDigit = digit;
                }
                if (digit > largestDigit) {
                    largestDigit = digit;
                }
            }
        }

        // Check if the current number is valid (contains at least one digit)
        if (firstIteration) {
            validInput = 0;
            printf("Number %d: Not Valid\n", i);
        } else {
            printf("Number %d: Smallest Digit = %d, Largest Digit = %d\n", i, smallestDigit, largestDigit);
        }
    }

    // Print the result if all inputs are valid
    if (validInput) {
        printf("All inputs are valid.\n");
    }
}

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    findSmallestAndLargestDigits(n);

    return 0;
}