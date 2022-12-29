/*

Write a program which accepts number from user that how many pefrect numbers that user want to display.

Input : 3
Output : 6  28  496

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

void displayPerfect(int iNPerfect)
{
    int i = 0, iNo = 0;
    BOOL bRet = FALSE;

    if(iNPerfect > 4)
    {
        printf("\nThe range of an integer will be exceeded\n");
        return;
    }

    while(i < iNPerfect)
    {
        while(TRUE)
        {
            bRet = checkPerfect(++iNo);
            if(bRet)
            {
                printf("%d\t", iNo);
                i++;
                break;
            }
        }
    }
}

int main(void)
{
    int iNo = 0;

    printf("Enter the number that how many pefect numbers you want to display : \n");
    scanf("%d", &iNo);

    displayPerfect(iNo);

    return 0;
}
