#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int I=0,P=0,Imod=0,Bnum=0,i=0,B[50];
    scanf(" %d",&I);
    do
    {
        while (I!=0)
         {
            Imod=I%2;             //取得餘數
            P=P+Imod;            //把1加起來
            I=I/2;
            B[Bnum]=Imod;   //儲存小→大的數字
            Bnum=Bnum+1;
        }
        printf("The parity of ");
        for (i=Bnum-1;i>=0;i--)//反過來輸出
            printf("%d",B[i]);
        printf(" is %d (mod 2).\n",P);
        scanf(" %d",&I);
        Bnum=0;
        P=0;
    }while(I!=0);
    return 0;
}