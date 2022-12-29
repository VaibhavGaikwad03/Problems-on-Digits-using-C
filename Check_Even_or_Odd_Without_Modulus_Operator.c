/*

Write a program which accepts a number from the user and check whether the number is even or odd without using modulus operator.

Input : 4
Output : TRUE

Input : 7
Output : FALSE

*/

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL checkEven(int iNum)
{
    if((iNum & 1) == 0)
        return TRUE;
    return FALSE;
}

int main(void)
{
    int iNo = 0;
    BOOL bRet = FALSE;

    printf("Enter the number : \n");
    scanf("%d", &iNo);

    bRet = checkEven(iNo);

    if(bRet == TRUE)
        printf("Number is Even\n");
    else
        printf("Number is Odd\n");

    return 0;
}