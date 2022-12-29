/*

Write a program which accepts a number from the user and check whether the number perfect or not.

Input : 6
Output : TRUE

Input : 10
Output : FALSE

*/

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL checkPerfect(int iNum)
{   
    int i = 0, iSum = 0;

    for(i = 1; i <= iNum/2; i++)
    {
        if(iNum % i == 0)
        {
            iSum += i;
        }
    }
    if(iSum == iNum)
        return TRUE;
    return FALSE;
}

int main(void)
{
    int iNo = 0;
    BOOL bRet = FALSE;

    printf("Enter the number : \n");
    scanf("%d", &iNo);

    bRet = checkPerfect(iNo);

    if(bRet == TRUE)
        printf("\nThis is a Perfect Number\n");
    else
        printf("\nThis is not a Perfect Number\n");

    return 0;
}