// Q-3 write a c program to defines a functions to reverse a 3 digit number.

#include <stdio.h>


int reverseNumber(int num) {
    int reversed = 0;
    int digit1, digit2, digit3;

    
    digit1 = num % 10;        
    num = num / 10;           
    digit2 = num % 10;        
    digit3 = num / 10;      

    reversed = (digit1 * 100) + (digit2 * 10) + digit3;

    return reversed;
}

int main() {
    int number, reversedNumber;

    printf("Enter a three-digit number: ");
    scanf("%d", &number);

    if (number < 100 || number > 999) {
        printf("Please enter a valid three-digit number.\n");
    } else {
       
        reversedNumber = reverseNumber(number);
        printf("Reversed number: %d\n", reversedNumber);
    }

    return 0;
}

