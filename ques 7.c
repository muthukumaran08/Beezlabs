/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int calculateDigitSum(int num)
{
    int sum=0;
    while(num)
    {
        sum+=num%10;
        num/=10;
    }
    return sum;
}

int main()
{
    int num,sum=0;
    scanf("%d ",&num);
    sum=calculateDigitSum(num);
    while(((int)log10(sum)+1)>1)
    {
        sum=calculateDigitSum(sum);
    }
    printf("%d ",sum);

    return 0;
}
