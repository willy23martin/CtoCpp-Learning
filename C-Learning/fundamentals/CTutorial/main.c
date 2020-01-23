#include <stdio.h>
#include <stdlib.h>

/*
Exercises reference: Book "C how To Program, Introducing C++ and Java", Deitel&Deitel, Prentice Hall,
2001, 3rd edition.
*/

int mainA()
{
    /*A program will calculate the product of three integers*/

    int x,y,z,result;

    /*Less efficient code*/
    printf("Enter an integer x:\n");
    scanf("%d",&x);

    printf("Enter an integer y:\n");
    scanf("%d",&y);

    printf("Enter an integer z:\n");
    scanf("%d",&z);

    result = x*y*z;
    printf("The product is %d:\n", result);

    /*Most efficient code*/

    printf("Enter three integers x,y and z:\n");
    scanf("%d%d%d",&x, &y, &z);

    result = x*y*z;
    printf("The product is %d:\n", result);

    return 0;
}
