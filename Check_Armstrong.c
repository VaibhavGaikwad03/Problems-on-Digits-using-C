/*
 
Write a program which accepts number from user and check whether the number is armstrong or not.

Input : 1634
Output : TRUE

*/

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL checkArmstrong(int iNum)
{
    int i = 0, iDigitCounter = 0, iDigit = 0, iTemp = 0, iSum = 0, iPow = 0;
    
    iTemp = iNum;

    while(iTemp != 0)
    {
        iDigitCounter++;
        iTemp = iTemp / 10;
    }

    iTemp =  iNum;

    while(iNum != 0)
    {
        iPow = 1;
        iDigit = iNum % 10;
        for(i = 1; i <= iDigitCounter; i++)
            iPow = iPow * iDigit;
        iSum += iPow;
        iNum /= 10;
    }

    if(iTemp == iSum)
        return TRUE;
    return FALSE;
}

int main(void)
{
    int iNo = 0;
    BOOL bRet = FALSE;

    printf("Enter the number : \n");
    scanf("%d", &iNo);

    bRet = checkArmstrong(iNo);
    
    if(bRet == TRUE)
        printf("\nThe number is Armstrong Number\n");

    else
        printf("\nThe number is not Armstrong Number\n");

    return 0;
}
