/*

Write a program which accepts number from the user the return the sum of digit of that number.

Input : 108
Ouput : 9

*/

#include<stdio.h>

int sumDigits(int iNum)
{
    int iSum = 0;

    while(iNum != 0)
    {   
        iSum += (iNum % 10);
        iNum = iNum / 10;
    }

    return iSum;
}

int main(void)
{
    int iNo = 0, iRet = 0;

    printf("Enter the number : \n");
    scanf("%d", &iNo);

    iRet = sumDigits(iNo);

    printf("\nSum of the digits is : %d\n", iRet);

    return 0;
}