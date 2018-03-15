/*F[0]=1=1
F[1]=2=10
F[2]=1+2=100
F[3]=3+2=1000

此項為前兩項和  然後F[0]是第一位  F[1]代表第二位數
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
    int times=0,i,F[39],bit=2,num=0,output=0;
    scanf(" %d",&times);
    F[0]=1;
    F[1]=2;
    for (i=bit;i<39;i++)                                   //先計算出所有會用道的數字
    {
        F[i]=F[i-1]+F[i-2];
    }
    scanf(" %d",&num);
    while (times>0)
    {
        printf("%d = ",num);
        for (i=38;i>=0;i--)
        {
            if (num>=F[i])                                   //輸出值得一提的是0必須在出現一個1後才要輸出所以有個output
            {
                num=num-F[i];
                output=1;
                printf("1");
            }
            else if (output==1)
            {
                printf("0");
            }
        }
        printf(" (fib)\n");
        times=times-1;
        output=0;
        scanf(" %d",&num);
    }
    return 0;
}