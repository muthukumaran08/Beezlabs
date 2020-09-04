/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char arr[]={"Beezlabs is completely about automation.It consist of AI platform to build intelligent components like OCR,NLP.It consist of agents to build,record and manage to run RPA bots.BeeZlabs consist of lots and lots more."};
    int len=strlen(arr);
    int count=0;
    for(int i=0;i<len;i++)
    {
        if(arr[i]!=' ')
        {
            count++;
        }
    }
    printf("%d",count);

    return 0;
}
