/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{ 
    int N;
    scanf("%d ",&N);
    int arr[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d ",&arr[i]);
    }
    for(int i=0;i<N-1;i++)
    {
        for(int j=0;j<N-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                break;
            }
        }
    }
    for(int i=0;i<N-1;i++)
    {
        if(arr[i+1]-arr[i]>1)
        {
            printf("%d ",arr[i]+1);
        }
    }
    
    return 0;
}
