/*輸出的數字太大
因此一次只輸入兩個數的其中一個位元
進行相加後
個別輸出
設一個數為進位的代表
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int casenum=0,*num1,*num2,numlong=0,i=0,*sum,k=0,j=0;
	scanf(" %d",&casenum);
	while (casenum>0)
	{
		sum=0;
		k=0;
		j=0;
		scanf(" %d",&numlong);
		num1=(int*)malloc(numlong*sizeof(int));
		num2=(int*)malloc(numlong*sizeof(int));
		sum=(int*)malloc((numlong+1)*sizeof(int));
		for (i=0;i<numlong;i++)
		{
			scanf(" %d %d",&num1[i],&num2[i]);
		}
		for(i=numlong-1;i>=0;i--)
		{
			if (k==1)
			{
				sum[j]=num1[i]+num2[i]+k;
				k=0;
			}
			else
				sum[j]=num1[i]+num2[i];
			if (sum[j]>=10)
			{
				k=1;
				sum[j]=sum[j]%10;
			}
			j++;
		}
		for (i=j-1;i>=0;i--)
		{
			if (k==1)
				printf("1");
			k=0;
			printf("%d",sum[i]);
		}
		casenum=casenum-1;
		if (casenum>0)
			printf("\n");
		printf("\n");
	}
return 0;
}