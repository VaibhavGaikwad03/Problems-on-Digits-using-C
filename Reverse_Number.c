/*

Write a program which accepts number from the user and return the reversed number.

Input : 108
Ouput : 801

*/

#include<stdio.h>

int reverseNumber(int iNum)
{
    int iDigit = 0, iReverse = 0;

    while(iNum != 0)
    {
        iDigit = iNum % 10;
        iNum = iNum / 10;
        iReverse = iReverse * 10 + iDigit;
    }
    return iReverse;
}

int main(void)
{
    int iNo = 0, iRet = 0;

    printf("Enter the number : \n");
    scanf("%d", &iNo);

    iRet = reverseNumber(iNo);

    printf("\nReversed number is : %d\n", iRet);

    return 0;
}