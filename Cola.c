/*每3個可樂空瓶子可以換一個可樂
可以跟朋友借一個可樂因為最後至少會剩下一個空瓶
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int cola=0,brrow=1,drink=0,newcola=0;
    scanf(" %d",&cola);
    while (cola>0)
    {
        drink=cola;
        while (cola>=2)                                                  //如果有兩瓶則可以借一瓶 因此可以進來
        {
            newcola=cola/3;
            drink=drink+newcola;
            cola=cola%3;
            cola=cola+newcola;
            if (cola==2 && brrow==1)                              //只能借一次所以brrow判斷
            {
                cola=cola+1;
                brrow=0;
            }
        }
        printf("%d\n",drink);
        brrow=1;
        drink=0;
        cola=0;
        scanf(" %d\n",&cola);
    }
    return 0;
}