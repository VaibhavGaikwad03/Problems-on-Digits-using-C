/*

Write a program which accepts number from the user and return sum of odd numbers up to that number.

Input : 5
Output : 9

*/

#include<stdio.h>

int sumOfOddNumbers(int iNo)
{
    int i = 0, iSumOdd = 0;

    for(i = 1; i <= iNo; i++)
        if(i % 2 != 0)
                iSumOdd += i;
    
    return iSumOdd;
}

int main(void)
{
    int iNum = 0, iRet = 0;

    printf("Enter the number : \n");
    scanf("%d", &iNum);

    iRet = sumOfOddNumbers(iNum);

    printf("\nSum of odd numbers is : %d\n", iRet);

    return 0;
}