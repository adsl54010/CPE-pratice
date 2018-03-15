#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int times=0,test=0,M=0,N=0,i=0,j=0,x=0,y=0,L=0,exit=0;
	char cent,MN[100][100];
	scanf(" %d",&times); //輸入幾個CASE
	while (times>0)
	{
		scanf(" %d",&M);
		scanf(" %d",&N);
		scanf(" %d",&test);
		printf("%d %d %d\n",M,N,test); //輸入幾*幾的矩形還有測試的案例
		for (i=0;i<M;i++)
		{
			for(j=0;j<N;j++)
			{
				scanf(" %c",&MN[i][j]); //把格子讀入
			}
		}
		while (test>0)
		{
			scanf(" %d",&x);
			scanf(" %d",&y);
			cent=MN[x][y];
			while (x>=0 && x<M &&y>=0 && y<N)
			{
				for (i=x;i<=(2*L+x);i++)
				{
					for (j=y;j<=(2*L+y);j++)
					{
						if (MN[i][j]!=cent) //判斷是否跟中心的字元相同
						{
							exit=1; //不同就跳出用exit做記號
							break;
						}
					}
					if (exit==1)
						break;
				}
				if(exit==1)
					break;
				L=L+1;
				x=x-1;
				y=y-1;
			}
			test=test-1;
			printf("%d\n",(2*L-1));
			L=0;
			exit=0;
		}
		times=times-1;
	}
	return 0;
}