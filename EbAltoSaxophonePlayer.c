#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int times,sum[10]={0,0,0,0,0,0,0,0,0,0},state[10]={0,0,0,0,0,0,0,0,0,0},i=0;
	char x;
	scanf(" %d",&times);
	scanf("%c",&x);
	while (times>0)
	{
		while (1)
		{
			scanf("%c",&x);
			switch (x)
			{
				case 'c':
					if (state[1]==0)
						sum[1]=sum[1]+1;
					if (state[2]==0)
						sum[2]=sum[2]+1;
					if (state[3]==0)
						sum[3]=sum[3]+1;
					if (state[6]==0)
						sum[6]=sum[6]+1;
					if (state[7]==0)
						sum[7]=sum[7]+1;
					if (state[8]==0)
						sum[8]=sum[8]+1;
					if (state[9]==0)
						sum[9]=sum[9]+1;
					state[0]=0;
					state[1]=1;
					state[2]=1;
					state[3]=1;
					state[4]=0;
					state[5]=0;
					state[6]=1;
					state[7]=1;
					state[8]=1;
					state[9]=1;
					break;
				case 'd':
					if (state[1]==0)
						sum[1]=sum[1]+1;
					if (state[2]==0)
						sum[2]=sum[2]+1;
					if (state[3]==0)
						sum[3]=sum[3]+1;
					if (state[6]==0)
						sum[6]=sum[6]+1;
					if (state[7]==0)
						sum[7]=sum[7]+1;
					if (state[8]==0)
						sum[8]=sum[8]+1;
					state[0]=0;
					state[1]=1;
					state[2]=1;
					state[3]=1;
					state[4]=0;
					state[5]=0;
					state[6]=1;
					state[7]=1;
					state[8]=1;
					state[9]=0;
					break;
				case 'e':
					if (state[1]==0)
						sum[1]=sum[1]+1;
					if (state[2]==0)
						sum[2]=sum[2]+1;
					if (state[3]==0)
						sum[3]=sum[3]+1;
					if (state[6]==0)
						sum[6]=sum[6]+1;
					if (state[7]==0)
						sum[7]=sum[7]+1;
					state[0]=0;
					state[1]=1;
					state[2]=1;
					state[3]=1;
					state[4]=0;
					state[5]=0;
					state[6]=1;
					state[7]=1;
					state[8]=0;
					state[9]=0;
					break;
				case 'f':
					if (state[1]==0)
						sum[1]=sum[1]+1;
					if (state[2]==0)
						sum[2]=sum[2]+1;
					if (state[3]==0)
						sum[3]=sum[3]+1;
					if (state[6]==0)
						sum[6]=sum[6]+1;
					state[0]=0;
					state[1]=1;
					state[2]=1;
					state[3]=1;
					state[4]=0;
					state[5]=0;
					state[6]=1;
					state[7]=0;
					state[8]=0;
					state[9]=0;
					break;
				case 'g':
					if (state[1]==0)
						sum[1]=sum[1]+1;
					if (state[2]==0)
						sum[2]=sum[2]+1;
					if (state[3]==0)
						sum[3]=sum[3]+1;
					state[0]=0;
					state[1]=1;
					state[2]=1;
					state[3]=1;
					state[4]=0;
					state[5]=0;
					state[6]=0;
					state[7]=0;
					state[8]=0;
					state[9]=0;
					break;
				case 'a':
					if (state[1]==0)
						sum[1]=sum[1]+1;
					if (state[2]==0)
						sum[2]=sum[2]+1;
					state[0]=0;
					state[1]=1;
					state[2]=1;
					state[3]=0;
					state[4]=0;
					state[5]=0;
					state[6]=0;
					state[7]=0;
					state[8]=0;
					state[9]=0;
					break;
				case 'b':
					if (state[1]==0)
						sum[1]=sum[1]+1;
					state[0]=0;
					state[1]=1;
					state[2]=0;
					state[3]=0;
					state[4]=0;
					state[5]=0;
					state[6]=0;
					state[7]=0;
					state[8]=0;
					state[9]=0;
					break;
				case 'C':
					if (state[2]==0)
						sum[2]=sum[2]+1;
					state[0]=0;
					state[1]=0;
					state[2]=1;
					state[3]=0;
					state[4]=0;
					state[5]=0;
					state[6]=0;
					state[7]=0;
					state[8]=0;
					state[9]=0;
					break;
				case 'D':
					if (state[0]==0)
						sum[0]=sum[0]+1;
					if (state[1]==0)
						sum[1]=sum[1]+1;
					if (state[2]==0)
						sum[2]=sum[2]+1;
					if (state[3]==0)
						sum[3]=sum[3]+1;
					if (state[6]==0)
						sum[6]=sum[6]+1;
					if (state[7]==0)
						sum[7]=sum[7]+1;
					if (state[8]==0)
						sum[8]=sum[8]+1;
					state[0]=1;
					state[1]=1;
					state[2]=1;
					state[3]=1;
					state[4]=0;
					state[5]=0;
					state[6]=1;
					state[7]=1;
					state[8]=1;
					state[9]=0;
					break;
				case 'E':
					if (state[0]==0)
						sum[0]=sum[0]+1;
					if (state[1]==0)
						sum[1]=sum[1]+1;
					if (state[2]==0)
						sum[2]=sum[2]+1;
					if (state[3]==0)
						sum[3]=sum[3]+1;
					if (state[6]==0)
						sum[6]=sum[6]+1;
					if (state[7]==0)
						sum[7]=sum[7]+1;
					state[0]=1;
					state[1]=1;
					state[2]=1;
					state[3]=1;
					state[4]=0;
					state[5]=0;
					state[6]=1;
					state[7]=1;
					state[8]=0;
					state[9]=0;
					break;
				case 'F':
					if (state[0]==0)
						sum[0]=sum[0]+1;
					if (state[1]==0)
						sum[1]=sum[1]+1;
					if (state[2]==0)
						sum[2]=sum[2]+1;
					if (state[3]==0)
						sum[3]=sum[3]+1;
					if (state[6]==0)
						sum[6]=sum[6]+1;
					state[0]=1;
					state[1]=1;
					state[2]=1;
					state[3]=1;
					state[4]=0;
					state[5]=0;
					state[6]=1;
					state[7]=0;
					state[8]=0;
					state[9]=0;
					break;
				case 'G':
					if (state[0]==0)
						sum[0]=sum[0]+1;
					if (state[1]==0)
						sum[1]=sum[1]+1;
					if (state[2]==0)
						sum[2]=sum[2]+1;
					if (state[3]==0)
						sum[3]=sum[3]+1;
					state[0]=1;
					state[1]=1;
					state[2]=1;
					state[3]=1;
					state[4]=0;
					state[5]=0;
					state[6]=0;
					state[7]=0;
					state[8]=0;
					state[9]=0;
					break;
				case 'A':
					if (state[0]==0)
						sum[0]=sum[0]+1;
					if (state[1]==0)
						sum[1]=sum[1]+1;
					if (state[2]==0)
						sum[2]=sum[2]+1;
					state[0]=1;
					state[1]=1;
					state[2]=1;
					state[3]=0;
					state[4]=0;
					state[5]=0;
					state[6]=0;
					state[7]=0;
					state[8]=0;
					state[9]=0;
					break;
				case 'B':
					if (state[0]==0)
						sum[0]=sum[0]+1;
					if (state[1]==0)
						sum[1]=sum[1]+1;
					state[0]=1;
					state[1]=1;
					state[2]=0;
					state[3]=0;
					state[4]=0;
					state[5]=0;
					state[6]=0;
					state[7]=0;
					state[8]=0;
					state[9]=0;
					break;
			}
			if (x=='\n')
				break;
		}
		for (i=0;i<9;i++)
			printf("%d ",sum[i]);
		printf("%d\n",sum[9]);
		for (i=0;i<10;i++)
		{
			sum[i]=0;
			state[i]=0;
		}
		times=times-1;
	}
return 0;
}