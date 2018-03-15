//工廠罷工每個有自己的週期計算總共浪費了幾天

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int times=0,party[100],hartals=0,P=0,day=0,i=0,j=0;
    scanf(" %d",&times);                                                                 //輸入總共要計算幾種case
    while (times>0)
    {
        scanf(" %d",&day);                                                                  //多少天
        scanf(" %d",&P);                                                                    //有幾個霸工團體
        for(i=0;i<P;i++)
        {
            scanf(" %d",&party[i]);                                                       //把罷工團體罷工的週期紀錄下來
        }
        for (i=1;i<=day;i++)
        {
            if (i%7!=6 && i%7!=0)                                                            //如果罷工剛好是5或6就沒差本來就放假所以不用管
            {
                for (j=0;j<P;j++)
                {
                    if (i%party[j]==0)                                                            //如果day數剛好對道罷工的週期就會有人罷工
                    {
                        hartals=hartals+1;                                                        //罷工日數+1
                        break;                                                                           //反正有其他團體罷工了剩下的有沒有罷工都無所謂
                    }
                }
            }
        }
        printf("%d\n",hartals);
        hartals=0;
        times=times-1;
    }
    return 0;
}