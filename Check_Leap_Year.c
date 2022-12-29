/*

Write a program which accepts year from the user and check whether the year is leap or not.

Input : 2004
Ouput : 2004 a is leap year

Input : 2005
Output : 2005 is not a leap year

*/

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL checkLeap(int iYear)
{
    if((iYear % 4) == 0 && (iYear % 100) != 0 || iYear % 400 == 0)
        return TRUE;
    return FALSE; 
}

int main(void)
{
    int iYear = 0;
    BOOL bRet = FALSE;

    printf("Enter the year : \n");
    scanf("%d", &iYear);

    bRet = checkLeap(iYear);

    if(bRet == TRUE)
        printf("%d is a leap year\n", iYear);
    else
        printf("%d is not a leap year\n", iYear);

    return 0;
}