/*踩地雷
00輸入時結束
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int casenum=0,linex=0,liney=0,i=0,j=0,k=0,m=0,n=0,bomb=0;
	char square[100][100];
	scanf(" %d %d ",&linex,&liney);
	while(linex!=0 && liney!=0)
	{
		casenum=casenum+1;
		if (casenum>1)
			printf("\n");
		printf("Field #%d:\n",casenum);
		for (i=0;i<linex;i++)
		{
			for (j=0;j<liney;j++)
			{
				scanf(" %c",&square[i][j]);
			}
		}
		for (i=0;i<linex;i++)
		{
			for (j=0;j<liney;j++)
			{
				if (square[i][j]=='*')
					printf("*");
				else
				{
					for(m=i-1;m<=i+1;m++)
					{
						if(m>=0 && m<linex)
						{
							for(n=j-1;n<=j+1;n++)
							{
								if(n>=0 && n<liney)
								{
									if(square[m][n]=='*')
										bomb=bomb+1;
								}
							}
						}
					}
					printf("%d",bomb);
				}
				bomb=0;
			}
			printf("\n");
		}
		scanf(" %d %d ",&linex,&liney);
	}
return 0;
}