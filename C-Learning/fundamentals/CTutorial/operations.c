#include<stdio.h>

/*
The program ask the user to enter two numbers
and then prints the sum, product, difference, quotient
and modulus of the two numbers.
*/
int mainB()
{
    int number1, number2;
    printf("Please enter two numbers to be operated:\n");
    scanf("%d%d",&number1, &number2);
    printf("The sum of the %d and %d is: %d\n", number1, number2, number1+number2);
    printf("The product between the %d and %d is: %d\n", number1, number2, number1*number2);
    printf("The difference between the %d and %d is: %d\n", number1, number2, number1-number2);
    if(number2 != 0)
        printf("The quotient between the %d and %d is: %d\n", number1, number2, number1/number2);
    printf("The modulus between the %d and %d is: %d\n", number1, number2, number1%number2);
    return 0;
}
