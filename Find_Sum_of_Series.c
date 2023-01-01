/*

Write a program which accepts number from the user and return the sum of series.

Input : 5
How it internally works : 1^2 + 2^2 + 3^2 + 4^2 + 5^2
Output : 55

*/

#include<stdio.h>

int sumOfSeries(int iNum)
{
    int i = 0, j = 0, iSum = 0;

    for(i = 1; i <= iNum; i++)
    {
        iSum = iSum + i * i;
    }
    return iSum;
}

int main(void)
{
    int iNo = 0, iRet = 0;

    printf("Enter the number : \n");
    scanf("%d", &iNo);

    iRet = sumOfSeries(iNo);

    printf("\nSum of series is : %d\n", iRet);

    return 0;
}