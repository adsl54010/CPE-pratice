//將一句話旋轉90度

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
    char x[101][101],y[101];
    int i=0,j=0,k=0,time=0,max=0,space=0;
    while(gets(y)!=0)                                                                 //gets只令可以讀取一行
    {
        if(y=='\0')                                                                           //結束跳出
             break;
        else
        {
            for(i=0;i<101;i++)
            {
                if(i<strlen(y))
                    x[time][i]=y[i];
                else                                                                                      //如果沒內容先填入*
                    x[time][i]='*';
            }
            time++;
            if(strlen(y)>max)                                                                   //尋找最長長度
                max=strlen(y);
        }
    }
    for(i=0;i<max;i++)
    {
        for(j=time-1;j>=0;j--)
        {
            if (x[j][i]=='*')                                                       //紀錄有幾個空格但如果後面沒內容則不需要輸出空格
                space=space+1;
            else
            {
                for(k=0;k<space;k++)
                    printf(" ");
                printf("%c",x[j][i]);
                space=0;
            }
        }
        space=0;
        printf("\n");
    }
    return 0;
}