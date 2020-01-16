#include <stdio.h>

/*
A program that writes numbers from 1 to 4
on the same line, considering the following:
1) Use one statement without conversion specifiers(%).
2) Use one statements with four conversion specifiers.
3) Use four statements.
*/
int mainC(){

 /*1) Using one statement without conversion specifiers:*/
 printf("1 2 3 4\n");

 /*2) Using one statement with 4 conversion specifiers(%)*/
 printf("%d %d %d %d \n", 1, 2, 3, 4);

 /*3) Using four print statements*/
 printf("%d ", 1);
 printf("%d ", 2);
 printf("%d ", 3);
 printf("%d \n", 4);

 return 0;
}
