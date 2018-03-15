/*先給有幾個CASE
然後給1~36的COST
接下來告訴你會有幾個範例
*/
#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int times=0,cost[36],test=0,i,min=1000,input=0,j=0,k=0,sum=0,temp=0,mod=0,mut=0;
    scanf(" %d",&times);
    for (i=1;i<=times;i++)
    {
        printf("Case %d:\n",i);
        for(j=0;j<36;j++)
            scanf(" %d",&cost[j]);
        scanf(" %d",&test);
        while (test>0)
        {
            scanf(" %d",&input);
            printf ("Cheapest base(s) for number %d: ",input);
            for (j=2;j<=36;j++)
            {
                temp=input;
                while (temp>0)
                {
                    mod=temp%j;
                    sum=sum+cost[mod];
                    temp=temp/j;
                }
                if (sum<min)
                    min=sum;
                sum=0;
            }
            for (j=2;j<=36;j++)
            {
                temp=input;
                while (temp>0)
                {
                    mod=temp%j;
                    sum=sum+cost[mod];
                    temp=temp/j;
                }
                if (sum==min)
                {
                    if (mut==1)
                        printf(" ");
                    printf("%d",j);
                    mut=1;
                }
                sum=0;
            }
            mut=0;
            min=1000;
            printf("\n");
            test=test-1;
        }
        if (i<times)
        printf("\n");
    }
    return 0;
}