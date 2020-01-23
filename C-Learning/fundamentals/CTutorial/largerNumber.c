#include <stdio.h>

/*
A program that asks the user to enter two integers
in order to print the larger number followed
by the sentence "is larger".
- If the numbers are equal => print "These numbers are equal".
- Use only the single-selection form of the if statement.
*/

int main(){

    int number1, number2;

    printf("Enter two integer numbers: ");
    scanf("%d%d", &number1, &number2);

    if (number1 == number2)
        printf("These numbers are equal");
    if (number1 > number2)
        printf("%d is larger", number1);
    if (number2 > number1)
        printf("%d is larger", number2);

    return 0;
}
