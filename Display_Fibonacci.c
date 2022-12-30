/*

Write a program which accepts a number from the user and display fibonacci series terms up to that number of times.

Input : 5
Output : 0  1  1  2  3

*/

#include<stdio.h>

void displayFibonacci(int iNoTerms)
{
    int i = 0, iNo1 = 0, iNo2 = 1, iNo3 = 0;
    
    for(i = 0; i < iNoTerms; i++)
    {
        iNo3 = iNo1 + iNo2;
        printf("%d\t", iNo1);
        iNo2 = iNo1;
        iNo1 = iNo3;
    }
}

int main(void)
{
    int iNo = 0;

    printf("Enter the number of terms you want to print : \n");
    scanf("%d", &iNo);

    displayFibonacci(iNo);

    return 0;
}