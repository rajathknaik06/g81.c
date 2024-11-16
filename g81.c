/*Emily wants to declare a local variable, inputValue, which is then passed into a function named square. This function squares the input value and returns the result. Help him to write a program with the specified conditions to achieve it.

Input format :
The input consists of a single integer n, representing the number.

Output format :
The output displays "The square of n is: X" where n is the input integer and X is an integer representing the square of n.*/

#include <stdio.h>

// Function to square a number
int square(int num) {
    return num * num;
}

int main() {
    // Local variable declared in the main function
    int inputValue;

    scanf("%d", &inputValue);

    // Calling the function and printing the result
    int result = square(inputValue);
    printf("The square of %d is: %d\n", inputValue, result);

    return 0;
}
