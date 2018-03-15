/*骰子遊戲
先告訴你要動幾步
然後往上下左右
預設好一開始是1在上面
北2
西3
東4
南5
下6
*/
#include "stdio.h"
#include "stdlib.h"

int main(void)
{
    int times=0,up=1,down=6,n=2,w=3,e=4,s=5,temp=0;
    char action[5];
    scanf(" %d",&times);
    while (times>0)
    {
        while (times>0)
        {
            scanf(" %s",action);
            switch (action[0])                                                             //當執行上下左右動作的時候去把每個面的值都換掉就好
            {
                case 'n':
                    temp=up;
                    up=s;
                    s=down;
                    down=n;
                    n=temp;
                    break;
                case 'w':
                    temp=up;
                    up=e;
                    e=down;
                    down=w;
                    w=temp;
                    break;
                case 'e':
                    temp=up;
                    up=w;
                    w=down;
                    down=e;
                    e=temp;
                    break;
                case 's':
                    temp=up;
                    up=n;
                    n=down;
                    down=s;
                    s=temp;
                    break;
                 }
                times=times-1;
            }
            printf("%d\n",up);
            up=1;
            down=6;
            n=2;
            w=3;
            e=4;
            s=5;
            scanf(" %d",&times);
        }
    return 0;
}