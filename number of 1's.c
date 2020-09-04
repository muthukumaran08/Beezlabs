/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int numOfOnes(int num)
{
    int count=0;
    while(num)
    {
        if(num%10==1)
        {
            count++;
        }
        num/=10;
    }
    return count;
}

int main()
{
    int start,end,count=0;
    scanf("%d %d",&start,&end);
    for(int num=start;num<=end;num++)
    {
        count+=numOfOnes(num);
    }
    printf("%d ",count);

    return 0;
}
