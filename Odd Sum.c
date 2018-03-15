//題目:第一行是CASE各數然後之後就都是a和b

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a=0,b=0,sum=0,n=1,i,casenum=0;
    scanf(" %d",&casenum);                       //case數輸入
    while (n<=casenum)
    {
        scanf(" %d",&a);                                   //輸入a
        scanf(" %d",&b);                                   //輸入b
        if (a%2==0)                                             //如果a b不是奇數則+1 和-1使其變成奇數
            a=a+1;
        if (b%2==0)
            b=b-1;
        for (i=a;i<=b;i=i+2)                              //計算總何
            sum=sum+i;
        printf("Case %d: %d\n",n,sum);          //輸出
        n=n+1;                                                       //進入下個CASE
        sum=0;                                                       //總合歸零
    }
    return 0;
}