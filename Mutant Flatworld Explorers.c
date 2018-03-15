/*機器人移動的問題
他會紀錄前面LOST的位置
之後在同樣的地方就會忽略
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (void)
{
	int x=0,y=0,standx=1,standy=0,i=0,j=0,k=0,exit=0,lost[50][2];
	char stand,act,inst[100];
	scanf(" %d",&x);
	scanf(" %d",&y);
	while (scanf(" %d %d %c",&standx,&standy,&stand)==3)
	{
		scanf(" %s",inst);
		while (i<strlen(inst))
		{
			act=inst[i];
			switch (stand)
			{
				case 'N':
					switch (act)
					{
						case 'R':
							stand='E';
							break;
						case 'L':
							stand='W';
							break;
						case 'F':
							if(standy==y)
							{
								exit=1;
								j=j+1;
								for(k=0;k<j;k++)
								{
									if(lost[k][0]==standx && lost[k][1]==standy)
										exit=0;
								}
								if(exit==1)
								{
									lost[j][0]=standx;
									lost[j][1]=standy;
								}
							}
							else
								standy=standy+1;
							break;
					}
					break;
				case 'E':
					switch (act)
					{
						case 'R':
							stand='S';
							break;
						case 'L':
							stand='N';
							break;
						case 'F':
							if(standx==x)
							{
								exit=1;
								j=j+1;
								for(k=0;k<j;k++)
								{
									if(lost[k][0]==standx && lost[k][1]==standy)
										exit=0;
								}
								if(exit==1)
								{
									lost[j][0]=standx;
									lost[j][1]=standy;
								}
							}
							else
								standx=standx+1;
							break;
					}
					break;
				case 'W':
					switch (act)
					{
						case 'R':
							stand='N';
							break;
						case 'L':
							stand='S';
							break;
						case 'F':
							if(standx==0)
							{
								exit=1;
								j=j+1;
								for(k=0;k<j;k++)
								{
									if(lost[k][0]==standx && lost[k][1]==standy)
										exit=0;
								}
								if(exit==1)
								{
									lost[j][0]=standx;
									lost[j][1]=standy;
								}
							}
							else
								standx=standx-1;	
							break;
					}
					break;
				case 'S':
					switch (act)
					{
						case 'R':
							stand='W';
							break;
						case 'L':
							stand='E';
							break;
						case 'F':
							if(standy==0)
							{
								exit=1;
								j=j+1;
								for(k=0;k<j;k++)
								{
									if(lost[k][0]==standx && lost[k][1]==standy)
										exit=0;
								}
								if(exit==1)
								{
									lost[j][0]=standx;
									lost[j][1]=standy;
								}
							}
							else
								standy=standy-1;
								break;
					}
					break;
			}
			if (exit==1)
				break;
			i=i+1;
		}
		printf("%d %d %c",standx,standy,stand);
		if (exit==1)
		{
			printf(" LOST\n");
		}
		else
		{
			printf("\n");
		}
		exit=0;
		i=0;
	}
return 0;
}