/*

Write a program which accepts a number from the user and check whether the number is palindrome or not.

Input : 121
Output : TRUE

Input : 71
Output : FALSE

*/

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL checkPalindrome(int iNum)
{
    int iReverse = 0, iDigit = 0, iTemp = 0;

    iTemp = iNum;

    while(iNum != 0)
    {
        iDigit = iNum % 10;
        iNum = iNum / 10;
        iReverse = iReverse * 10 + iDigit;
    }
    if(iTemp == iReverse)
        return TRUE;
    return FALSE;
}

int main(void)
{
    int iNo = 0;
    BOOL bRet = FALSE;

    printf("Enter the number : \n");
    scanf("%d", &iNo);

    bRet = checkPalindrome(iNo);

    if(bRet == TRUE)
        printf("This is a Palindrome Number\n");
    else
        printf("This is not a Palindrome Number\n");

    return 0;
}