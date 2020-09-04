/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    printf("%d %d",num1,num2);

    return 0;
}
