/*如果n為m的指數列出過程不然就輸出Boring!.
需注意9 1  和 1 1 的情況
*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int n=0,m=0,ans[30],num=0,i=0;
    scanf(" %d %d",&n,&m);
    while (n>1)
    {
        ans[num]=n;                                                                       //紀錄最初的數字
        while (n>0)
        {
            num=num+1;
            n=n/m;
            ans[num]=n;                                                                   //計錄除m後的數字
            if (ans[num-1]%m!=0 || ans[num]>=ans[num-1])     //判斷是否整除還有有沒有變小防止m為1的情況
            {
                printf("Boring!\n");
                break;
            }
            else if (n==1 )
            {
                for (i=0;i<num;i++)
                printf("%d ",ans[i]);
                printf("%d\n",n);
                break;
            }
        }
        num=0;
        do                                                            防止n為1的情況及輸入下個case
        {
            n=0;
            scanf("%d %d",&n,&m);
            if (n==1)
                printf("Boring!\n");
          }while (n==1);
    }
return 0;
}