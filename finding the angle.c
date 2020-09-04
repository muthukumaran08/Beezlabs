/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int hr,min;
    scanf("%d:%d",&hr,&min);
    int m=min/5;
    int ang=abs(hr-m);
    printf("%d degree",ang*30);

    return 0;
}
